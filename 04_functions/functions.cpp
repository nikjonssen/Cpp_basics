#include <iostream>
using namespace std;  // can be omitted(*)

// Function declaration
void noDefNoParam();  // void type function does not return any value
void noDefault(string param);
void multiParam(string param1, string param2);
void passByRefNumSwap(int &x, int &y);  // pass by reference, as a parameters, changes initial argument's values
void arrParam(int param[]);  // takes array as a parameter
// can insert array length, but only for semantic purpose
// function will still run, even if passed argument will be bigger/smaller in length
int addFunc(int p1, int p2);  // int type will return an integer value
int recursSum(int p);  // recursive function

// function overloading (same name, different number/type of parameters)
int fnOverload(int p1, int p2);
int fnOverload(int p1, int p2, int p3);
string fnOverload(string p1, string p2);

// Declaration & definition with default value
void withDefault(string param = "John-117") {  // optional parameter with default value (not required)
  cout << "withDefault was called with argument: "<< param << endl;
}

// The main method
int main() {
  int num1 = 2;
  int num2 = 5;
  int result = addFunc(2, 3);
  int array[3] = {10, 20, 30};

  noDefNoParam();
  noDefault("Cortana");  // parameter passed to function is called an argument
  withDefault();
  withDefault("Frederic-104");
  multiParam("Kelly-087", "Linda-058");
  passByRefNumSwap(num1, num2);
  arrParam(array);

  cout << "addFunc result: " << result << endl;
  cout << "num1 value after passByRefNumSwap: " << num1 << endl;
  cout << "num2 value after passByRefNumSwap: " << num2 << endl;
  cout << "fnOverload int return 2 parameters: " << fnOverload(2, 8) << endl;
  cout << "fnOverload int return 3 parameters: " << fnOverload(2, 8, 12) << endl;
  cout << "fnOverload string return 2 parameters: " << fnOverload("Pillar" , " of Autumn") << endl;
  cout << "recursSum return: " << recursSum(10) << endl;

  return 0;
}

// Function definition
void noDefNoParam(){
cout << "noDefNoParam was called" << endl;
}

void noDefault(string param) {  // optional parameter with default value (not required)
  cout << "noDefault was called with argument: "<< param << endl;
}

// Multiple parameters
void multiParam(string param1, string param2){  // number and order of params matter
  cout << "First parameter: " << param1 << " second parameter: " << param2 << endl;
}

int addFunc(int p1, int p2){
  return p1 + p2;
}

void passByRefNumSwap(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void arrParam(int param[]) {
  for (int i = 0; i <= sizeof(param)/sizeof(int); i++) {
    cout << "arrParam element: "<< i << " value: " << param[i] << endl;
  }
}

int fnOverload(int p1, int p2){
  return p1 + p2;
};

int fnOverload(int p1, int p2, int p3){
  return p1 + p2 + p3;
};

string fnOverload(string p1, string p2){
  return p1 + p2;
};

int recursSum(int p) {
  if (p > 0) {
    return p + recursSum(p - 1);
  } else {
    return 0;
  }
}
