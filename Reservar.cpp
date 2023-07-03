#include <iostream>
#include <string>
#include "ControlRegistros.cpp"

using namespace std;

class Reservar
{

public: Reservar(){}

    void iniciarReserva(string dia){
        
        
        string nombre;
        string fecha;
        string hora;
        string proposito;
        string carnet;
        string carrera;
        int cantidad;

        do
        {
            cout<<"ingresar nombre"<<endl;
            cin>>nombre;
            if (nombre!= ("l1")&& nombre!=("l2")&& nombre!=("l3")&& nombre!=("l4")&& nombre!=("l5"))
            {
                cout<<"laboratorio no disponible"<<endl;
            }
            cout<<nombre<<endl;
        } while (nombre!= "l1"&& nombre!= "l2"&& nombre!="l3"&& nombre!="l4"&& nombre!="l5");
        
       
        cout<<"fecha que quiere reservar: "<<endl;
        cin>>fecha;
        cout<<"hora de la reserva : "<<endl;
        cin>>hora;
        cout<<"proposito (interno o externo):  "<<endl;
        cin>>proposito;
        cout<<"Numero de carnet:  "<<endl;
        cin>>carnet;
        
         while (carrera!= "ingenieria informatica") {
            cout<<"carrera que estudia:  "<<endl;
            getline(cin, carrera);
            if (carrera!= "ingenieria informatica")
            {
             cout<<"solo disponible para ingenieria informatica"<<endl;
            }
        }

        do
            {
            cout<<"cantidad de personas que usaran el laboratorio: "<<endl;
            cin>>cantidad;
            if (cantidad>18)
            {
            cout<<"cantidad maxima 18";
            }
        }
        while (cantidad>18);
        cin.ignore();
        ControlRegistros control(dia);
        control.registrarlaboratorio(nombre,fecha,hora,proposito,carnet,carrera,cantidad);
    }

};

