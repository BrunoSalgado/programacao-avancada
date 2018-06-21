//
// Created by Bruno Salgado on 21/06/2018.
//

#import <iostream>
#include "Homem.h"

using namespace std;

Homem::Homem() {
    _sexo = "Masculino";
}

Pessoa* Homem::clone() {
    return new Homem(*this);
}

Pessoa* Homem::imprime() {
    cout << "Nome: " << _nome << endl;
    cout << "Sexo: " << _sexo << endl;
}
