
#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>
using namespace std;

class Cuenta{
    private:
        string titular;
        int numeroCuenta;
        double saldo;
    public:
        Cuenta(string t, int n); //constructor

        void depositar(double monto);

        bool retirar(double monto);            

        double consultarSaldo() const;
            
        void mostrarInformacion() const;

        int revisar() const;
        
};

#endif
