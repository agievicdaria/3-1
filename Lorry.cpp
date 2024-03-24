#include "Lorry.h"
using namespace std;
#include <sstream>

Lorry::Lorry(const string& brand, int cylinders, int power, int loadCapacity)
    : Car(brand, cylinders, power), loadCapacity(loadCapacity) {
    if (loadCapacity <= 0) {
        cerr << "Error: Load capacity must be positive.\n";
    }
}

Lorry::~Lorry() {}

int Lorry::getLoadCapacity() const {
    return loadCapacity;
}

void Lorry::setLoadCapacity(int loadCapacity) {
    this->loadCapacity = loadCapacity;
}

void Lorry::changeBrand(const string& newBrand) {
    if (newBrand.empty()) {
        cerr << "Error: Brand cannot be empty.\n";
        return;
    }
    setBrand(newBrand);
}

void Lorry::changeLoadCapacity(int newLoadCapacity) {
    if (newLoadCapacity <= 0) {
        cerr << "Error: Load capacity must be positive.\n";
        return;
    }
    loadCapacity = newLoadCapacity;
}

istream& operator>>(istream& in, Lorry& lorry) {
    in >> static_cast<Car&>(lorry);
    
    cout << "Enter load capacity: ";
    in >> lorry.loadCapacity;
    return in;
}

ostream& operator<<(ostream& out, const Lorry& lorry) {
    out << string(lorry);
    return out;
}

Lorry::operator string() const {
    stringstream ss;
    ss << "Car details: " << "Brand: " << getBrand() << ", Cylinders: " << getCylinders() << ", Power: " << getPower() << ", Load Capacity: " << getLoadCapacity();
    return ss.str(); 
}

