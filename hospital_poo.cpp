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
    string diagnostico;

public:
    paciente() {
        nombre = "";
        edad = 0;
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

        cout << "\n---- FORMULARIO DE SÍNTOMAS ----" << endl;
        cout << "1. Fiebre y tos" << endl;
        cout << "2. Nauseas y dolor de estomago" << endl;
        cout << "3. Mareo y presion alta" << endl;
        cout << "4. Fatiga y dolor muscular" << endl;
        cout << "Seleccione su sintoma principal (1-4): ";
        cin >> opcion;
        cin.ignore();

        switch(opcion) {
            case 1: diagnostico = "Posible gripe"; break;
            case 2: diagnostico = "Infeccion estomacal"; break;
            case 3: diagnostico = "Hipertension"; break;
            case 4: diagnostico = "Agotamiento fisico"; break;
            default: diagnostico = "Se requieren mas estudios."; break;
        }
    }

    string generarDiagnostico() {
        return diagnostico;
    }

    void mostrarExpediente() {
        cout << "\n===== EXPEDIENTE =====" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Diagnostico: " << diagnostico << endl;
    }

    void solicitarCita() {
        cout << "\nEl paciente " << nombre << " solicito una cita." << endl;
    }

    void solicitarCita(string fecha) {
        cout << "\nEl paciente " << nombre << "\nAgendo una cita para " << fecha << "." << endl;
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

        doctor d1("Carlos Mendoza", 45, 1001, 35000, "Matutino", "Cardiologia", 3);
        enfermero e1("Luis Torres", 30, 2001, 18000, "Nocturno", "Urgencias", 5);

        do {
            
            cout << "\n----- " << nombre << " -----" << endl;
            cout << "1. Consulta general" << endl;
            cout << "2. Emergencia" << endl;
            cout << "3. Agendar cita" << endl;
            cout << "4. Ver expediente" << endl;
            cout << "5. Salir" << endl;
            cout << "\nSeleccione una opcion: ";
            cin >> opcion;
            cin.ignore();

            switch(opcion) {
                case 1:
                    p1.registrarPaciente();
                    p1.formulario();

                    e1.registrarEntrada();
                    e1.trabajar();
                    e1.tomarSignos();
                    e1.asistirDoctor();

                    d1.registrarEntrada();
                    d1.trabajar();
                    d1.diagnosticar(p1.generarDiagnostico());
                    d1.recetarMedicamento();
                    break;

                case 2:
                    cout << "\n----- URGENCIAS -----" << endl;
                    cout << "Paciente ingresado a urgencias." << endl;
                    e1.trabajar();
                    d1.trabajar();
                    cout << "Emergencia atendida." << endl;
                    break;

                case 3: {
                    string fecha;
                    p1.registrarPaciente();
                    p1.solicitarCita();
                    cout << "Ingrese fecha de la cita: ";
                    getline(cin, fecha);
                    p1.solicitarCita(fecha);
                    break;
                }

                case 4:
                    p1.mostrarExpediente();
                    break;

                case 5:
                    cout << "\nSaliendo del sistema..." << endl;
                    break;

                default:
                    cout << "\nOpcion invalida." << endl;
                    break;
            }
            if (opcion != 5) {
                    cout << "\nPresione Enter para continuar";
                    cin.get(); //
                    cout << string(40, '\n') << endl; // Imprime un salto de línea gigante (25 líneas vacías)
                        }

        } while(opcion != 5);
    }
};

int main() {
    hospital h1("HOSPITAL GENERAL");
    h1.iniciarSistema();
    return 0;
}
