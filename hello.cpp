#include <iostream>
#include <string>

using namespace std;

// Declaración de la clase Empleado
class Empleado {
public:
    // Constructor por defecto
    Empleado() {}

    // Constructor que inicializa el nombre y el número de empleado
    Empleado(string nombre, int numerodeempleado) {
        this->nombre = nombre;
        this->numerodeempleado = numerodeempleado;
        }

    // Función para leer los datos del teclado
    void LeerDatos() {
        cout << "Ingrese el nombre del Empleado:";
        getline(cin, nombre);
        cout << "Ingrese el numero de Empleado:";
        cin >> numerodeempleado;
        cin.ignore(); // Ignorar el salto de línea después de leer el número de empleado
    }

    // Función para visualizar los datos en pantalla
    void VerDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Numero de Empleado: " << numerodeempleado << endl;
    }

private:
    string nombre;
    string numerodeempleado;
};

int main() {
    const int numEmpleados = 50;
    Empleado empleados[numEmpleados];

    // Llenar el array con los datos de los empleados
    for (int i = 0; i < numEmpleados; i++) {
        cout << "Datos del empleado " << i+1 << endl;
        empleados[i].LeerDatos();
        cout << endl;
    }

    // Visualizar los datos de todos los empleados
    for (int i = 0; i < numEmpleados; i++) {
        cout << "Datos del empleado " << i+1 << endl;
        empleados[i].VerDatos();
        cout << endl;
    }

    return 0;
}