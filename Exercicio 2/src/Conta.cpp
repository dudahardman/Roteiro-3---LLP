#include "Conta.h"
#include "IConta.h"
#include <iostream>
using namespace std;

Conta::Conta(string n, double sal, int numero, double s)
{
    nomeCliente = n;
    salMensal = sal;
    numConta = numero;
    saldo = s;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}

void Conta::setNomeCliente(string n){
    nomeCliente = n;
}

double Conta::getSalario(){
    return salMensal;
}

void Conta::setSalario(double sal){
    salMensal = sal;
}

int Conta::getNumConta(){
    return numConta;
}

void Conta::setNumConta(int numero){
    numConta = numero;
}

double Conta::getSaldo(){
    return saldo;
}

void Conta::setSaldo(double s){
    saldo = s;
}

double Conta::getLimite(){
    return limite;
}

void Conta::setLimite(double salMensal){
    limite = 2 * salMensal;
}

void Conta::definirLimite(){
    limite = 2 * salMensal;
}

void Conta::sacar(double v){
    saldo -= v;
}

void Conta::depositar(double v){
    saldo += v;
}
