#include <iostream>
#include <string>
#include "cuentabancaria.h"
#include <vector>

using namespace std;

vector<Cuenta> cuentas;

int menu(){
    int op = 0;
    cout << "==BANCO EMABANK==" << endl;
    cout << "1. Crear nueva cuenta\n2. Depositar\n3. Retirar\n4. Consultar Saldo\n5. Consultar informacion de cuenta\n6. Salir" <<endl;
    cout << "Por favor digite una opción: ";
    cin >> op;
    return op;
}

void acciones(int a){
    int nC;
    double qI;
    string nT;
    bool cuentaEncontrada = false;
    bool puedeRetirar;
    size_t numCuentaV;
    switch(a){
        case 1:
            cout << "Por favor digite el numero de cuenta: ";
            cin >> nC;
            cout << "\nPor favor ingrese el nombre del titular: ";
            cin >> nT;
            cuentas.emplace_back(nT, nC);
            cout << "\nCuenta creada con éxito!" << endl;
            break;

        case 2: 
            cout << "Por favor ingrese su numero de cuenta: ";
            cin >> nC;
            for(size_t i = 0;i < cuentas.size();i++){
                if(nC == cuentas[i].revisar()){
                    cuentaEncontrada = true;
                    numCuentaV = i;
                    break;
                }else{
                    cout << "El numero de cuenta ingresado no se ha encontrado en el sistema. Por favor, ingrese su numero de cuenta nuevamente: ";
                    cin >> nC;
                }
            }
                cout << "Por favor ingrese la cantidad a depositar: ";
                cin >> qI;
                cuentas[numCuentaV].depositar(qI);
                cout << "Saldo actualizado correctamente." << endl;
                break;

            case 3: 
                cout << "Por favor ingrese su numero de cuenta: ";
                cin >> nC;
                for(size_t i = 0;i < cuentas.size();i++){
                    if(nC == cuentas[i].revisar()){
                        cuentaEncontrada = true;
                        numCuentaV = i;
                        break;
                    }else{
                        cout << "El numero de cuenta ingresado no se ha encontrado en el sistema. Por favor, ingrese su numero de cuenta nuevamente: ";
                        cin >> nC;
                    }
                }
                cout << "Por favor ingrese la cantidad a retirar: ";
                cin >> qI;
                puedeRetirar = cuentas[numCuentaV].retirar(qI);
                if(puedeRetirar == false){
                    cout << "No tiene suficiente saldo en su cuenta para esta operacion." << endl;
                    break;
                }if(puedeRetirar == true){
                    cout << "Saldo actualizado correctamente." << endl;
                }
                break;

            case 4:
                cout << "Por favor ingrese su numero de cuenta: ";
                cin >> nC;
                for(size_t i = 0;i < cuentas.size();i++){
                    if(nC == cuentas[i].revisar()){
                        cuentaEncontrada = true;
                        numCuentaV = i;
                        break;
                    }else{
                        cout << "El numero de cuenta ingresado no se ha encontrado en el sistema. Por favor, ingrese su numero de cuenta nuevamente: ";
                        cin >> nC;
                    }
                }
                cout << "Su saldo es: " << cuentas[numCuentaV].consultarSaldo() << endl;
                break;

            case 5:
                cout << "Por favor ingrese su numero de cuenta: ";
                cin >> nC;
                for(size_t i = 0;i < cuentas.size();i++){
                    if(nC == cuentas[i].revisar()){
                        cuentaEncontrada = true;
                        numCuentaV = i;
                        break;
                    }else{
                        cout << "El numero de cuenta ingresado no se ha encontrado en el sistema. Por favor, ingrese su numero de cuenta nuevamente: ";
                        cin >> nC;
                    }
                }
                cout << "Información de la cuenta:" << endl;
                cuentas[numCuentaV].mostrarInformacion();
                break;

            case 6:
                break;
            default:
                cout << "No ha ingresado una opcion valida. Por favor, intentelo de nuevo." << endl;
                break;
    }




}


int main(){
    int eleccion = 0;
    do{
    acciones(eleccion=menu());
    }while(eleccion != 6);

    cin.get();

    return 0;
}
