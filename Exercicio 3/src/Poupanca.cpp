#include "Poupanca.h"
#include "Conta.h"
#include <iostream>

using namespace std;

Poupanca::Poupanca(string n, int num, double s)
    : Conta(n, num, s)
{
    //ctor
}

double Poupanca::render(){
    double rendimento = 0;
        if(variacao == 51){
            rendimento = saldo * taxaRend;
        }
        if(variacao == 1){
            taxaRend *= 1.5;
            rendimento = saldo * taxaRend;
        }
    return rendimento;
}

int Poupanca::getVariacao(){
    return variacao;
}

void Poupanca::setVariacao(int var){
    variacao = var;
}

void Poupanca::setTaxaRend(double tr){
    taxaRend = tr;
}
