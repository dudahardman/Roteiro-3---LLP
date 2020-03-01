#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <iostream>
using namespace std;

class Conta : public IConta
{
    public:
        Conta(string n, double sal, int numero, double s);
        string getNomeCliente();
        void setNomeCliente(string n);
        double getSalario();
        void setSalario(double sal);
        int getNumConta();
        void setNumConta(int numero);
        double getSaldo();
        void setSaldo(double s);
        double getLimite();
        void setLimite(double salMensal);
        virtual void definirLimite();
        void sacar(double v);
        void depositar(double v);

    protected:
        string nomeCliente;
        double salMensal, saldo, limite;
        int numConta;
};

#endif // CONTA_H
