#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
  // Arrays
  cout << "Arrays" << endl;
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  int nums[3] = { 10, 20, 30 };
  cars[0] = "Toyota";
  cout << "Array element index 0 value " << cars[0] << endl;
  // loops
  for (int i = 1; i < 4 ; i++) {
  cout << "Array for loop element index "<< i << " value " << cars[i] << endl;
  };
  for (int i : nums) {
  cout << "Array for each loop value " << i << endl;
  };
  // array size is not required but considered a 'good practice'
  int nums2[] = { 30, 40, 50 };
  nums2[3] = 70;
  cout << "Array element index 3 value " << nums2[3] << endl;
  // will not show up later in sizeof (!), that why its better to choose array size in declaration
  // size
  cout << "Array size in bytes: " << sizeof(nums2) << endl;
  cout << "Array number of elements: " << sizeof(nums2)/sizeof(int) << endl;  // divide array size by size of data type
  // can modify loop condition
  for (int i = 0; i < sizeof(nums2)/sizeof(int) ; i++) {
  cout << "Array modified for loop element index "<< i << " value " << nums2[i] << endl;
  };
  // multi-dimensional arrays / matrix (good for representing grids)
  string letters[2][3] = {  // an array of 2 elements, each consists of 3 elements
  { "A", "B", "C" },
  { "D", "E", "F" }
  };
  cout << "Multi-dimensional array, first dimension element 0: third value: " << letters[0][2] << endl;
  // loop
  for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    cout << letters[i][j] << "\n";
  }
  };
  // universal initialization
  int foo[] { 10, 20, 30 };  // int foo[] = { 10, 20, 30 };
  cout << endl;

  return 0;
}
