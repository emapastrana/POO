#include "libro.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<Libro> libros;

int menu(){
    int op;
    cout << "===Bienvenido/a al catalejo virtual de la biblioteca.===" << endl;
    cout << "1. Buscar un libro." << endl;
    cout << "2. Prestar un libro." << endl;
    cout << "3. Devolver un libro." << endl;
    cout << "4. Ver una lista de todos los libros (en prestamo o o libres)" << endl;
    cout << "Por favor, ingrese su opción: ";
    cin >> op;
    return op;
}

void buscar(){
    int op1, cod;
    string nombre, autor;
InicioPregunta:
    cout << "¿Desea buscar por autor o por nombre? 1. Autor   2. Nombre 3. Codigo de registro unico" << endl;
    cout << "Ingrese su opción: ";
    cin >> op1;
    bool encontrado = false;
    if(op1 == 1){
        cout << "Ingrese el nombre del autor: ";
        cin >> autor;
        for (size_t i = 0; i < libros.size(); ++i) {
            if (autor == libros[i].getNombre()) {
                libros[i].getInfo();  // Ejecuta getInfo() para cada libro que coincida
                encontrado = true;    // Marca que al menos un libro coincide
            }
        }    
        if (!encontrado) {
            cout << "Ha fallado la búsqueda. Vuelva a intentarlo." << endl;
            goto InicioPregunta;
        }
    }else if(op1 == 2){
        cout << "Ingrese el nombre del libro: ";
        cin >> nombre;
        for (size_t i = 0; i < libros.size(); ++i) {
            if (nombre == libros[i].getAutor()) {
                libros[i].getInfo();  // Ejecuta getInfo() para cada libro que coincida
                encontrado = true;    // Marca que al menos un libro coincide
            }
        }    
        if (!encontrado) {
            cout << "Ha fallado la búsqueda. Vuelva a intentarlo." << endl;
            goto InicioPregunta;
        }
    }else if(op1 == 3){
        cout << "Ingrese el codigo de registro unico: ";
        cin >> cod;
        for (size_t i = 0; i < libros.size(); ++i) {
            if (cod == libros[i].getCodRU()) {
                libros[i].getInfo();  // Ejecuta getInfo() para cada libro que coincida
                encontrado = true;    // Marca que al menos un libro coincide
            }
        }    
        if (!encontrado) {
            cout << "Ha fallado la búsqueda. Vuelva a intentarlo." << endl;
            goto InicioPregunta;
        }
    }else{
        cout << "Opción no válida." << endl;
        goto InicioPregunta;
    }
}

void prestar(){

}





void eleccion(int a){

    
    switch(a){
        case 1:
            buscar();
            break;
        case 2:



    }





}





int main(){
    srand(time(NULL));

    return 0;
}