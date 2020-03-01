#include "ContaEspecial.h"
#include "ContaCorrente.h"
#include "Conta.h"
#include "Poupanca.h"
#include <iostream>

using namespace std;

int main()
{
    ContaCorrente *conta1 = new ContaCorrente("joao", 48, 900.0);
    ContaCorrente *conta2 = new ContaEspecial("maria", 23, 300.0);
    Poupanca *conta3 = new Poupanca("jose", 65, 480.0);

    cout << "\t\tConta 1:" << endl;
    cout << "Nome: " << conta1->getNomeCliente() << endl;
    cout << "Numero: " << conta1->getNumero() << endl;
    cout << "Saldo: " << conta1->getSaldo() << endl;
    conta1->sacar(900);
    cout << "Saldo pos saque: " << conta1->getSaldo() << endl;
    conta1->setSalario(4000.0);
    cout << "Salario: " << conta1->getSalario() << endl;
    conta1->definirLimite();
    cout << "Limite: " << conta1->getLimite() << endl;


    conta2->setSalario(4000.0);
    conta2->definirLimite();
    cout << "\n\t\tConta 2:" << endl;
    cout << "Nome: " << conta2->getNomeCliente() << endl;
    cout << "Numero: " << conta2->getNumero() << endl;
    cout << "Saldo: " << conta2->getSaldo() << endl;
    cout << "Salario: " << conta2->getSalario() << endl;
    cout << "Limite: " << conta2->getLimite() << endl;
    conta2->sacar(900);
    conta2->depositar(1200.0);
    cout << "Saldo pos deposito: " << conta2->getSaldo() << endl;
    conta2->sacar(900);
    cout << "Saldo pos saque: " << conta2->getSaldo() << endl;

    cout << "\n\t\tConta 3:" << endl;
    cout << "Nome: " << conta3->getNomeCliente() << endl;
    cout << "Numero: " << conta3->getNumero() << endl;
    cout << "Saldo: " << conta3->getSaldo() << endl;
    conta3->setTaxaRend(1.1);
    conta3->setVariacao(51);
    cout << "Rendimento: " << conta3->render() << endl;


    return 0;
}
