#ifndef _PICKUP_H_
#define _PICKUP_H_

#include "Car.h"
#include "Truck.h"

class Pickup : public Car, public Truck {
public:
    Pickup(string plate, int weight, int max_kmh, double price, string model, string color, double capacity,
           double length, double height);

    /**
     * @desc print truck data
     */
    void print();
};


#endif //_PICKUP_H_
