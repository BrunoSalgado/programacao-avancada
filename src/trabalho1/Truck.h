#ifndef _TRUCK_H_
#define _TRUCK_H_

#include <string>
#include "Vehicle.h"

using namespace std;

class Truck : virtual public Vehicle {
public:
    Truck();

    Truck(string plate, int weight, int max_kmh, double price, double capacity, double length, double height);

    /**
     * @desc sets the capacity
     */
    void setCapacity(double capacity);

    /**
     * @desc gets capacity
     * @return {double}
     */
    double getCapacity();

    /**
     * @desc sets the length
     */
    void setLenght(double length);

    /**
     * @desc gets length
     * @return {double}
     */
    double getLenght();

    /**
     * @desc sets the height
     */
    void setHeight(double height);

    /**
     * @desc gets height
     * @return {double}
     */
    double getHeight();

    /**
     * @desc print truck data
     */
    void print();

protected:
    double _capacity;
    double _length;
    double _height;
};


#endif //_TRUCK_H_
