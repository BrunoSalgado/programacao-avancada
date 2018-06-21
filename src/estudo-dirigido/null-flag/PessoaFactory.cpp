//
// Created by Bruno Salgado on 21/06/2018.
//

#include "PessoaFactory.h"
#include "Homem.h"
#include "Mulher.h"

PessoaFactory::PessoaFactory() {
    _homem = new Homem();
    _mulher = new Mulher();
}

Pessoa* PessoaFactory::getHomem() {
    return _homem->clone();
}

Pessoa* PessoaFactory::getMulher() {
    return _mulher->clone();
}

Pessoa* PessoaFactory::getCrianca() {
    return NULL;
}
