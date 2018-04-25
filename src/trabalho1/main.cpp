#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Pickup.h"

int main() {
    cout << ">> VEHICLE WITH PARAMS" << endl << endl;

    Vehicle vehicle1 = Vehicle("ABC-1234", 500, 120, 35600);
    vehicle1.print();

    cout << endl << ">> VEHICLE WITHOUT PARAMS" << endl << endl;

    Vehicle vehicle2 = Vehicle();
    vehicle2.print();

    cout << endl << ">> CAR WITH PARAMS" << endl << endl;

    Car car1 = Car("AAA-1111", 450, 150, 40890, "Hyundai HB20", "White");
    car1.print();

    cout << endl << ">> CAR WITHOUT PARAMS" << endl << endl;

    Car car2 = Car();
    car2.print();

    cout << endl << ">> TRUCK WITH PARAMS" << endl << endl;

    Truck truck1 = Truck("BBB-2222", 2250, 100, 240000, 5, 20, 4);
    truck1.print();

    cout << endl << ">> TRUCK WITHOUT PARAMS" << endl << endl;

    Truck truck2 = Truck();
    truck2.print();

    cout << endl << ">> PICKUP WITH PARAMS" << endl << endl;

    Pickup pickup = Pickup("CCC-4444", 850, 145, 160000, "Fiat Toro", "Red", 1.5, 8, 2.4);
    pickup.print();

    return 0;
}