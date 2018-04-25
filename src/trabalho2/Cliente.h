#ifndef _CLIENTE_H_
#define _CLIENTE_H_

#include <string>

using namespace std;

class Cliente {
private:
    string _nome;
public:
    Cliente(string nome);

    /**
     * @desc sets client name
     * @param nome
     */
    void setNome(string nome);

    /**
     * @desc gets client name
     * @return {string}
     */
    string getNome();
};


#endif //_CLIENTE_H_
