#include <iostream>
#include <iomanip>
#include "Conta.h"

Conta::Conta(int numero, Cliente &cliente) :
    _numero(numero), _cliente(cliente) {
    cout << "Criando conta " << _numero << " do cliente " << _cliente.getNome() << endl;
}

void Conta::deposita(float valor) {
    _saldo += valor;
}

void Conta::retira(float valor) {
    if (_saldo - valor > 0)
        _saldo -= valor;
    else {
        cout << endl << "## TENTATIVA DE RETIRADA NA CONTA " << _numero << " ##" << endl;
        cout << "saldo insuficiente na conta " << _numero << endl;
        cout << fixed << setprecision(2);
        cout << "valor de retirada: R$ " << valor << endl;
        cout << fixed << setprecision(2);
        cout << "saldo disponivel é de R$ " << _saldo << endl << endl;
    }
}

void Conta::transfere(float valor, Conta &conta) {
    if (_saldo > valor) {
        this->retira(valor);
        conta.deposita(valor);
    } else {
        cout << "saldo insuficiente na conta " << _numero << endl;
        cout << fixed << setprecision(2);
        cout << "saldo disponivel é de R$ " << _saldo << endl;
    }
}
