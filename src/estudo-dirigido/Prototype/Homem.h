//
// Created by Bruno Salgado on 21/06/2018.
//

#ifndef ESTUDO_DIRIGIDO_HOMEM_H
#define ESTUDO_DIRIGIDO_HOMEM_H

#include "Pessoa.h"

class Homem : public Pessoa {
public:
    Homem();

    /**
     * @desc clona objeto
     * @return {Homem}
     */
    virtual Pessoa* clone();

    /**
     * @desc imprime obj
     */
    virtual Pessoa* imprime();
};


#endif //ESTUDO_DIRIGIDO_HOMEM_H
