#pragma once
#include <string>
using namespace std;
#include "vehicle.hpp"


class Car : public Vehicle{
    public:
    Car(string engine);
    ~Car();
    string getEngine() const;

    protected:
    string engine;
    void start() override;
    void stop() override;
    void refuel() override;
};