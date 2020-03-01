#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"
#include <iostream>

using namespace std;

class ContaCorrente : public Conta
{
    public:
        ContaCorrente(string n, int num, double s);
        virtual void sacar(double v);
        virtual void depositar(double v);
        virtual void definirLimite();
        double getLimite();
        double getSalario();
        void setSalario(double sal);

    protected:
        double salario;
        int limite;
};

#endif // CONTACORRENTE_H
