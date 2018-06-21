//
// Created by Bruno Salgado on 21/06/2018.
//

#include <iostream>
#include "Mulher.h"

using namespace std;

Mulher::Mulher() {
    _sexo = "Feminino";
}

Pessoa* Mulher::clone() {
    return new Mulher(*this);
}

Pessoa* Mulher::imprime() {
    cout << "Nome: " << _nome << endl;
    cout << "Sexo: " << _sexo << endl;
}
