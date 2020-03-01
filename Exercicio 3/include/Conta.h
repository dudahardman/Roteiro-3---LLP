#ifndef CONTA_H
#define CONTA_H
#include <iostream>

using namespace std;

class Conta
{
    public:
        Conta(string n, int num, double s);
        virtual void sacar(double v);
        virtual void depositar(double v);
        string getNomeCliente();
        void setNomeCliente(string n);
        int getNumero();
        void setNumero(int num);
        double getSaldo();
        void setSaldo(double s);

    protected:
        string nomeCliente;
        int numero;
        double saldo;
};

#endif // CONTA_H
