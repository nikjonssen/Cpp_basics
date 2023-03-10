#include <iostream>

template<typename T, size_t N>
class Array {
private:
	T m_Data[N];
public:
	constexpr int Size() { return N; };

	T& operator[](size_t index) { return m_Data[index]; };
	const T& operator[](size_t index) const { return m_Data[index]; };

	T* Data() { return m_Data; };
	const T* Data() const { return m_Data; };
};

int main()
{
	Array<int, 5> arr;
	memset(arr.Data(), 0, arr.Size() * sizeof(int));

	arr[1] = 3;
	arr[4] = 8;

	for (size_t i = 0; i < arr.Size(); i++)
	{
		std::cout << arr[i] << "\n";
	}
}