#pragma once
#include <string>
using namespace std;
#include "vehicle.hpp"

class Moto : public Vehicle{
    public:
    Moto(string engine);
    ~Moto();
    string getEngine() const;

    protected:
    string engine;
    void start() override;
    void stop() override;
    void refuel() override;
};