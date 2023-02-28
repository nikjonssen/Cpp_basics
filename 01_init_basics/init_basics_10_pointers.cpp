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

  return 0;
}
