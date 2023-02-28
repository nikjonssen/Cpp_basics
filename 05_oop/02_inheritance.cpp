#include <iostream>
using namespace std;  // can be omitted(*)

// Base class (parent)
class Vehicle {
  public:
    Vehicle() {
      cout << endl << "Vehicle was created" << endl ;
    }
    string type = "Vehicle";
    void docs(){
      cout << "This is a vehicle" << endl;
    };
};

// Derived class (child)
class Car: public Vehicle {  // class Car inherits from class Vehicle
  public:
    Car() {
      cout << "Car was created" << endl;
    }
    string brand = "Ford";

  protected:
    // protected access specifier does not allow
    // attributes and methods to be a accessed directly outside the class (like private)
    // but you can access them in the inherited class
    int topSpeed = 180;
};

// Multilevel Inheritance (grandchilden)
class RallyCar: public Car {  // class Car inherits from class Vehicle
  public:
    RallyCar() {
      cout << "Rally Car was created" << endl;
    }
    string model = "Focus RS";
    void boost(){
      cout << "Boost activated" << endl;
    };
     void setTopSpeed(int s){  // 'setter' method
      topSpeed = s;
    };
    int getTopSpeed(){  // 'getter' method
      return topSpeed;
    };
};

class DriftCar: public Car {  // class Car inherits from class Vehicle
  public:
    DriftCar() {
      cout << "Drift Car was created" << endl;
    }
    string model = "Mustang";
    void nitro(){
      cout << "Nitro injected" << endl;
    };
};

// Multiple Inheritance
class UltimateCar: public RallyCar, public DriftCar {
  public:
    UltimateCar() {
      cout << "Ultimate Car was created" << endl;
    }
    // because this class inherits attributes/methods from 2 other classes
    // there can be overlap of values in same attributes/methods
    // need to specify values again otherwise if called upon will result in error
    string type = "Vehicle";
    string brand = "Ford";
    string model = "Mustang";
};

int main() {
  // Create classes
  cout << "Create classes: " << endl;
  Car myCar;
  RallyCar rallyCar;
  UltimateCar theCar;
  cout << endl;

  // Call methods
  cout << "Call methods: " << endl;
  myCar.docs();
  rallyCar.docs();
  theCar.boost();
  theCar.nitro();
  rallyCar.setTopSpeed(300);
  cout << endl;

  // Print out
  cout << "Print out: " << endl;  cout << myCar.type + " " + myCar.brand << endl;
  cout << rallyCar.type + " " + rallyCar.brand + " " + rallyCar.model << endl;
  cout << theCar.type + " " + theCar.brand + " " + theCar.model << endl;
  cout << "Rally car top speed is (kph): " << rallyCar.getTopSpeed() << endl;

  return 0;
}
