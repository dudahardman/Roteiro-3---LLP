#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"
#include <iostream>

using namespace std;


class Comissionado : public Funcionario
{
    public:
        Comissionado(string n, int ma, double sb, double vs, double pc);
        double calculaSalario();

    private:
        double salarioBase, vendasSemanais, percentualComissao;
};

#endif // COMISSIONADO_H
