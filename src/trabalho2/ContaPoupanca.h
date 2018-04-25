#ifndef _CONTAPOUPANCA_H_
#define _CONTAPOUPANCA_H_

#include "Conta.h"

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(int numero, Cliente &cliente);

    /**
     * @desc ver extrato bancario
     */
    void extrato();

    /**
     * @desc aplica juros diario
     * @param dias
     */
    virtual void aplicaJurosDiarios(int dias) const {
        for (int i = 0; i < dias; i++) {
            _saldo -= _saldo * 0.0008;
        }
    };
};


#endif //_CONTAPOUPANCA_H_
