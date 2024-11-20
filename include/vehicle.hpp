#pragma once
#include <string>
using namespace std;

class Workshop;

class Vehicle{
    friend class Workshop;
    
    protected:
    string color;
    string brand;
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void refuel() = 0;

    public:
    Vehicle(string color, string brand);
    virtual ~Vehicle();
    string getColor() const;
    string getBrand() const;};