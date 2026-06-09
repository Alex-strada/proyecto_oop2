//
//  hospital_poo.cpp
//
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//
#include <iostream>
#include <string>
#include "hospital_poo.hpp"

#include "empleado.hpp"
#include "doctor.hpp"
#include "enfermero.hpp"
#include "paciente.hpp"

using namespace std;

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

        doctor d1("Carlos Mendoza", 45, 1001, 35000, "Matutino",
                  "Cardiologia", 3);

        enfermero e1("Luis Torres", 30, 2001, 18000, "Nocturno",
                     "Urgencias", 5);

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

            switch (opcion) {

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

            }

            if (opcion != 5) {

                cout << "\nPresione Enter para continuar";
                cin.get();

                cout << string(40, '\n');
            }

        } while (opcion != 5);
    }
};

int main() {

    hospital h1("Hospital General");

    h1.iniciarSistema();

    return 0;
}
