#include "../include/moto.hpp"
#include <iostream>
using namespace std;

Moto::Moto(string engine)
    : Vehicle("brand", "color"), engine(engine) {}

Moto::~Moto() {}

string Moto::getEngine() const{
    return engine;
}
void Moto::start(){
    cout << "La moto arranca" << endl;
}

void Moto::stop(){
    cout << "La moto frena" << endl;
}

void Moto::refuel(){
    cout << "La moto fue repostada" << endl;
}