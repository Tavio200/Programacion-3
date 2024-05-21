#include <iostream>
#include <string>
using namespace std;

struct alumno {
    string nombre;
    float nota;
};

int main() {
    alumno alumnos[20];
    int opcion = 1;
    float sum = 0, cont = 0, mejor = 0, peor = 10;

    for (int x = 0; x < 20; x++) {
        cout << "Introduzca el nombre del alumno " << x + 1 << ": ";
        getline(cin, alumnos[x].nombre);
        cout << "Introduzca la nota del alumno " << x + 1 << ": ";
        cin >> alumnos[x].nota;
        cin.ignore(); // Limpia el buffer del salto de línea
    }

    while (opcion >= 1 && opcion <= 7) {
        cout << "\n1. Buscar un alumno\n";
        cout << "2. Modificar nota de un alumno\n";
        cout << "3. Media de todas las notas\n";
        cout << "4. Media de las notas inferiores a 5\n";
        cout << "5. Mostrar el alumno con mejores notas\n";
        cout << "6. Mostrar el alumno con peores notas\n";
        cout << "7. Salir\n";
        cout << "Introduzca una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombreBusqueda;
                cout << "Introduzca el nombre del alumno a buscar: ";
                cin.ignore(); // Limpia el buffer del salto de línea
                getline(cin, nombreBusqueda);
                for (int i = 0; i < 20; i++) {
                    if (alumnos[i].nombre == nombreBusqueda) {
                        cout << "Nombre: " << alumnos[i].nombre << endl;
                        cout << "Nota: " << alumnos[i].nota << endl;
                        break;
                    }
                }
                break;
            }
            case 2: {
                string nombreMod;
                cout << "Introduzca el nombre del alumno a modificar: ";
                cin.ignore(); // Limpia el buffer del salto de línea
                getline(cin, nombreMod);
                for (int i = 0; i < 20; i++) {
                    if (alumnos[i].nombre == nombreMod) {
                        cout << "Introduzca la nueva nota: ";
                        cin >> alumnos[i].nota;
                        cout << "Nota modificada.\n";
                        break;
                    }
                }
                break;
            }
            case 3: {
                sum = 0;
                for (int i = 0; i < 20; i++) {
                    sum += alumnos[i].nota;
                }
                cout << "La media de todas las notas es: " << sum / 20 << endl;
                break;
            }
            case 4: {
                sum = 0;
                cont = 0;
                for (int i = 0; i < 20; i++) {
                    if (alumnos[i].nota < 5) {
                        sum += alumnos[i].nota;
                        cont++;
                    }
                }
                if (cont != 0) {
                    cout << "La media de las notas inferiores a 5 es: " << sum / cont << endl;
                } else {
                    cout << "No hay alumnos con notas inferiores a 5.\n";
                }
                break;
            }
            case 5: {
                for (int i = 0; i < 20; i++) {
                    if (alumnos[i].nota > mejor) {
                        mejor = alumnos[i].nota;
                    }
                }
                cout << "El alumno con mejores notas es: ";
                for (int i = 0; i < 20; i++) {
                    if (alumnos[i].nota == mejor) {
                        cout << alumnos[i].nombre << endl;
                    }
                }
                break;
            }
            case 6: {
                for (int i = 0; i < 20; i++) {
                    if (alumnos[i].nota < peor) {
                        peor = alumnos[i].nota;
                    }
                }
                cout << "El alumno con peores notas es: ";
                for (int i = 0; i < 20; i++) {
                    if (alumnos[i].nota == peor) {
                        cout << alumnos[i].nombre << endl;
                    }
                }
                break;
            }
            case 7: {
                cout << "Saliendo del programa...\n";
                break;
            }
            default:
                cout << "Opción no válida. Inténtelo de nuevo.\n";
        }
    }

    return 0;
}

