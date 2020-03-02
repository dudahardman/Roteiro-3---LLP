#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "Funcionario.h"
#include "SistemaGerenciaFolha.h"
#include "OrcamentoEstouradoException.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double orcmax = 0.0;
    cout << "Digite o orcamento maximo: ";
    cin >> orcmax;
    SistemaGerenciaFolha *sistema = new SistemaGerenciaFolha(orcmax);

    sistema->setFuncionarios(new Assalariado("Joao", 48, 1000));
    sistema->setFuncionarios(new Horista("Maria", 25, 30, 40));
    sistema->setFuncionarios(new Comissionado("Jose", 56, 3000, 40, 0.50));

    try{
        cout << "Total da folha de pagamentos = " << sistema->calculaTotalFolha() << endl;
    }catch(exception& o){
        cout << o.what() << endl;
    }

    try{
        cout << "Salario: " << sistema->consultaSalarioFuncionario("duda") << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    try{
        cout << "Salario: " << sistema->consultaSalarioFuncionario("Jose") << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    try{
        cout << "Salario: " << sistema->consultaSalarioFuncionario("Joao") << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    try{
        cout << "Salario: " << sistema->consultaSalarioFuncionario("Maria") << endl;
    }catch(exception& f){
        cout << f.what() << endl;
    }

    return 0;
}
