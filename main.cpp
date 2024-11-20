#include <iostream>
using namespace std;
#include "include/workshop.hpp"
#include "include/vehicle.hpp"
#include "include/car.hpp"
#include "include/moto.hpp"

int main(){
    // Create a workshop instance
    Workshop workshop(Workshop::getMax(), 0);

    // Create some Car and Moto objects
    Car* car1 = new Car("V6");
    Car* car2 = new Car("V8");
    Moto* moto1 = new Moto("Monocilindrica");
    Moto* moto2 = new Moto("Bicilindrica");
    Moto* moto3 = new Moto("Electrica");

    // Add vehicles to the workshop
    workshop.addVehicle(car1);
    workshop.addVehicle(car2);
    workshop.addVehicle(moto1);
    workshop.addVehicle(moto2);
    workshop.addVehicle(moto3);

    // Try to add another vehicle to see what happens when it's full
    Car* car3 = new Car("V9");
    workshop.addVehicle(car3);

    // Fix all vehicles
    workshop.fixVehicles();

    // Clean up dynamic memory
    delete car1;
    delete car2;
    delete moto1;
    delete moto2;
    delete moto3;

    return 0;
}