/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: inaki
 *
 * Created on 3 de septiembre de 2017, 21:13
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
void saludo();//declaración de la función
void sumaDiez(int *n); //función con paso por referencia(puntero)
void sumaVeinte(int &n); //funcion con paso por referencia, solo c++

int main(int argc, char** argv) {
    saludo();
    
    int numero = 0;
    sumaDiez(&numero);//pasamos la referencia de la variable a la función
    cout << numero <<endl;
    sumaVeinte(numero);//pasamos la variable a la función que se queda con la referencia   
    cout << numero <<endl;
    return 0;
}

void saludo()//definición de la función
{
    cout << "Hola Mundo!"<<endl;
}
void sumaDiez(int *n)
{
    *n=*n+10; //operamos con el puntero
}

void sumaVeinte(int &n)
{
    n=n+20; //operamos con la referencia a la variable
}
