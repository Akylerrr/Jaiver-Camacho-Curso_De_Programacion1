int main() {

    std::cout << "¡Hola, mundo!" << std::endl;
}

#include <iostream>

#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;
    
    int suma = num1 + num2;
    
    std::cout << "La suma es: " << suma << std::endl;
    
    return 0;
}


#include <iostream>

int main() {
  
    int Entero = 10;
    std::cout << "Entero: " << Entero << std::endl;


    double Largo = 3.1415926535;
    std::cout << "Double: " << Largo << std::endl;

    float petre = 9.81f;
    std::cout << "Float: " << petre << std::endl;

    char etra = 'A';
    std::cout << "Char: " << etra << std::endl;

    bool Verda = true;
    
    std::cout << "Bool (true): " << Verda << std::endl; 
    
    return 0;
}

#include <iostream>
#include <cmath> 

int main() {
    const double PI = 3.14159; 
    
    double radio;
    
    std::cout << "Ingresa el radio del circulo: ";
    std::cin >> radio;
    
    double area = PI * pow(radio, 2); 
    
    std::cout << "El area del circulo es: " << area << std::endl;
    
    return 0;
}

#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1; 
    
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2; 
    
    if (num1 > num2) {
        std::cout << num1 << " es mayor que " << num2 << std::endl;
    } else if (num1 < num2) {
        std::cout << num1 << " es menor que " << num2 << std::endl;
    } else {
        std::cout << num1 << " es igual a " << num2 << std::endl;
    }
    
    return 0;
}