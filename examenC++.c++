// Primer Ejercicio
#include <iostream>
#include <cmath>

class Circulo {
private:
    double radio;

public:

    Circulo(double r) {
        radio = r;
    }

    double calcularArea() const {
        return M_PI * radio * radio;
    }

    double calcularCircunferencia() const {
        return 2 * M_PI * radio;
    }
};

int main() {

    Circulo miCirculo(5.0);

    double area = miCirculo.calcularArea();
    double circunferencia = miCirculo.calcularCircunferencia();

    std::cout << "Radio del circulo: 5.0" << std::endl;
    std::cout << "Area del circulo: " << area << std::endl;
    std::cout << "Circunferencia del circulo: " << circunferencia << std::endl;

    return 0;
}

//SegundoEjercicio
#include <iostream>
#include <vector>
#include <string>
#include <numeric> // Para la función std::accumulate

class Estudiante {
private:
    std::string nombre;
    std::vector<double> calificaciones;

public:
    // Constructor para inicializar el nombre del estudiante
    Estudiante(const std::string& nombreEstudiante) {
        nombre = nombreEstudiante;
    }

    // Método para agregar una nueva calificación al vector
    void agregarCalificacion(double calificacion) {
        if (calificacion >= 0) {
            calificaciones.push_back(calificacion);
        } else {
            std::cout << "Error: La calificacion no puede ser negativa." << std::endl;
        }
    }

    // Método para calcular el promedio de las calificaciones
    double calcularPromedio() const {
        // Maneja el caso de división por cero
        if (calificaciones.empty()) {
            return 0.0;
        }

        // Usa std::accumulate para sumar todos los elementos del vector
        double suma = std::accumulate(calificaciones.begin(), calificaciones.end(), 0.0);
        
        return suma / calificaciones.size();
    }

    // Método para obtener el nombre (const para no modificarlo)
    std::string getNombre() const {
        return nombre;
    }
};

int main() {

    Estudiante estudiante1("Jose");

    estudiante1.agregarCalificacion(8.5);
    estudiante1.agregarCalificacion(9.0);
    estudiante1.agregarCalificacion(7.5);

    double promedio = estudiante1.calcularPromedio();
    std::cout << "El promedio de calificaciones de " << estudiante1.getNombre() << " es: " << promedio << std::endl;

    Estudiante estudiante2("Luis");
    double promedio2 = estudiante2.calcularPromedio();
    std::cout << "El promedio de calificaciones de " << estudiante2.getNombre() << " es: " << promedio2 << std::endl;
    
    return 0;
}

//tercer ejercicio

#include <iostream>
#include <string>


class Persona {
protected:
    std::string nombre;
    int edad;

public:

    Persona(const std::string& n, int e) : nombre(n), edad(e) {}

    void mostrarDatos() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " anios" << std::endl;
    }
};

class Empleado : public Persona {
private:
    double salario;

public:
    Empleado(const std::string& n, int e, double s) : Persona(n, e), salario(s) {}

    void mostrarDatos() const {
        Persona::mostrarDatos();
        std::cout << "Salario: $" << salario << std::endl;
    }
};

int main() {
    Empleado empleado1("Javier Rodriguez", 30, 50000.0);


    std::cout << "Informacion del Empleado:" << std::endl;
    empleado1.mostrarDatos();

    return 0;
}


//cuarto ejercicio
#include <iostream>

class Motor {
private:
    double cilindrada;
    int potencia;
    bool encendido;

public:

    Motor(double c, int p) : cilindrada(c), potencia(p), encendido(false) {}

    void encender() {
        if (!encendido) {
            encendido = true;
            std::cout << "El motor se ha encendido." << std::endl;
        } else {
            std::cout << "El motor ya esta encendido." << std::endl;
        }
    }

    void apagar() {
        if (encendido) {
            encendido = false;
            std::cout << "El motor se ha apagado." << std::endl;
        } else {
            std::cout << "El motor ya esta apagado." << std::endl;
        }
    }

    void mostrarEstado() const {
        std::cout << "--- estado del Motor ---" << std::endl;
        std::cout << "cilindrada: " << cilindrada << " cc" << std::endl;
        std::cout << "potencia: " << potencia << " HP" << std::endl;
        std::cout << "estado: " << (encendido ? "encendido" : "apagado") << std::endl;
    }
};

//quinto ejercicio
#include <iostream>
#include <string>
#include <map>

class Producto {
public:
    std::string nombre;
    int cantidad;

    Producto(const std::string& n, int c) : nombre(n), cantidad(c) {}
};

class Inventario {
private:

    std::map<std::string, Producto> productos;

public:
    void agregarProducto(const std::string& nombre, int cantidadAAgregar) {
 
        auto it = productos.find(nombre);

        if (it != productos.end()) {
   
            it->second.cantidad += cantidadAAgregar;
            std::cout << "Se actualizo la cantidad de " << nombre << ". Nueva cantidad: " << it->second.cantidad << std::endl;
        } else {
            productos.emplace(nombre, Producto(nombre, cantidadAAgregar));
            std::cout << "Se agrego un nuevo producto: " << nombre << " con cantidad " << cantidadAAgregar << std::endl;
        }
    }

   
    int obtenerCantidad(const std::string& nombre) const {
        auto it = productos.find(nombre);

        if (it != productos.end()) {
            
            return it->second.cantidad;
        } else {

            return 0;
        }
    }

    void mostrarInventario() const {
        std::cout << "\n--- Inventario Actual ---" << std::endl;
        if (productos.empty()) {
            std::cout << "El inventario esta vacio." << std::endl;
        } else {
            for (const auto& par : productos) {
                std::cout << "Producto: " << par.first << ", Cantidad: " << par.second.cantidad << std::endl;
            }
        }
    }
};

int main() {
    Inventario miInventario;

    miInventario.agregarProducto("Leche", 10);
    miInventario.agregarProducto("Pan", 5);

    miInventario.mostrarInventario();

    miInventario.agregarProducto("Leche", 5);

    miInventario.mostrarInventario();

    std::string nombreProducto = "Pan";
    int cantidad = miInventario.obtenerCantidad(nombreProducto);
    std::cout << "\nCantidad de " << nombreProducto << ": " << cantidad << std::endl;

    std::string nombreNoExistente = "Manzanas";
    int cantidadNoExistente = miInventario.obtenerCantidad(nombreNoExistente);
    std::cout << "Cantidad de " << nombreNoExistente << ": " << cantidadNoExistente << std::endl;

    return 0;
}