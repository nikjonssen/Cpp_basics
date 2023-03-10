#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
  // References
  cout << "References" << endl;
  string food = "Pizza";
  string &meal = food;  // reference stores value of a variable
  // '&' address-of/reference operator
  cout << "Variable value: " << food << endl;
  cout << "Variable memory address: " << &food << endl;
  cout << "Reference value: " << meal << endl;
  cout << "Reference memory address: " << &meal << endl;
  cout << endl;

  return 0;
}
