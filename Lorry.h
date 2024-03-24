#pragma once

#include "Car.h"
using namespace std;

class Lorry : public Car {
private:
    int loadCapacity;

public:
    Lorry(const string& brand, int cylinders, int power, int loadCapacity);
    Lorry() : Car(), loadCapacity(0) {}
    ~Lorry();

    int getLoadCapacity() const;
    void setLoadCapacity(int loadCapacity);

    void changeBrand(const string& newBrand);
    void changeLoadCapacity(int newLoadCapacity);

    operator string() const;

    friend ostream& operator<<(ostream& out, const Lorry& lorry);
    friend istream& operator>>(istream& in, Lorry& lorry);
};
