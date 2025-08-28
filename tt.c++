#include <iostream>
#include <string>

class Carro {
public:
    std::string marca;
    std::string modelo;
    int anio;
    int velocidad;

    void acelerar(int aumento) {
        velocidad += aumento;
    }

    void frenar(int decremento) {
        velocidad -= decremento;
    }

    void mostrarInfo() {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << anio << std::endl;
    }
};

int main() {
    
    Carro miFerrari;

    miFerrari.marca = "Ferrari";
    miFerrari.modelo = "Ferrari 3";
    miFerrari.anio = 2013;
    miFerrari.velocidad = 10;

    miFerrari.mostrarInfo(); 
    miFerrari.acelerar(100);
    miFerrari.frenar(30);
    std::cout << "Velocidad actual: " << miFerrari.velocidad << " km/h" << std::endl;

    std::cout <<"Frenar: "<< miFerrari.frenar<<"km/h"<< std::endl;

    std::cout <<" Info: " << miFerrari.velocidad << std::endl;

    return 0;
}