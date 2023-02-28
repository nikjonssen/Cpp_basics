#include <iostream>
using namespace std;  // can be omitted(*)

int main() {
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

  return 0;
}
