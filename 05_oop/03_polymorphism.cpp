#include <iostream>
using namespace std;  // can be omitted(*)

// polymorphism allows us perform different tasks through inherited methods
// essentially to overwrite methods

// Base class
class Car {
  public:
    void topSpeed() {
      cout << "Top speed is 180 kph" << endl;
    }
};

// Derived class
class RallyCar : public Car {
  public:
    int topSpeed() {
      return 280;
    }
};

// Derived class
class DriftCar : public Car {
  public:
    void topSpeed() {
      cout << "Drift car top speed is 220 kph" << endl;
    }
};

int main() {
  Car car;
  RallyCar rallyCar;
  DriftCar driftCar;

  car.topSpeed();
  driftCar.topSpeed();

  cout << "Rally car top speed is " << rallyCar.topSpeed() << " kph" << endl;
  return 0;
}
