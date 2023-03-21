#include <iostream>
#include <string>
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QLineEdit>
#include <QSpinBox>
#include <QCheckBox>
#include <QPushButton>
#include <QLabel>
#include <QString>

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
   void LeerDatos(string nombre, string apellidos, int numerodeempleado, string email, float sueldo, bool experto) {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->numerodeempleado = numerodeempleado;
        this->email = email;
        this->sueldo = sueldo;
        this->experto = experto;
    }

    // Función para visualizar los datos en pantalla
    QString VerDatos() {
        QString datos = "Nombre(s): " + QString::fromStdString(nombre) + "\n";
        datos += "Apellidos(s): " + QString::fromStdString(apellidos) + "\n";
        datos += "ID empleado(a): " + QString::number(numerodeempleado) + "\n";
        datos += "Correo empleado(a): " + QString::fromStdString(email) + "\n";
        datos += "Sueldo empleado(a): " + QString::number(sueldo) + "\n";
        datos += "Es experto? -> ";
        datos += experto ? "Sí" : "No";
        return datos;
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