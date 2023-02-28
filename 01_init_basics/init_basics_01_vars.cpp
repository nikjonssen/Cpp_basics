#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
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

  return 0;
}
