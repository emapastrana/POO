#include "cuentabancaria.h"
#include <iostream>
#include <string>

using namespace std;

Cuenta::Cuenta(string t, int n){
    titular = t;
    numeroCuenta = n;
}

void Cuenta::depositar(double monto){
    saldo = saldo + monto;
}
bool Cuenta::retirar(double monto){
    if(saldo >= monto){
        saldo = saldo - monto;
        return true;
    }else{
        return false;
    }
}
double Cuenta::consultarSaldo() const{
    return saldo;
}
void Cuenta::mostrarInformacion() const{
    cout << "Nombre del titular: "<< titular << endl;
    cout << "Numero de cuenta: "<< numeroCuenta << endl;
}
int Cuenta::revisar() const{
    return numeroCuenta;
}
