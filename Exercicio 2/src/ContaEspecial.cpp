#include "ContaEspecial.h"
#include "Conta.h"

ContaEspecial::ContaEspecial(string n, double sal, int numero, double s)
    : Conta(n, sal, numero, s)
{

}

void ContaEspecial::definirLimite(){
     limite = salMensal * 3;
}
