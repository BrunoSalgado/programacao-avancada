#include <iostream>
#include <string>
#include <iomanip>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() : _plate("-"), _weight(0), _max_kmh(0), _price(0.0) { }

Vehicle::Vehicle(string plate, int weight, int max_kmh, double price) :
    _plate(plate), _weight(weight), _max_kmh(max_kmh), _price(price) { }

void Vehicle::setPlate(string plate) {
    _plate = plate;
}

string Vehicle::getPlate() {
    return _plate;
}

void Vehicle::setWeight(int weight) {
    _weight = weight;
}

int Vehicle::getWeight() {
    return _weight;
}

void Vehicle::setMaxKmh(int max_kmh) {
    _max_kmh = max_kmh;
}

int Vehicle::getMaxKmh() {
    return _max_kmh;
}

void Vehicle::setPrice(double price) {
    _price = price;
}

double Vehicle::getPrice() {
    return _price;
}

void Vehicle::print() {
    cout << "###########################" << endl;
    cout << "######### VEHICLE #########" << endl;
    cout << "###########################" << endl;
    cout << "Plate........: " << _plate << endl;
    cout << "Weight.......: " << _weight << " kg" << endl;
    cout << "Km/h.........: " << _max_kmh << " km/h" << endl;
    cout << fixed << setprecision(2);
    cout << "Price........: R$ " << _price << endl;
}