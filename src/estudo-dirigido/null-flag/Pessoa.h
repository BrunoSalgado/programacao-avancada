//
// Created by Bruno Salgado on 21/06/2018.
//

#ifndef ESTUDO_DIRIGIDO_PESSOA_H
#define ESTUDO_DIRIGIDO_PESSOA_H

#include <string>

using namespace std;

class Pessoa {
protected:
    string _nome;
    string _sexo;

public:
    /**
     * @desc metodo para clonar
     * @return {Pessoa}
     */
    virtual Pessoa* clone() = 0;

    /**
     * @desc metodo para imprimir
     */
    virtual Pessoa* imprime() = 0;

    /**
     * @desc salva o nome
     * @param {string} nome
     */
    void setNome(string nome);

    /**
     * @desc salva o sexo
     * @param {string} sexo
     */
    void setSexo(string sexo);

    /**
     * @desc retorna o nome
     * @return {string}
     */
    string getNome();

    /**
     * @desc retorna o sexo
     * @return {string}
     */
    string getSexo();
};


#endif //ESTUDO_DIRIGIDO_PESSOA_H
