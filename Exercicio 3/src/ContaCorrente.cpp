#include "ContaCorrente.h"
#include "Conta.h"
#include <iostream>

using namespace std;

ContaCorrente::ContaCorrente(string n, int num, double s)
    : Conta(n, num, s)
{
    //ctor
}

void ContaCorrente::sacar(double v){
    if(saldo >= v){
        saldo -= v;
    }else{
        cout << "Saldo insuficiente." << endl;
    }
}

void ContaCorrente::depositar(double v){
    saldo += v;
}

void ContaCorrente::definirLimite(){
    limite = 2 * salario;
}

double ContaCorrente::getSalario(){
    return salario;
}

void ContaCorrente::setSalario(double sal){
    salario = sal;
}

double ContaCorrente::getLimite(){
    return limite;
}
