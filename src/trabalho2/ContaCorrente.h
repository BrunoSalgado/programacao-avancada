#ifndef _CONTACORRENTE_H_
#define _CONTACORRENTE_H_

#include "Conta.h"

class ContaCorrente : public Conta {
public:
    ContaCorrente(int numero, Cliente &cliente);

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
            _saldo -= _saldo * 0.0001;
        }
    };
};


#endif //_CONTACORRENTE_H_
