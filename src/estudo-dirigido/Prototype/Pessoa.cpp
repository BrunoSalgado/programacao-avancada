//
// Created by Bruno Salgado on 21/06/2018.
//

#include "Pessoa.h"

void Pessoa::setNome(string nome) {
    _nome = nome;
}

void Pessoa::setSexo(string sexo) {
    _sexo = sexo;
}

string Pessoa::getNome() {
    return _nome;
}

string Pessoa::getSexo() {
    return _sexo;
}
