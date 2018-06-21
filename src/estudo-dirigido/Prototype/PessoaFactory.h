//
// Created by Bruno Salgado on 21/06/2018.
//

#ifndef ESTUDO_DIRIGIDO_PESSOAFACTORY_H
#define ESTUDO_DIRIGIDO_PESSOAFACTORY_H

#include "Pessoa.h"

class PessoaFactory {
private:
    Pessoa* _homem;
    Pessoa* _mulher;

public:
    PessoaFactory();

    /**
     * @desc retorna um clone de Homem
     * @return {Pessoa}
     */
    Pessoa* getHomem();

    /**
     * @desc retorna um clone de Mulher
     * @return {Pessoa}
     */
    Pessoa* getMulher();
};


#endif //ESTUDO_DIRIGIDO_PESSOAFACTORY_H
