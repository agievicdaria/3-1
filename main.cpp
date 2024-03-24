#include <iostream>
#include "Car.h"
#include "Lorry.h"
using namespace std;

int main() {
    Car car;
    Lorry lorry;

    cout << "Enter car details:\n";
    cin >> car;
    cout << "Enter lorry details:\n";
    cin >> lorry;

    cout << "\nCar details: " << car << endl;
    cout << "Lorry details: " << lorry << endl;

    car.changePower(200);
    lorry.changeBrand("Mercedes");
    lorry.changeLoadCapacity(6000);

    cout << "\nCar details: " << car << endl;
    cout << "Lorry details: " << lorry << endl;

    return 0;
}
