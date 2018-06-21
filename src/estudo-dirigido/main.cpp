#include <iostream>
#include "Pessoa.h"
#include "PessoaFactory.h"

int main() {
    std::cout << "Design Patterns - Prototype" << std::endl << std::endl;

    PessoaFactory* fac = new PessoaFactory();

    Pessoa* homem1 = fac->getHomem();
    homem1->setNome("Bruno");

    Pessoa* homem2 = fac->getHomem();
    homem2->setNome("Anderson");

    Pessoa* mulher1 = fac->getMulher();
    mulher1->setNome("Rafaela");

    std::cout << std::endl << "Obj Homem 1" << std::endl;
    homem1->imprime();

    std::cout << std::endl << "Obj Homem 2" << std::endl;
    homem2->imprime();

    std::cout << std::endl << "Obj Mulher 1" << std::endl;
    mulher1->imprime();


    return 0;
}