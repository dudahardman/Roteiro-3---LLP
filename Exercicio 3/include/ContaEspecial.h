#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"
#include "Conta.h"
#include <iostream>

using namespace std;

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial(string n, int num, double s);
        void definirLimite();
};

#endif // CONTAESPECIAL_H
