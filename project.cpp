#include <iostream>
#include "Reservar.cpp"
#include <string>
#include "VerificarDisponibilidad.cpp"
#include "CancelarReserva.cpp"
#include <cstdio>


using namespace std;

string traerNombre(string line) {
    string l1 = "l1";
    string l2 = "l2";
    string l3 = "l3";
    string l4 = "l4";
    string l5 = "l5";
    if(line.find(l1) != string::npos) {
                string nombre = l1;
                return nombre;
            }
            if(line.find(l2) != string::npos) {
                string nombre = l2;
                return nombre;
            }
            if(line.find(l3) != string::npos) {
                string nombre = l3;
                return nombre;
            }
            if(line.find(l4) != std::string::npos) {
                string nombre = l4;
                return nombre;
            }
            if(line.find(l5) != std::string::npos) {
                string nombre = l5;
                return nombre;
            }
}

int main(){
    int opcion;
    string resp;

        do
        {


    cout<<"-------Sistema para reservar laboratorios---------"<<endl;
        cout<<"1. Disponibilidad de laboratorios"<<endl;
        cout<<"2. Reservar laboratorio"<<endl;
        cout<<"3. Cancelar reserva "<<endl;
        cout<<"4. Registro del laboratorio mas utilizado"<<endl;

        cout<<"seleccionar opcion: ";
        cin>>opcion;

        system("cls");

        
            
        
        

    switch (opcion)
    {
    case 1: {

        string dia;
        cout<<"dia de la semana que quiere verificar disponibilidad: "<<endl;
        cin>>dia;

        VerificarDisponibilidad disponibilidad(dia);
        vector<string>datos=disponibilidad.leerRegistro();
    for (const auto& line : datos) {
        cout << line <<endl;
    }
        
    }
        
        
        break;

    case 2: { //reservar laboratorio//
        
        string dia;
        do
        {
        cout<<"digite el día que quiere reservar el laboratorio (lunes,martes,miercoles,jueves,viernes):  ";
        cin>>dia;

        if ((dia=="sabado")||(dia=="domingo"))
        {
            cout<<"Dias no disponibles."<<endl;
        }
        
        

        } while ((dia=="sabado")||(dia=="domingo"));
        

        Reservar reservar;
        reservar.iniciarReserva(dia);
        
        

        break;
    }

    case 3: { //cancelar reserva//

        string dia;
        string fecha;
        string carnet;

        cout<<"dia de la reserva: "<<endl;
        cin>>dia;

        cout<<"fecha: "<<endl;
        cin>>fecha;

        cout<<"carnet: "<<endl;
        cin>>carnet;

        CancelarReserva cancelarReserva;
        cancelarReserva.borrarLinea(dia,fecha,carnet);

        


        break;
    }

    case 4: //laboratorio mas usado//
        {
        vector<string> nombres;
        VerificarDisponibilidad disponibilidadLunes("lunes");
        vector<string>datos1=disponibilidadLunes.leerRegistro();
        for (const auto& line : datos1) {
            cout << line <<endl;
            string nombre = traerNombre(line);
            cout << nombre <<endl;
            nombres.push_back(nombre);
        }
        VerificarDisponibilidad disponibilidadMartes("martes");
        vector<string>datos2=disponibilidadMartes.leerRegistro();
        for (const auto& line : datos2) {
            cout << line <<endl;
            string nombre = traerNombre(line);
            cout << nombre <<endl;
            nombres.push_back(nombre);
        }
        VerificarDisponibilidad disponibilidadMiercoles("miercoles");
        vector<string>datos3=disponibilidadMiercoles.leerRegistro();
        for (const auto& line : datos3) {
            cout << line <<endl;
            string nombre = traerNombre(line);
            cout << nombre <<endl;
            nombres.push_back(nombre);
        }
        VerificarDisponibilidad disponibilidadJueves("jueves");
        vector<string>datos4=disponibilidadJueves.leerRegistro();
        for (const auto& line : datos4) {
            cout << line <<endl;
            string nombre = traerNombre(line);
            cout << nombre <<endl;
            nombres.push_back(nombre);
        }
        VerificarDisponibilidad disponibilidadViernes("viernes");
        vector<string>datos5=disponibilidadViernes.leerRegistro();
        for (const auto& line : datos5) {
            cout << line <<endl;
            string nombre = traerNombre(line);
            cout << nombre <<endl;
            nombres.push_back(nombre);
        }
        cout<<"TOTAL"<<endl;
        for (const auto& nombre : nombres) {
            cout << nombre <<endl;
        }

        break;
        }
    default:
        break;

        system("cls");
    }

    cout<<"Salir? "<<endl;
    cin>>resp;

    system("cls");

    } while (resp == "no");

   


    return 0;
}

string getFieldValue(string input) {
    
    return "";
}