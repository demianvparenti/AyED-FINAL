#pragma once
#include "vehicle.hpp"

class Workshop {
    private:
    int amtVehicles;
    static const int maxVehicles = 5;
    Vehicle* vehicle[maxVehicles];

    public:
    Workshop(int, int);
    ~Workshop();
    void addVehicle(Vehicle*);
    void fixVehicles();
    int getAmount() const;
    static int getMax();
};