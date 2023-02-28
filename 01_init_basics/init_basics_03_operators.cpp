#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
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

  return 0;
}
