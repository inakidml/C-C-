/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: inaki
 *
 * Created on 3 de septiembre de 2017, 19:37
 */

#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "introduce una frase: ";
    char frase[100]; //array de carácteres para almacenar lo del teclado
    
    fflush(stdin); //vaciar buffer del teclado
    scanf("%s", &frase); // lee cadena (%s) desde el teclado
    //ocupara la longitud de la cadena + caracter de fin de cadena "\0"
    /*
     %s -> cadena
     %d -> entero
     %c -> carácter
     %o -> número octal
     %x -> número hexadecimal
     %f -> número real
     %p -> direccion de memoria
     */
    cout << frase << endl;
    
    //cout << "introduce otra frase: ";
    
    //gets(frase); inseguro, desbordamiento de buffer
    //cout << frase << endl;

    //strcpy
    
    strcpy(frase, "nueva frase con strcpy");
    cout<<frase<<endl;
    
    //strcat
    
    strcat(frase, " concatenamos con strcat.");
    cout<<frase<<endl;
    
    //strlen
    
    cout << "tamaño con strlen(): " << strlen(frase)<<endl;
    
    //leer teclado con cin
    cout<<"Escribe otra frase con cin: ";
    cin>>frase;
    cout<<frase<<endl;
    
    return 0;
}

