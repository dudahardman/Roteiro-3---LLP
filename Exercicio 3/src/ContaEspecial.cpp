#include "ContaEspecial.h"
#include "ContaCorrente.h"
#include "Conta.h"
#include <iostream>

using namespace std;

ContaEspecial::ContaEspecial(string n, int num, double s)
    : ContaCorrente(n, num, s)
{
    //ctor
}

void ContaEspecial::definirLimite(){
    limite = 4 * salario;
}
