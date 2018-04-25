#include <iostream>
#include "Cliente.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"

int main() {
    Cliente cliente1 = Cliente("Bruno");
    Cliente cliente2 = Cliente("Anderson");

    ContaCorrente contaCorrente1 = ContaCorrente(1234, cliente1);
    ContaCorrente contaCorrente2 = ContaCorrente(4321, cliente2);

    contaCorrente1.deposita(100.5);
    contaCorrente1.retira(10);
    contaCorrente1.deposita(20.8);
    contaCorrente1.retira(550.45);

    contaCorrente2.deposita(34.5);
    contaCorrente2.retira(6);
    contaCorrente2.deposita(560.8);
    contaCorrente2.retira(340.5);

    ContaPoupanca contaPoupanca1 = ContaPoupanca(2143, cliente1);
    ContaPoupanca contaPoupanca2 = ContaPoupanca(3412, cliente2);

    contaPoupanca1.deposita(231.5);
    contaPoupanca1.retira(150);
    contaPoupanca1.deposita(2000.8);
    contaPoupanca1.retira(500.5);

    contaPoupanca1.transfere(1000, contaCorrente1);

    contaPoupanca2.deposita(34.5);
    contaPoupanca2.retira(6);
    contaPoupanca2.deposita(560.8);
    contaPoupanca2.retira(340.5);

    contaCorrente1.extrato();
    contaCorrente2.extrato();
    contaPoupanca1.extrato();
    contaPoupanca2.extrato();

    cout << endl << "###### JUROS DIARIOS ######" << endl;

    contaCorrente2.aplicaJurosDiarios(100);
    contaPoupanca2.aplicaJurosDiarios(100);

    contaCorrente2.extrato();
    contaPoupanca2.extrato();

    return 0;
}