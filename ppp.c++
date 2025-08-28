#include <iostream>
#include <string>
#include <iomanip>

class CuentaBancaria {
private:
    std::string numeroDeCuenta;
    std::string nombreDelTitular;
    double saldo;

public:
    CuentaBancaria(std::string numCuenta, std::string nomTitular) {
        numeroDeCuenta = numCuenta;
        nombreDelTitular = nomTitular;
        saldo = 0.0; 
    }

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            std::cout << "Depósito exitoso de $" << std::fixed << std::setprecision(2) << cantidad << "." << std::endl;
        } else {
            std::cout << "Error: La cantidad a depositar debe ser positiva." << std::endl;
        }
    }


    void retirar(double cantidad) {
        if (cantidad > 0) {
            if (saldo >= cantidad) {
                saldo -= cantidad;
                std::cout << "Retiro exitoso de $" << std::fixed << std::setprecision(2) << cantidad << "." << std::endl;
            } else {
                std::cout << "Error: Fondos insuficientes para realizar el retiro." << std::endl;
            }
        } else {
            std::cout << "Error: La cantidad a retirar debe ser positiva." << std::endl;
        }
    }

    double obtenerSaldo() const {
        return saldo;
    }

    void mostrarInformacion() const {
        std::cout << "\n--- Información de la Cuenta ---" << std::endl;
        std::cout << "Número de Cuenta: " << numeroDeCuenta << std::endl;
        std::cout << "Nombre del Titular: " << nombreDelTitular << std::endl;
        std::cout << "Saldo Actual: $" << std::fixed << std::setprecision(2) << saldo << std::endl;
        std::cout << "-------------------------------" << std::endl;
    }
};

int main() {
    CuentaBancaria miCuenta("1234567890", "Juan Pérez");

    std::cout << "¡Bienvenido a tu cuenta bancaria!" << std::endl;
    miCuenta.mostrarInformacion();

    miCuenta.depositar(500.0);
    miCuenta.mostrarInformacion();

    std::cout << "\nIntentando retirar $700.00..." << std::endl;
    miCuenta.retirar(700.0);
    miCuenta.mostrarInformacion();

    std::cout << "\nRealizando un retiro válido de $200.00..." << std::endl;
    miCuenta.retirar(200.0);
    miCuenta.mostrarInformacion();

    std::cout << "\nIntentando depositar una cantidad negativa..." << std::endl;
    miCuenta.depositar(-100.0);
    
    miCuenta.mostrarInformacion();

    return 0;
}