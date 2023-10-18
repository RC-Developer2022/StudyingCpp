#include "Calculadora.h"
#include <iostream>
using namespace std;
int main()
{
    char operador;
    double firstNumber, lastNumber;

    cout << "Digite o primeiro numero!" << endl;
    cin >> firstNumber;

    cout << "Digite um operador (+, -, *, /): " << endl;
    cin >> operador;

    cout << "Digite o segundo numero!" << endl;
    cin >> lastNumber;

    double result;

    switch (operador)
    {
    case '+':
        result = Somar(firstNumber, lastNumber);
        break;
    case '-':
        result = Subtrair(firstNumber, lastNumber);
        break;
    case '*':
        result = Multiplicar(firstNumber, lastNumber);
        break;
    case '/':
        if (Dividir(firstNumber, lastNumber) != 1)
        {
            result = Dividir(firstNumber, lastNumber);
        }
        else
        {
            return 1;
        }
        break;
    default:
        cout << "Operador inválido!" << endl;
        return 1;
        break;
    }

    cout << "O Resultado é " << result << endl;
    return 0;
}