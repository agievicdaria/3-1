#pragma once

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int cylinders;
    int power;

public:
    Car(const string& brand, int cylinders, int power);
    Car() : brand(""), cylinders(0), power(0) {}
    ~Car();

    string getBrand() const;
    void setBrand(const string& brand);
    int getCylinders() const;
    void setCylinders(int cylinders);
    int getPower() const;
    void setPower(int power);

    void changePower(int newPower);
    operator string() const;

    friend ostream& operator<<(ostream& out, const Car& car);
    friend istream& operator>>(istream& in, Car& car);
};

