/*  hospital_poo.cpp
 * Este es un proyecto demo para la clase  Programación Orientado a
 * Objetos. Es un programa que captura diferentes tipos de empleados como doctor y enfermero, los cuales dan asistencia medica a los pacientes los cuales estan dentro del hospital
 *  Created by Alejandro Estrada Pérez
 */
#include <iostream>
#include <string>
#include "hospital_poo.hpp"

#include "empleado.hpp"
#include "doctor.hpp"
#include "enfermero.hpp"
#include "paciente.hpp"



using namespace std;
// Constructor de la clase hospital
// Inicializa el nombre del hospital y el contador de personal
hospital::hospital(string nom) {
    nombre = nom;
    totalPersonal = 0;
}
// Agrega un empleado al arreglo de personal del hospital
void hospital::agregarPersonal(empleado* emp) {
    // Verifica que no se exceda la capacidad máxima
    if (totalPersonal < MAX_PERSONAL) {
        personal[totalPersonal] = emp;
        totalPersonal++;
    }
}

// Menu principal del sistema hospitalario
void hospital::iniciarSistema(paciente& p1, doctor& d1, enfermero& e1,
                               doctor& d2, enfermero& e2) {

    int opcion;
    // Menú de opciones
    do {

        cout << "\n----- " << nombre << " -----" << endl;
        cout << "1. Consulta general" << endl;
        cout << "2. Emergencia" << endl;
        cout << "3. Agendar cita" << endl;
        cout << "4. Ver expediente" << endl;
        cout << "5. Pase de lista" << endl;
        cout << "6. Salir" << endl;
        cout << "\nSeleccione una opcion: ";

        cin >> opcion;
        cin.ignore();

        switch (opcion) {

            case 1:
                // Registro del paciente
                p1.registrarPaciente();
                p1.formulario();
                
                //atencion inicial del enfermero
                e1.registrarEntrada();
                e1.trabajar();
                e1.tomarSignos();
                e1.asistirDoctor();
                
                // Se guarda en historial
                p1.agregarHistorial("\nNombre: " + p1.getNombre()); //nombre en historial
                
                p1.agregarHistorial("Atendido por enfermero " + e1.getNombre()); //despues de ser atendido por el enfermero añadimos nombre del enfermero
                
                //atencion medica
                d1.registrarEntrada();
                d1.trabajar();
                
                //diagnostico y receta
                d1.diagnosticar(p1.generarDiagnostico());
                d1.recetarMedicamento();
                
                //registo de historial clinico
                p1.agregarHistorial("Consulta con Dr. " + d1.getNombre() +
                                    "\n- Diagnostico: " + p1.generarDiagnostico());
                break;

            case 2:

                cout << "\n----- URGENCIAS -----" << endl;
                cout << "Paciente ingresado a urgencias." << endl;
                
                // Personal de urgencias atiende al paciente
                e2.trabajar();
                d2.trabajar();
                // Registro en historial
                p1.agregarHistorial("Atencion de urgencia con Dr. " + d2.getNombre() + " y enf. " + e2.getNombre());

                cout << "Emergencia atendida." << endl;

                break;

            case 3: {

                string fecha;
                // Registro del paciente
                p1.registrarPaciente();
                
                p1.solicitarCita();
                
                // Captura de fecha
                cout << "Ingrese fecha de la cita: ";
                getline(cin, fecha);
                // getline lee una linea completa desde el teclado
                // y la almacena en la variable fecha incluyendo espacios

                p1.solicitarCita(fecha);
                p1.agregarHistorial("Cita agendada para " + fecha);

                break;
            }

            case 4:

                p1.mostrarExpediente();

                break;

            case 5:

                cout << "\n--- Pase de lista  ---" << endl;
                // Recorre todos los empleados registrados
                for (int i = 0; i < totalPersonal; i++) {
                    // polimorfismo se usa un apuntador a la clase empleado
                    // para usar el metodo virtual registrarEntrada
                    personal[i]->registrarEntrada();
                
                    // polimorfismo se usa un apuntador a la clase empleado
                    // para usar el metodo virtual trabajar
                    personal[i]->trabajar(); //
                }

                break;

            case 6:

                cout << "\nSaliendo del sistema..." << endl;

                break;
                // Opción inválida
            default:

                cout << "\nOpcion invalida." << endl;
        }
        // Pausa antes de volver al menu
        if (opcion != 6) {

            cout << "\nPresione Enter para continuar";
            cin.get();

            cout << string(40, '\n');
        }

    } while (opcion != 6);
}

int main() {

    //Creacion de objetos en main
    paciente p1;
    
    // Creación de doctores
    doctor d1("Carlos Mendoza", 45, 1001, 35000, "Matutino",
              "Cardiologo", 3);
    doctor d2("Ana Ruiz", 38, 1002, 32000, "Vespertino",
              "Pediatra", 2);
    // creacion de enfermeros
    enfermero e1("Luis Torres", 30, 2001, 18000, "Nocturno",
                  "Urgencias", 5);
    enfermero e2("Marta Diaz", 27, 2002, 17000, "Matutino",
                  "Pediatra", 3);
    
    //creacion de hospital
    hospital h1("Hospital General");

    // Agregar personal al hospital
    // Se almacenan como apuntadores a empleado
    h1.agregarPersonal(&d2);
    h1.agregarPersonal(&e1);
    h1.agregarPersonal(&e2);

    //inicia el sistema
    h1.iniciarSistema(p1, d1, e1, d2, e2);

    return 0;
}
