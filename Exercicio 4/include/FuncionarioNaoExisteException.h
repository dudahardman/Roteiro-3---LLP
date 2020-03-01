#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;

class FuncionarioNaoExisteException : public exception
{
    public:
        const char* what() const throw() {
            return "\n*Nao ha funcionario com esse nome.*";
        }
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
