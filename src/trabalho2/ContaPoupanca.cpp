#include <iostream>
#include <iomanip>
#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(int numero, Cliente &cliente) : Conta(numero, cliente){}

void ContaPoupanca::extrato() {
    cout << endl << "##########################" << endl;
    cout << "# EXTRATO CONTA POUPANCA #" << endl;
    cout << "##########################" << endl;
    cout << "Numero........: " << _numero << endl;
    cout << "Cliente.......: " << _cliente.getNome() << endl;
    cout << fixed << setprecision(2);
    cout << "Saldo.........: R$ " << _saldo << endl;
}
