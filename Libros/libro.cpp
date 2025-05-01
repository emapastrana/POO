#include "libro.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

Libro::Libro(string n, string a, int y, bool e){
    nombre = n;
    autor = a;
    year = y;
    estaPrestado = e;
    codRU = rand() % 900000 + 100000;
}
string Libro::getNombre(){
    return nombre;
}
string Libro::getAutor(){
    return autor;
}
int Libro::getAño(){
    return año;
}
bool Libro::getPrestamo(){
    return estaPrestado;
}
void Libro::getInfo(){
    cout << "La información relativa al libro buscado es:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Autor: " << autor << endl;
    cout << "Año: " << año << endl;
    cout << "Codigo de Registro Unico: " << codRU << endl;
    if(estaPrestado = true){
        cout << "Estado: En prestamo." << endl;
    }else{
        cout << "Estado: Disponible para prestamo." << endl;
    }
}
int Libro::getCodRU(){
    return codRU;
}