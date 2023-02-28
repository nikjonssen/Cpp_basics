#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
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
  cout << "\n";

  return 0;
}
