#include <iostream>
#include <fstream>
#include <string>

class ControlRegistros {
private:
    std::string nombrearchivo;

public:
    ControlRegistros(const std::string& file) : nombrearchivo(file) {}

    void registrarlaboratorio(const std::string& nombre, const std::string& fecha, const std::string& hora, const std::string& proposito, const std::string& carnet, const std::string& carrera, int cantidad ) {
        std::ofstream fileStream(nombrearchivo, std::ios::app);
        if (!fileStream.is_open()) {
            std::cerr << "Failed to open the file: " << nombrearchivo << std::endl;
            return;
        }

        fileStream << "Nombre: " << nombre << ", Fecha: " << fecha << ", Hora: " << hora << ", proposito: " << proposito << ", carnet: " << carnet << ", carrera: " << carrera << ", cantidad: "<<cantidad << std::endl;
        fileStream.close();

        std::cout << "Student registered successfully!" << std::endl;
    }
};

