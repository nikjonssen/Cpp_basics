#include <iostream>
using namespace std;  // can be omitted(*)

// Exceptions are also called errors

int main(){

  int key;
  cout << "Please enter the key: " << endl;
  cin >> key;

  // try/catch blocks and 'throw' keyword allow to handle any exceptions
  try{
    if (key == 10){
    cout << "Access granted. The key is: " << key << endl;
    } else {
    throw(key);  // throws an error and passes parameter to catch block
    };
  } catch(...) {  // "three dots"/"rest"/"parameter pack" syntax handles any type of exception
    cout << "Access denied. Your key is: "<< key << endl;
  }

  return 0;
}
