#include "Conta.h"
#include <iostream>

using namespace std;

Conta::Conta(string n, int num, double s)
{
    nomeCliente = n;
    numero = num;
    saldo = s;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}

void Conta::setNomeCliente(string n){
    nomeCliente = n;
}

int Conta::getNumero(){
    return numero;
}

void Conta::setNumero(int num){
    numero = num;
}

double Conta::getSaldo(){
    return saldo;
}

void Conta::setSaldo(double s){
    saldo = s;
}

void Conta::sacar(double v){
    if(saldo >= v){
        saldo -= v;
    }else{
        cout << "Saldo insuficiente." << endl;
    }
}

void Conta::depositar(double v){
    saldo += v;
}
