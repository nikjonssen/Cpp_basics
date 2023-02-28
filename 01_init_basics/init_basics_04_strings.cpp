#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
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

  return 0;
}
