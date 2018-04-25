#include <iostream>
#include <iomanip>
#include "Pickup.h"

Pickup::Pickup(string plate, int weight, int max_kmh, double price, string model, string color, double capacity,
               double length, double height) :
        Vehicle (plate, weight, max_kmh, price),
        Truck(plate, weight, max_kmh, price, capacity, length, height),
        Car(plate, weight, max_kmh, price, model, color) {}

void Pickup::print() {
    cout << "###########################" << endl;
    cout << "########## TRUCK ##########" << endl;
    cout << "###########################" << endl;
    cout << "Plate........: " << _plate << endl;
    cout << "Weight.......: " << _weight << " kg" << endl;
    cout << "Km/h.........: " << _max_kmh << " km/h" << endl;
    cout << fixed << setprecision(2);
    cout << "Price........: R$ " << _price << endl;
    cout << "Model........: " << _model << endl;
    cout << "Color........: " << _color << endl;
    cout << fixed << setprecision(2);
    cout << "Capacity.....: " << _capacity << " tons"<< endl;
    cout << fixed << setprecision(2);
    cout << "Length.......: " << _length << " meters" << endl;
    cout << fixed << setprecision(2);
    cout << "Height.......: " << _height << " meters" << endl;
}
