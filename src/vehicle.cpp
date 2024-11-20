#include "../include/vehicle.hpp"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string color, string brand)
    : color(color), brand(brand) {}

Vehicle::~Vehicle() {}

string Vehicle::getColor() const{
    return color;
}

string Vehicle::getBrand() const{
    return brand;
}