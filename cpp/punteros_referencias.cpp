#include <iostream>

using namespace std;

int main()
{
    int numero =1000;

    //Punteros
    // con & accedemos a la referencia de una variable, la direcci—n de memoria para poder asignarsela a un puntero
    int *punteroNumero = &numero; // As’ asignamos la referencia de numero a un puntero llamado punteroNumero
    //para declarar punteros, tipo de dato que contiene la variable de la que se va a hacer el puntero + *nombrePuntero
    cout << endl;
    cout << "Direcci—n de memoria (punteroNumero)"<< endl;
    cout << punteroNumero;
    cout << "\n";
    cout << "Valor variable a la que apunta el puntero (*punteroNumero)";
    cout << "\n";
    cout << *punteroNumero;
    cout << "\n";
    cout << endl;
    numero = 2000;
    //otra forma de declarar
    int *punteroDos;
    punteroDos = &numero;

    cout << "Direcci—n de memoria (punteroDos)"<< endl;
    cout << punteroDos;
    cout << "\n";
    cout << "Valor variable a la que apunta el puntero (*punteroDos)";
    cout << "\n";
    cout << *punteroDos;
    cout << "\n";


    numero = 3000;

    //Referencias
    //solo en c++
    //Se declara con & y se le pasa la variable, no la direcci—n como en los punteros
    int &referenciaNumero = numero;

    cout << endl << "Referencias";
    cout << "Direcci—n de memoria (&referenciaNumero)"<< endl;
    cout << &referenciaNumero;
    cout << "\n";
    cout << "Valor variable a la que apunta la reerencia (referenciaNumero)";
    cout << "\n";
    cout << referenciaNumero;
    cout << "\n";

    return 0;
}
