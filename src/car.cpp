#include "../include/car.hpp"
#include <iostream>
using namespace std;

Car::Car(string engine)
    : Vehicle("brand", "color"), engine(engine) {}

Car::~Car() {}

string Car::getEngine() const{
    return engine;
}

void Car::start(){
    cout << "El auto arranca" << endl;
}

void Car::stop(){
    cout << "El auto frena" << endl;
}

void Car::refuel(){
    cout << "El auto fue repostado" << endl;
}