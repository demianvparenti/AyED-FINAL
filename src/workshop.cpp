#include "../include/workshop.hpp"
#include "../include/car.hpp"
#include "../include/moto.hpp"
#include "../include/vehicle.hpp"
#include <iostream>

const int Workshop::maxVehicles;

Workshop::Workshop(int max, int amt) : amtVehicles(amt) {
    for (int i = 0; i < maxVehicles; ++i) {
        vehicle[i] = nullptr;
    }
}

Workshop::~Workshop() {
    for (int i = 0; i < amtVehicles; ++i) {
        delete vehicle[i]; // Free dynamically allocated vehicles
        vehicle[i] = nullptr;
    }
}

int Workshop::getAmount() const{
    return amtVehicles;
}

int Workshop::getMax(){
    return maxVehicles;
}

void Workshop::addVehicle(Vehicle* newVehicle) {
    if (amtVehicles < maxVehicles) {
        vehicle[amtVehicles] = newVehicle; // Assign the new vehicle
        amtVehicles++;
    } else {
        std::cout << "El taller esta lleno. No se pueden agregar mas vehiculos." << std::endl;
    }
}

void Workshop::fixVehicles(){
    for (int i = 0; i < amtVehicles; ++i) {
        if (vehicle[i] != nullptr) {
            vehicle[i]->start(); // Call start() only on non-null pointers
            std::cout << "Vehiculo " << i << " fue arreglado" << std::endl;
        }
        }
    cout << "Se arreglaron todos los vehiculos" << endl;
}