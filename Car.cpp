#include "Car.h"
using namespace std;
#include <iostream>
#include <sstream>

Car::Car(const string& brand, int cylinders, int power) {
    if (cylinders <= 0 || power <= 0) {
        cerr << "Error: Number of cylinders and power must be positive.\n";
        return;
    }
    this->brand = brand;
    this->cylinders = cylinders;
    this->power = power;
}

Car::~Car() {}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string& brand) {
    this->brand = brand;
}

int Car::getCylinders() const {
    return cylinders;
}

void Car::setCylinders(int cylinders) {
    this->cylinders = cylinders;
}

int Car::getPower() const {
    return power;
}

void Car::setPower(int power) {
    this->power = power;
}

void Car::changePower(int newPower) {
    if (newPower <= 0) {
        cerr << "Error: Power must be positive.\n";
        return;
    }
    power = newPower;
}

istream& operator>>(istream& in, Car& car) {
    cout << "Enter brand: ";
    in >> car.brand;
    cout << "Enter number of cylinders: ";
    in >> car.cylinders;
    cout << "Enter power: ";
    in >> car.power;
    return in;
}

ostream& operator<<(ostream& out, const Car& car) {
    out << string(car);
    return out;
}

Car::operator string() const {
    stringstream ss;
    ss << "Brand: " << getBrand() << ", Cylinders: " << getCylinders() << ", Power: " << getPower() << endl;
    return ss.str(); 
}