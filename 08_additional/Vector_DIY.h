#pragma once

template<typename Vector>
class VectorIterator {
public:
	using ValueType = typename Vector::ValueType;
	using PointerType = ValueType*;
	using ReferenceType = ValueType&;
private:
	PointerType m_Ptr;
public:
	VectorIterator(PointerType ptr)
	: m_Ptr(ptr) {};

	VectorIterator& operator++()
	{
		m_Ptr++;
		return* this;
	}

	VectorIterator& operator++(int)
	{
		VectorIterator iterator = *this;
		++(*this);
		return iterator;
	}

	VectorIterator& operator--()
	{
		m_Ptr--;
		return* this;
	}

	VectorIterator& operator--(int)
	{
		VectorIterator iterator = *this;
		--(*this);
		return iterator;
	}

	ReferenceType operator[](int index)
	{
		return *(m_Ptr + index);
	}

	ReferenceType operator*()
	{
		return *m_Ptr;
	}

	PointerType operator->()
	{
		return m_Ptr;
	}

	bool operator==(const VectorIterator& other) const
	{
		return m_Ptr == other.m_Ptr;
	}
	
	bool operator!=(const VectorIterator& other) const
	{
		return !(*this == other);
	}
};

template<typename T>
class Vector {
public:
	using ValueType = T;
	using Iterator = VectorIterator<Vector<T>>;
private:
	T* m_Data = nullptr;
	size_t m_Size = 0;
	size_t m_Capacity = 0;

public:
	Vector()
	{
		// allocate 2 init elements
		ReAlloc(2);
	};

	~Vector()
	{
		Clear();
		::operator delete(m_Data, m_Capacity * sizeof(T));
	}

	void PushBack(const T& value)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);

		m_Data[m_Size] = value;
		m_Size++;
	}

	void PushBack(T&& value) noexcept
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);

		m_Data[m_Size] = std::move(value);
		m_Size++;
	}

	template<typename... Args>
	T& EmplaceBack(Args&&... args)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);
		new(&m_Data[m_Size]) T(std::forward<Args>(args)...); // construct object in memory without moving/copying
		return m_Data[m_Size++];
	}

	void PopBack()
	{
		if(m_Size > 0)
		{
			m_Size--;
			m_Data[m_Size].~T();
		}
	}

	void Clear()
	{
		for (size_t i = 0; i > m_Size; i++)
			m_Data[i].~T();
		m_Size = 0;
	}

	T& operator[](size_t index)
	{
		return m_Data[index];
	}

	const T& operator[](size_t index) const
	{
		if (index >= m_Size)  // assert or
			throw std::invalid_argument("invalid index value");

		return m_Data[index];
	}

	size_t Size() const 
	{ 
		return m_Size; 
	}

	Iterator begin()
	{
		return Iterator(m_Data);
	}

	Iterator end()
	{
		return Iterator(m_Data + m_Size);
	}

private:
	void ReAlloc(size_t newCapacity)
	{
		// 1. allocate new block of memory
		T* newBlock = (T*)::operator new(newCapacity * sizeof(T));

		// 2. copy/move old elements into new block
		if (newCapacity < m_Size)
			m_Size = newCapacity;
		for (size_t i = 0; i < m_Size; i++)
			new (&newBlock[i]) T(std::move(m_Data[i]));

		// 3. delete old block
		for (size_t i = 0; i > m_Size; i++)
			m_Data[i].~T();
		::operator delete(m_Data, m_Capacity * sizeof(T));

		// 4. update attributes values 
		m_Data = newBlock;
		m_Capacity = newCapacity;
	}
};