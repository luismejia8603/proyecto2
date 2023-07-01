#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

class CancelarReserva
{
public:
    void borrarLinea(const string& dia, const string& fecha, const string& carnet) {
        string archivo = dia + ".txt"; // Agregar la extensión ".txt" al nombre del archivo
        ifstream archivoEntrada(archivo);
        ofstream archivoSalida(archivo + ".temp");
        string linea;

        if (archivoEntrada.is_open() && archivoSalida.is_open()) {
            while (getline(archivoEntrada, linea)) {
                // Verificar si la línea contiene ambas palabras a borrar
                if (linea.find(fecha) != string::npos && linea.find(carnet) != string::npos) {
                    continue;  // Si contiene ambas palabras, omitir escribir la línea en el archivo de salida
                }

                archivoSalida << linea << endl;
            }

            archivoEntrada.close();
            archivoSalida.close();

            remove(archivo.c_str());  // Borrar el archivo original
            rename((archivo + ".temp").c_str(), archivo.c_str());  // Renombrar el archivo temporal al nombre original
            cout << "Su reservación fue cancelada." << endl;
        } else {
            cerr << "Error al abrir los archivos." << endl;
        }
    }
};

