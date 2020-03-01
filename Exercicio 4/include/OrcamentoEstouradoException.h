#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;

class OrcamentoEstouradoException : public exception
{
    public:
        const char* what() const throw() {
            return "\n*Total da folha de pagamentos ultrapassou o orcamento maximo.*\n";
        }
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
