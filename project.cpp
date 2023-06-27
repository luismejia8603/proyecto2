#include <iostream>
#include "Reservar.cpp"
#include <string>

using namespace std;


int main(){
    int opcion;
    string resp;

        do
        {


    cout<<"-------Sistema para reservar laboratorios---------"<<endl;
        cout<<"1. Disponibilidad de laboratorios"<<endl;
        cout<<"2. Reservar laboratorio"<<endl;
        cout<<"3. Cancelar reserva "<<endl;
        cout<<"4. Generar archivo de reservas de la semana "<<endl;
        cout<<"5. Registro del laboratorio mas utilizado"<<endl;

        cout<<"seleccionar opcion: ";
        cin>>opcion;

        system("cls");

        
            
        
        

    switch (opcion)
    {
    case 1: //disponibilidad//
        
        
        break;

    case 2: { //reservar laboratorio//

        string dia;
        cout<<"digite el día que quiere reservar el laboratorio (lunes,martes,miercoles,jueves,viernes):  ";
        cin>>dia;

        Reservar reservar;
        reservar.iniciarReserva(dia);
        
        break;
    }

    case 3: { //cancelar reserva//

        


        break;
    }

    case 4: //Archivo reservas de la semana//

        break;

    case 5: //laboratorio mas usado//

        break;
    
    default:
        break;
    }

    cout<<"Salir? "<<endl;
    cin>>resp;

    } while (resp == "no");


    return 0;
}