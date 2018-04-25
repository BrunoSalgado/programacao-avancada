#ifndef _CONTA_H_
#define _CONTA_H_

#include "Cliente.h"

class Conta {
protected:
    int _numero;
    // TODO: na UML, saldo é informado como int
    mutable float _saldo;
    Cliente _cliente;
public:
    Conta(int numero, Cliente &cliente);

    /**
     * @desc deposita valor
     * @param valor
     */
    void deposita(float valor);

    /**
     * @desc retira valor
     * @param valor
     */
    void retira(float valor);

    /**
     * @desc transfere para outra conta
     * @param valor
     * @param conta
     */
    void transfere(float valor, Conta &conta);

    /**
     * @desc ver extrato bancario
     */
    void extrato();

    /**
     * @desc aplica juros diario
     * @param dias
     */
    virtual void aplicaJurosDiarios(int dias) const = 0;
};


#endif //_CONTA_H_
