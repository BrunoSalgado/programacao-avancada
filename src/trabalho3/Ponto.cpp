#include <iostream>
#include "Ponto.h"

using namespace std;

Ponto::Ponto() : _x(0), _y(0) {};

Ponto::Ponto(double x, double y) : _x(x), _y(y) {};

void Ponto::imprime() {
    cout << "(" << _x << ", " << _y << ")" << endl;
}

Ponto Ponto::operator+(Ponto ponto) {
    return Ponto(_x + ponto._x, _y + ponto._y);
}

Ponto Ponto::operator-(Ponto ponto) {
    return Ponto(_x - ponto._x, _y - ponto._y);
}

Ponto Ponto::operator*(Ponto ponto) {
    return Ponto(_x * ponto._x, _y * ponto._y);
}

Ponto Ponto::operator*(double e) {
    return Ponto(_x * e, _y * e);
}

double Ponto::operator[](int pos) {
    if (pos < 0 || pos > 1) return -999;

    if (pos == 0)
        return _x;
    else
        return _y;
}
