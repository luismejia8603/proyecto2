#include <iostream>
#include <string>
#include "ControlRegistros.cpp"

using namespace std;

class Reservar
{

public: Reservar(){}

    void iniciarReserva(string dia){
        cout<<"que día quiere reservar: ";
        
        string nombre;
        string fecha;
        string hora;
        string proposito;
        string carnet;
        string carrera;
        int cantidad;

        
        cout<<"ingresar nombre"<<endl;
        cin>>nombre;
        cout<<"fecha que quiere reservar: "<<endl;
        cin>>fecha;
        cout<<"hora de la reserva: "<<endl;
        cin>>hora;
        cout<<"proposito (interno o externo):  "<<endl;
        cin>>proposito;
        cout<<"Numero de carnet:  "<<endl;
        cin>>carnet;
        cout<<"carrera que estudia:  "<<endl;
        cin>>carrera;
        cout<<"cantidad de personas que usaran el laboratorio: "<<endl;
        cin>>cantidad;
        cin.ignore();
        
        
        ControlRegistros control(dia);
        control.registrarlaboratorio(nombre,fecha,hora,proposito,carnet,carrera,cantidad);

    }

    
};

