#ifndef _PONTO_H_
#define _PONTO_H_


class Ponto {
private:
    double _x;
    double _y;
public:
    Ponto();

    Ponto(double x, double y);

    /**
     * @desc imprime Ponto (x, y)
     */
    void imprime();

    /**
     * @desc soma Ponto
     * @param ponto
     * @return
     */
    Ponto operator+(Ponto ponto);

    /**
     * @desc subtracao Ponto
     * @param ponto
     * @return
     */
    Ponto operator-(Ponto ponto);

    /**
     * @desc multiplicacao Ponto
     * @param ponto
     * @return
     */
    Ponto operator*(Ponto ponto);

    /**
     * @desc multiplicacao Ponto com escalar
     * @param e
     * @return
     */
    Ponto operator*(double e);

    /**
     * @desc retorna valor coordenada
     * @param pos
     * @return
     */
    double operator[](int pos);

};


#endif //_PONTO_H_
