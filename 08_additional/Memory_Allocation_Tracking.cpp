#include <iostream>
#include <memory>
#include <string>
using namespace std;

void* operator new(size_t size) {  // 'new' operator overload
	cout << "Allocated " << size << "bytes\n";
	return malloc(size);
};

void operator delete(void* memory, size_t size) {
	cout << "Freed " << size << "bytes\n";
	free(memory);
}

struct Object {
	int x, y, z;
};

int main() {
	string text = "Text";
	unique_ptr<Object> obj1 = make_unique<Object>();
}