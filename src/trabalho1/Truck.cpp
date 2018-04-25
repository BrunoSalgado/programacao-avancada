#include <iostream>
#include <iomanip>
#include "Truck.h"

Truck::Truck() : _capacity(0.0), _length(0.0), _height(0.0), Vehicle() {}

Truck::Truck(string plate, int weight, int max_kmh, double price, double capacity, double length, double height) :
        _capacity(capacity), _length(length), _height(height), Vehicle (plate, weight, max_kmh, price) { }

void Truck::setCapacity(double capacity) {
    _capacity = capacity;
}

double Truck::getCapacity() {
    return _capacity;
}

void Truck::setLenght(double length) {
    _length = length;
}

double Truck::getLenght() {
    return _length;
}

void Truck::setHeight(double height) {
    _height = height;
}

double Truck::getHeight() {
    return _height;
}

void Truck::print() {
    cout << "###########################" << endl;
    cout << "########## TRUCK ##########" << endl;
    cout << "###########################" << endl;
    cout << "Plate........: " << _plate << endl;
    cout << "Weight.......: " << _weight << " kg" << endl;
    cout << "Km/h.........: " << _max_kmh << " km/h" << endl;
    cout << fixed << setprecision(2);
    cout << "Price........: R$ " << _price << endl;
    cout << fixed << setprecision(2);
    cout << "Capacity.....: " << _capacity << " tons"<< endl;
    cout << fixed << setprecision(2);
    cout << "Length.......: " << _length << " meters" << endl;
    cout << fixed << setprecision(2);
    cout << "Height.......: " << _height << " meters" << endl;
}
