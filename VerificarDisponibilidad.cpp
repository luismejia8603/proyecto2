#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;



class VerificarDisponibilidad {
private:
    string dia;
public:
    VerificarDisponibilidad(const string& filename) : dia(filename) {}

    vector<string> leerRegistro() {
        dia.append(".txt"); //buscar el archivo del día
        vector<string> data;
        ifstream inputFile(dia);

        cout<<dia<<endl;

        if (inputFile.is_open()) {
            string value;
            while (getline(inputFile, value)) {
                data.push_back(value);
            }

            inputFile.close();
        } else {
            cout << "Failed to open the file." << endl;
        }

        return data;
    }


};