#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
  // Init
  // User input
  cout << "User unput init " << endl;
  int a;
  cout << "Type a number: " << endl;
  cin >> a;
  cout << "Your number is: " << a << "\n" << endl;

  // User input
  cout << "User input basic addition " << endl;
  int x, y;
  int sum;
  cout << "Type first number: " << endl;
  cin >> x;
  cout << "Type second number: "<< endl;
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum << "\n" << endl;

  // String input
  cout << "User input one word string " << endl;
  string firstName;
  cout << "Type your first name: " << endl;
  cin >> firstName; // get user input from the keyboard
  cout << "Your first name is: " << firstName << "\n" << endl;
  cin.clear();
  fflush(stdin);
  // cin considers a space (whitespace, tabs, etc) as a terminating character
  // and leaves in memory everything that is followed
  // need to use .clear() method and fflush() function
  // otherwise next getline() func will get the remainder of data from memory as an input argument
  // and execute immediately

  cout << "User input multiple words string " << endl;
  string fullName;
  cout << "Type your full name: " << endl;
  getline (cin, fullName);
  cout << "Your full name is: " << fullName << endl;

  return 0;
}
