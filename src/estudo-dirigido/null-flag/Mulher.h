//
// Created by Bruno Salgado on 21/06/2018.
//

#ifndef ESTUDO_DIRIGIDO_MULHER_H
#define ESTUDO_DIRIGIDO_MULHER_H

#include "Pessoa.h"

class Mulher : public Pessoa {
public:
    Mulher();

    /**
     * @desc clona objeto
     * @return {Mulher}
     */
    virtual Pessoa* clone();

    /**
     * @desc imprime obj
     */
    virtual Pessoa* imprime();
};


#endif //ESTUDO_DIRIGIDO_MULHER_H
