#include <iostream>
#include <string>

using namespace std;

// Declaración de la clase Empleado
class Empleado {
public:
    // Constructor por defecto
    Empleado() {}

    // Constructor que inicializa el nombre y el número de empleado
    Empleado(string nombre, string apellidos, int numerodeempleado, string email, float sueldo, bool experto) {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->numerodeempleado = numerodeempleado;
        this->email = email;
        this->sueldo = sueldo;
        this->experto = experto;
        }

    // Función para leer los datos del teclado
    void LeerDatos() {
        cout << "Ingrese nombre(s) del Empleado(a):";
        getline(cin, nombre);
        cout << "Ingrese apellido(s) del Empleado(a):";
        getline(cin, apellidos);
        cout << "Ingrese el ID de Empleado:";
        cin >> numerodeempleado;
         cout << "Ingrese el correo de Empleado(a):";
        cin >> email;
         cout << "Ingrese el sueldo de Empleado(a):";
        cin >> sueldo;
         cout << "es experto(a)? (si=1)/(no=0):";
        cin >> experto;
        cin.ignore(); // Ignorar el salto de línea después de leer el número de empleado
    }

    // Función para visualizar los datos en pantalla
    void VerDatos() {
        cout << "Nombre(s): " << nombre << endl;
        cout << "Apellidos(s): " << apellidos << endl;
        cout << "ID empleado(a): " << numerodeempleado << endl;
        cout << "Correo empleado(a): " << email << endl;
        cout << "Sueldo empleado(a): " << sueldo << endl;
        cout << "Es experto? -> (si=1)/(no=0): " << experto << endl;
    }

private:
    string nombre;
    int numerodeempleado;
    string apellidos;
    string email;
    float sueldo;
    bool experto;
};

int main() {
    const int numEmpleados = 3;
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