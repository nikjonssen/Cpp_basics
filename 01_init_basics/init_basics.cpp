#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
  // Hello World
  cout << "Hello World!\n\n";  // or std::cout << "Hello World!"; if omitted(*)
  // '<<' insertion operator

  // Variables / constants
  cout << "Variables"<< endl;
  int year = 2077;
  int a = 1, b = 2, c = 3;
  int d, e, f;
  d = e = f = 25;
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << "The year is " << year << " AD" << endl;  // endl acts as '\n'
  cout << a << " " << b << " " << c << endl;
  cout << d << " " <<  e << " " << f << endl;
  cout << minutesPerHour << " " << PI << "\n" << endl;

  // User input
  cout << "User unput " << endl;
  int x;
  cout << "Type a number: " << endl;
  // cin >> x;
  cout << "Your number is: " << x << "\n" << endl;

  // Data types
  cout << "Data types" << endl;
  int myNum = 5;               // Integer (whole number), 2 or 4 bytes
  float myFloatNum = 5.99;     // Floating point number, 4 bytes
  double myDoubleNum = 9.98;   // Floating point number, 8 bytes
  char myLetter = 'D';         // Character, surrounded by single quotes ', 1 byte
  char meAscii = 65;           // Character from ASCII, 'a'
  bool myBoolean = true;       // Boolean, 1 byte
  string myText = "Hello";     // String, surrounded by double quotes "
  // #include <string> header required for string to work / can be embedded in <iostream>
  cout << myText << "\n" <<  endl;

  // Operators
  cout << "Operators" << endl;
  // arithmetical: +, -, *, /, %, ++, --
  // assignment:  =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=,
  // comparison: ==, !=, <, >, <=, >=
  // logical: &&, ||, !
  // bitwise: &, |, ^, ~, <<, >>
  int bin = 8;
  int binAnd = bin & 3;  // binary AND operation
  int binOr = bin | 3;  // binary OR operation
  int binXor = bin ^ 3;  // binary XOR operation
  int binComp = ~bin + 1;  // binary 1's complement, byte change: 0 to 1 and 1 to 0, important to add +1 as a second step
  int binShl = bin << 1;  // binary shift left, *2^x
  int binShr = bin >> 1;  // binary shift right, /2^x
  cout << "Bin AND " << binAnd << endl;
  cout << "Bin OR " << binOr << endl;
  cout << "Bin XOR " << binXor << endl;
  cout << "Bin Complementary " << binComp << endl;
  cout << "Bin Shift Left " << binShl << endl;
  cout << "Bin Shift Right " << binShr << "\n" << endl;

  // Strings
  cout << "Strings" << endl;
  // strings are actually objects with embedded methods
  string firstName = "John";
  string middleName = " Chief";
  string lastName = "-117";
  string wName = firstName + middleName;  // concatenation
  string fullName = firstName.append(lastName);  // concatenation with method
  string withQuotes = "John \"Master Chief\" 117";
  cout << wName << endl;
  cout << fullName << endl;
  cout << "Length of the string: " << fullName.length() << " characters" << endl;  // can use alias .size()
  cout << "First character of the string: " << firstName[0] << endl;
  cout << withQuotes << "\n" << endl;

  // Math
  cout << "Math" << endl;
  cout << "Embedded max function result for 8 and 5: " << max(8, 5) << endl;
  cout << "Many math function can be added with <cmath> library" << "\n" << endl;

  // Conditions
  cout << "Conditions" << endl;
  int time = 18;
  // if / else if / else
  if (time < 12) {
    cout << "Good day." << endl;
  } else if (time < 18) {
    cout << "Good day." << endl;
  } else {
    cout << "Good evening." << endl;
  };
  string result = (time <= 18) ? "Good day." : "Good evening."; // ternary operator
  cout << result << "\n" << endl;
  // switch
  int day = 7;
  switch (day) {
    case 6:
      cout << "Today is Saturday" << endl;
      break;
    case 7:
      cout << "Today is Sunday" << endl;
      break;
    default:
      cout << "Looking forward to the Weekend" << endl;
  };
  cout << endl;

  // Loops
  cout << "Loops" << endl;
  // while
  int wl = 0;
  while (wl < 3) {
    cout << "While loop: " << wl << "\n";
    wl++;
  }
  // do / while
  int dwl = 1;
  do {
    cout << "Do/while loop: " << dwl << "\n";
    dwl++;
  }
  while (dwl < 2);
  // for
  for (int i = 0; i < 5; i++) {
    if (i == 2){
        continue;  // skips 1
    };
    if (i == 4){
        break;   // breaks out of the loop
    }
    cout << "For loop: " << i << "\n";
  };
  // for each
  int myNumbers[3] = {10, 20, 30};
  for (int i : myNumbers) {
    cout << "For each loop: " << i << "\n";
  }
  cout << endl;

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
  cout << endl;

  // References
  cout << "References" << endl;
  string food = "Pizza";
  string &meal = food;  // reference stores value of a variable
  // '&' reference operator
  cout << "Variable value: " << food << endl;
  cout << "Variable memory address: " << &food << endl;
  cout << "Reference value: " << meal << endl;
  cout << "Reference memory address: " << &meal << endl;
  cout << endl;

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
