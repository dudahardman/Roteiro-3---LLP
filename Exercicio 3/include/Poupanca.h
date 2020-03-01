#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"
#include <iostream>

using namespace std;

class Poupanca : public Conta
{
    public:
        Poupanca(string n, int num, double s);
        double render();
        int getVariacao();
        void setVariacao(int var);
        void setTaxaRend(double tr);

    private:
        int variacao;
        double taxaRend;
};

#endif // POUPANCA_H
