#include <iostream>
#include "Ponto.h"

using namespace std;

int main() {
    Ponto ponto1 = Ponto(2, 2);
    Ponto ponto2 = Ponto(4, 6);

    cout << ">> Ponto 1" << endl;
    ponto1.imprime();
    cout << endl << ">> Ponto 2" << endl;
    ponto2.imprime();

    cout << endl << endl << ">> Soma Ponto 1 com Ponto 2" << endl;
    Ponto soma = ponto1 + ponto2;
    soma.imprime();

    cout << endl << endl << ">> Subtracao Ponto 1 com Ponto 2" << endl;
    Ponto subtracao = ponto1 - ponto2;
    subtracao.imprime();

    cout << endl << endl << ">> Multiplicacao Ponto 1 com Ponto 2" << endl;
    Ponto multiplicacao = ponto1 * ponto2;
    multiplicacao.imprime();

    cout << endl << endl << ">> Multiplicacao Ponto 1 com Escalar" << endl;
    Ponto multiplicacaoE = ponto1 * 3;
    multiplicacaoE.imprime();

    cout << endl << endl << ">> Coordenada 0 do Ponto 2" << endl;
    cout << ponto2[0] << endl;
    cout << endl << ">> Coordenada 1 do Ponto 2" << endl;
    cout << ponto2[1] << endl;
    cout << endl << ">> Coordenada 2 (invalida) do Ponto 2" << endl;
    cout << ponto2[2] << endl;

    return 0;
}