#include <iostream>
#include "ContaEspecial.h"
#include "Conta.h"
#include "IConta.h"

using namespace std;

int main()
{
  Conta *conta1 = new Conta("Joao", 2500.0, 58, 3000.0);
  conta1->definirLimite();

  Conta *conta2 = new ContaEspecial("Maria", 3000.0, 45, 4000.0);
  conta2->definirLimite();

  cout << "\t\tConta 1:" << endl;
  cout << "NOME: " << conta1->getNomeCliente() << endl;
  cout << "SALARIO: " << conta1->getSalario() << endl;
  cout << "CONTA: " << conta1->getNumConta() << endl;
  cout << "SALDO: " << conta1->getSaldo() << endl;
  cout << "LIMITE: " << conta1->getLimite() << endl;

  cout << "\n\t\tConta 2:" << endl;
  cout << "NOME: " << conta2->getNomeCliente() << endl;
  cout << "SALARIO: " << conta2->getSalario() << endl;
  cout << "CONTA: " << conta2->getNumConta() << endl;
  cout << "SALDO: " << conta2->getSaldo() << endl;
  cout << "LIMITE: " << conta2->getLimite() << endl;

}
