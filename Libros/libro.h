#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
using namespace std;

class Libro{
    private:
        int codRU;
        string nombre;
        string autor;
        int year;
        bool estaPrestado;
    public:
        Libro(string n, string a, int y, bool e);

        string getNombre();
        string getAutor();
        int getAño();
        bool getPrestamo();
        void getInfo();
        int getCodRU();

};

#endif