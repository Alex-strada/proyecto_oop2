//
//  hospital_poo.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//

#include "hospital_poo.hpp"
#include <iostream>
#include <string>

#include "doctor.hpp"
#include "enfermero.hpp"

using namespace std;

class paciente {

private:

    string nombre;
    int edad;
    string sintomas[3];
    int cantidadSintomas;
    string diagnostico;

public:

    paciente() {

        cantidadSintomas = 0;
        diagnostico = "Sin diagnostico";
    }

    void registrarPaciente() {

        cout << "\nIngrese nombre del paciente: ";
        getline(cin, nombre);

        cout << "Ingrese edad: ";
        cin >> edad;

        cin.ignore();
    }

    void formulario() {

        int opcion;

        string lista[10] = {

            "Dolor de cabeza",
            "Fiebre",
            "Tos",
            "Dolor de estomago",
            "Mareo",
            "Nauseas",
            "Presion alta",
            "Dolor muscular",
            "Fatiga",
            "Dolor de garganta"
        };

        cout << "\n===== FORMULARIO ====="
             << endl;

        cout << "Cuantos sintomas desea seleccionar? (1-3): ";
        cin >> cantidadSintomas;

        if(cantidadSintomas < 1) {

            cantidadSintomas = 1;
        }

        if(cantidadSintomas > 3) {

            cantidadSintomas = 3;
        }

        cout << endl;

        for(int i = 0; i < 10; i++) {

            cout << i + 1
                 << ". "
                 << lista[i]
                 << endl;
        }

        for(int i = 0; i < cantidadSintomas; i++) {

            cout << "\nSeleccione sintoma "
                 << i + 1
                 << ": ";

            cin >> opcion;

            sintomas[i] = lista[opcion - 1];
        }

        cin.ignore();
    }

    string generarDiagnostico() {

        bool fiebre = false;
        bool tos = false;
        bool nauseas = false;
        bool dolorEstomago = false;
        bool mareo = false;
        bool presionAlta = false;
        bool fatiga = false;
        bool dolorMuscular = false;

        for(int i = 0; i < cantidadSintomas; i++) {

            if(sintomas[i] == "Fiebre") {

                fiebre = true;
            }

            if(sintomas[i] == "Tos") {

                tos = true;
            }

            if(sintomas[i] == "Nauseas") {

                nauseas = true;
            }

            if(sintomas[i] == "Dolor de estomago") {

                dolorEstomago = true;
            }

            if(sintomas[i] == "Mareo") {

                mareo = true;
            }

            if(sintomas[i] == "Presion alta") {

                presionAlta = true;
            }

            if(sintomas[i] == "Fatiga") {

                fatiga = true;
            }

            if(sintomas[i] == "Dolor muscular") {

                dolorMuscular = true;
            }
        }

        if(fiebre && tos) {

            diagnostico = "Posible gripe";
        }

        else if(nauseas && dolorEstomago) {

            diagnostico = "Infeccion estomacal";
        }

        else if(mareo && presionAlta) {

            diagnostico = "Hipertension";
        }

        else if(fatiga && dolorMuscular) {

            diagnostico = "Agotamiento fisico";
        }

        else {

            diagnostico =
            "Se requieren mas estudios.";
        }

        return diagnostico;
    }

    void mostrarExpediente() {

        cout << "\n===== EXPEDIENTE ====="
             << endl;

        cout << "Nombre: "
             << nombre
             << endl;

        cout << "Edad: "
             << edad
             << endl;

        cout << "\nSintomas:"
             << endl;

        for(int i = 0; i < cantidadSintomas; i++) {

            cout << "- "
                 << sintomas[i]
                 << endl;
        }

        cout << "\nDiagnostico: "
             << diagnostico
             << endl;
    }

    void solicitarCita() {

        cout << "\nEl paciente "
             << nombre
             << " solicito una cita."
             << endl;
    }

    void solicitarCita(string fecha) {

        cout << "\nEl paciente "
             << nombre
             << " agendo una cita para "
             << fecha
             << "."
             << endl;
    }
};

class hospital {

private:

    string nombre;

public:

    hospital(string nom) {

        nombre = nom;
    }

    void iniciarSistema() {

        int opcion;

        paciente p1;

        doctor d1(
            "Carlos Mendoza",
            45,
            1001,
            35000,
            "Matutino",
            "Cardiologia",
            3
        );

        enfermero e1(
            "Luis Torres",
            30,
            2001,
            18000,
            "Nocturno",
            "Urgencias",
            5
        );

        do {

            cout << "\n===== "
                 << nombre
                 << " ====="
                 << endl;

            cout << "1. Consulta general"
                 << endl;

            cout << "2. Emergencia"
                 << endl;

            cout << "3. Agendar cita"
                 << endl;

            cout << "4. Ver expediente"
                 << endl;

            cout << "5. Salir"
                 << endl;

            cout << "\nSeleccione una opcion: ";

            cin >> opcion;

            cin.ignore();

            switch(opcion) {

                case 1: {

                    p1.registrarPaciente();

                    p1.formulario();

                    e1.registrarEntrada();

                    e1.trabajar();

                    e1.tomarSignos();

                    e1.asistirDoctor();

                    d1.registrarEntrada();

                    d1.trabajar();

                    d1.diagnosticar(
                        p1.generarDiagnostico()
                    );

                    d1.recetarMedicamento();

                    break;
                }

                case 2: {

                    cout << "\n===== URGENCIAS ====="
                         << endl;

                    cout << "Paciente ingresado a urgencias."
                         << endl;

                    e1.trabajar();

                    d1.trabajar();

                    cout << "Emergencia atendida."
                         << endl;

                    break;
                }

                case 3: {

                    string fecha;

                    p1.registrarPaciente();

                    p1.solicitarCita();

                    cout << "Ingrese fecha de la cita: ";

                    getline(cin, fecha);

                    p1.solicitarCita(fecha);

                    break;
                }

                case 4: {

                    p1.mostrarExpediente();

                    break;
                }

                case 5: {

                    cout << "\nSaliendo del sistema..."
                         << endl;

                    break;
                }

                default: {

                    cout << "\nOpcion invalida."
                         << endl;
                }
            }

        } while(opcion != 5);
    }
};

int main() {

    hospital h1("HOSPITAL CENTRAL");

    h1.iniciarSistema();

    return 0;
}
