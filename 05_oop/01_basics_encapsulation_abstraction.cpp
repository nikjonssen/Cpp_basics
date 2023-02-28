#include <iostream>
using namespace std;  // can be omitted(*)

// The 4 main principles of OOP are: encapsulation, abstraction, inheritance, polymorphism
// can read more about them in official sources

// Create a Car class with some attributes
class Car {  // class acts as a template for objects

  public:  // access specifier
  // there are 3 types: public, private, protected
  // following attributes and methods can be accessed outside the class
    string brand;  // variables inside a class referred as class attributes
    string model;
    int year;
    // method definition inside the class
    void turnLeft(){  // functions inside a class referred as class methods
      cout << "Left turn" << endl;
    };
    // method declaration inside the class
    void turnRight();
    int maxSpeed(int param);  // with parameter
    Car(string a, string b, int c);  // constructor method
    void setKey(string s);  // the set method allows to modify private attribute 'key'
    string getKey();  // the get method allows to get the value of private attribute 'key'

  private:
  // following attributes and methods cannot be accessed directly outside the class
  // but can be accessed by public methods of the same class
  // if not specified, all attributes and methods are private by default
    string key = "car key";
};

// Method definition outside the class
void Car::turnRight(){  // '::' resolution operator
  cout << "Right turn" << endl;
};

int Car::maxSpeed(int param){
  cout << "Max speed is (kph): " << param << endl;
}

// constructor method, called every time an object of a class is created
// always public and does not have any return value
Car::Car(string a, string b, int c){
  brand = a;
  model = b;
  year = c;
  cout << "Car " << a << " " << b << " was created" << endl;
};

// Set and get methods
void Car::setKey(string s){
  key = s;
}
string Car::getKey(){
  return key;
}

int main() {
  // Create an object without constructor
  // Car carObj1;
  // carObj1.brand = "BMW";
  // carObj1.model = "M3";
  // carObj1.year = 2005;

  // Create and object with constructor
  Car carObj1("BMW", "M3", 2005);
  Car carObj2("Ford", "Focus RS", 2010);

  // Call object's method
  carObj1.turnLeft();
  carObj1.turnRight();
  carObj1.maxSpeed(250);

  // Attributes/methods access public/private/protected
  carObj1.year = 2006;
  // carObj2.key = "my key";  // will generate compiler error
  carObj1.setKey("new key");

  // Print attribute values
  cout << carObj1.brand << " " + carObj1.model + " " << carObj1.year << endl;
  cout << carObj2.brand << " " + carObj2.model + " " << carObj2.year << endl;
  // cout << "Car 1 key " << carObj1.key << endl;  // will generate compiler error
  cout << "Car 1 key: " << carObj1.getKey() << endl;
  return 0;
}
