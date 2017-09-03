/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: inaki
 *
 * Created on 3 de septiembre de 2017, 21:56
 */


#include <iostream>

using namespace std;
struct Ficha{
    char nombre[10];
    int numero;
};
int main()
{
    int numero =1000;

    //Punteros
    // con & accedemos a la referencia de una variable, la dirección de memoria para poder asignarsela a un puntero
    int *punteroNumero = &numero; // Así asignamos la referencia de numero a un puntero llamado punteroNumero
    //para declarar punteros, tipo de dato que contiene la variable de la que se va a hacer el puntero + *nombrePuntero
    cout << endl;
    cout << "Dirección de memoria (punteroNumero)"<< endl;
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

    cout << "Dirección de memoria (punteroDos)"<< endl;
    cout << punteroDos;
    cout << "\n";
    cout << "Valor variable a la que apunta el puntero (*punteroDos)";
    cout << "\n";
    cout << *punteroDos;
    cout << "\n";


    numero = 3000;

    //Referencias
    //solo en c++
    //Se declara con & y se le pasa la variable, no la dirección como en los punteros
    int &referenciaNumero = numero;

    cout << endl << "Referencias";
    cout << "Dirección de memoria (&referenciaNumero)"<< endl;
    cout << &referenciaNumero;
    cout << "\n";
    cout << "Valor variable a la que apunta la reerencia (referenciaNumero)";
    cout << "\n";
    cout << referenciaNumero;
    cout << "\n";

    cout << endl;
    struct Ficha ficha;
    strcpy(ficha.nombre, "HOLA");
    ficha.numero=2;
    
    struct Ficha *f = &ficha;
    cout << "Nombre: "<< ficha.nombre << " Número: "<< ficha.numero << endl;
    cout << "nombre del struct desde puntero: " << f->nombre;
    return 0;
}

