#ifndef _CAR_H_
#define _CAR_H_

#include "Vehicle.h"
#include <string>

using namespace std;

class Car : virtual public Vehicle {
public:
    Car();

    Car(string plate, int weight, int max_kmh, double price, string model, string color);

    /**
     * @desc sets the model
     */
    void setModel(string model);

    /**
     * @desc gets model
     * @return {string}
     */
    string getModel();

    /**
     * @desc sets the color
     */
    void setColor(string color);

    /**
     * @desc gets color
     * @return {string}
     */
    string getColor();

    /**
     * @desc print car data
     */
    void print();

protected:
    // Variables
    string _model;
    string _color;
};


#endif //_CAR_H_
