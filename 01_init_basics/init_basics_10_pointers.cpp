#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
  // Pointers
  cout << "Pointers" << endl;
  string drink = "Soda";
  string* ptr = &drink;  // pointer stores memory address of a variable
  // type of the pointer has to match the type of the variable
  // '*' dereference operator
  cout << "Variable value: " << drink << endl;
  cout << "Variable memory address: " << &drink << endl;
  cout << "Pointer value: " << ptr << endl;
  cout << "Pointer memory address: " << &ptr << endl;
  cout << "Pointer dereferenced value: " << *ptr << endl;
  cout << endl;
  cout << "Variable value modification through pointer: " << endl;
  // modify pointer's value
  // (!) it will modify / change referenced variable value
  *ptr = "Pop";
  cout << "Pointer modified value: " << *ptr << endl;
  cout << "Variable modified value: " << drink << endl;
  // read-only pointers:
  int array[3];
  const int * readOnly;  // cannot modify inner memory values of that address 
  const int * const readOnlyConst = array;  // cannot modify that address and inner memory values 
  // pointers and arrays:
  int myarray [5];
  int * mypointer;
  mypointer = myarray;  // valid statement
  // myarray = mypointer;  // invalid statement
  // mypointer can be assigned a different address, 
  // whereas myarray can never be assigned anything, 
  // and will always represent the same block of 5 elements of type int
  myarray[5] = 0;       // myarray[offset of 5] = 0
  *(myarray+5) = 0;     // pointed to by (myarray+5) = 0 
  // '[]' dereferencing operator known as 'offset operator'
  // pointers and string literals:
  const char * str = "hello";  
  // declares an array with the literal representation for "hello", 
  // and then a pointer to its first element is assigned to str
  // string literals are arrays containing null-terminated character (\0) sequences 
  // void pointers:
  auto n = 10;
  void * ptrVoid = &n;  // pointers that point to a value that has no type
  int nn = *(int*)ptrVoid;  // requires explicit conversion to dereference the value
  // ptrVoid is cast to int*ptrVoid (A) and then dereferenced to its value *A (=10)
  cout << nn << "\n";
  // null pointers:
  int * p = 0;
  int * q = nullptr;
  int * r = NULL;  
  // all above is equal and serve to eliminate uninitialized pointers
  // and problems with retrieving their values
  // pointers to functions:
  int (*func)() = main;

  return 0;
}
