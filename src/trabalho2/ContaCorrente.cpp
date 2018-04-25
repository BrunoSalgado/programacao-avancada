#include <iostream>
#include <iomanip>
#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(int numero, Cliente &cliente) : Conta(numero, cliente){}

void ContaCorrente::extrato() {
    cout << endl << "############################" << endl;
    cout << "## EXTRATO CONTA CORRENTE ##" << endl;
    cout << "############################" << endl;
    cout << "Numero........: " << _numero << endl;
    cout << "Cliente.......: " << _cliente.getNome() << endl;
    cout << fixed << setprecision(2);
    cout << "Saldo.........: R$ " << _saldo << endl;
}
