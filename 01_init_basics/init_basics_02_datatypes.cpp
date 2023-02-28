#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
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

  return 0;
}
