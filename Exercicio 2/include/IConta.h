#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        virtual void sacar(double v) = 0;
        virtual void depositar(double v) = 0;
};

#endif // ICONTA_H
