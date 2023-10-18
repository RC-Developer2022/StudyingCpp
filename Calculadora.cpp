#include "Calculadora.h"

int Somar(double firstNumber, double lastNumber)
{
    return firstNumber + lastNumber;
}

int Subtrair(double firstNumber, double lastNumber)
{
    return firstNumber - lastNumber;
}

int Multiplicar(double firstNumber, double lastNumber)
{
    return firstNumber * lastNumber;
}

int Dividir(double firstNumber, double lastNumber)
{
    if (firstNumber != 0 && lastNumber != 0)
    {
        return firstNumber / lastNumber;
    }
    else
    {
        return 1;
    }
}