#include <iostream>
#include <iomanip>
#include "Car.h"

Car::Car() : _model("-"), _color("-"), Vehicle() { }

Car::Car(string plate, int weight, int max_kmh, double price, string model, string color) :
    _model(model), _color(color), Vehicle (plate, weight, max_kmh, price) { }

void Car::setModel(string model) {
    _model = model;
}

string Car::getModel() {
    return _model;
}

void Car::setColor(string color) {
    _color = color;
}

string Car::getColor() {
    return _color;
}

void Car::print() {
    cout << "###########################" << endl;
    cout << "########### CAR ###########" << endl;
    cout << "###########################" << endl;
    cout << "Plate........: " << _plate << endl;
    cout << "Weight.......: " << _weight << " kg" << endl;
    cout << "Km/h.........: " << _max_kmh << " km/h" << endl;
    cout << fixed << setprecision(2);
    cout << "Price........: R$ " << _price << endl;
    cout << "Model........: " << _model << endl;
    cout << "Color........: " << _color << endl;
}
