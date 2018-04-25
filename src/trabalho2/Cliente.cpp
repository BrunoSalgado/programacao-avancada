#include "Cliente.h"

Cliente::Cliente(string nome) {
    _nome = nome;
}

void Cliente::setNome(string nome) {
    _nome = nome;
}

string Cliente::getNome() {
    return _nome;
}
