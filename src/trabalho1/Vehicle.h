#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include <string>

using namespace std;

class Vehicle {
public:
    /**
     * @desc constructor
     */
    Vehicle();

    /**
     * @desc constructor with all attributes
     * @param {string} plate
     * @param {int} weight
     * @param {int} max_kmh
     * @param {double} price
     */
    Vehicle(string plate, int weight, int max_kmh, double price);

    /**
     * @desc sets car plate
     */
    void setPlate(string plate);

    /**
     * @desc returns car plate
     * @return {string}
     */
    string getPlate();

    /**
     * @desc sets car weight
     */
    void setWeight(int weight);

    /**
     * @desc returns car weight
     * @return {int}
     */
    int getWeight();

    /**
     * @desc sets max km/hour
     */
    void setMaxKmh(int max_kmh);

    /**
     * @desc returns max km/hour
     * @return {int}
     */
    int getMaxKmh();

    /**
     * @desc sets car price
     */
    void setPrice(double price);

    /**
     * @desc returns car price
     * @return {double}
     */
    double getPrice();

    /**
     * @desc print vehicle data
     */
    void print();

protected:
    // Variables
    string _plate;
    int _weight;
    int _max_kmh;
    double _price;

};


#endif //_VEHICLE_H_
