//
//  paciente.cpp
//  Created by Alejandro Estrada Pérez
//
#include "paciente.hpp"

//Constructor por defecto.
paciente::paciente() {
    nombre = "";
    edad = 0;
    diagnostico = "";
    historial = "";
}
//getter del nombre del paciente
string paciente::getNombre() {
    return nombre;
}

//Agrega un nuevo evento al historial medico
void paciente::agregarHistorial(string evento) {
    historial += "- " + evento + "\n";
}
//Muestra la informacion del paciente
void paciente::mostrarExpediente() {
    cout << "\n===== EXPEDIENTE =====" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Diagnostico actual: " << diagnostico << endl;
    cout << "\n--- Historial completo ---" << endl;
    if (historial == ""){
        cout << "Sin registros aun." << endl;
    }
    else{
        cout << historial;
    }
}
void paciente::registrarPaciente() {

    cout << "\nIngrese nombre del paciente: ";
    getline(cin, nombre);

    cout << "Ingrese edad: ";
    cin >> edad;
    //limpia para que se escriba despues mas texto
    cin.ignore();
}
//Formulario para saber el diagnostico
void paciente::formulario() {

    int opcion;

    cout << "\n---- FORMULARIO DE SINTOMAS ----" << endl;
    cout << "1. Fiebre y tos" << endl;
    cout << "2. Nauseas y dolor de estomago" << endl;
    cout << "3. Mareo y presion alta" << endl;
    cout << "4. Fatiga y dolor muscular" << endl;
    cout << "Seleccione su sintoma principal (1-4): ";

    cin >> opcion;
    cin.ignore();

    switch(opcion) {

        case 1:
            diagnostico = "Posible gripe";
            break;

        case 2:
            diagnostico = "Infeccion estomacal";
            break;

        case 3:
            diagnostico = "Hipertension";
            break;

        case 4:
            diagnostico = "Agotamiento fisico";
            break;

        default:
            diagnostico = "Se requieren mas estudios.";
    }
}

string paciente::generarDiagnostico() {

    return diagnostico;
}

//Sobrecarga solicita una cita sin especificar fecha
void paciente::solicitarCita() {

    cout << "\nEl paciente " << nombre
         << " solicito una cita." << endl;
}
//Sobrecarga solicita una cita indicando una fecha
void paciente::solicitarCita(string fecha) {

    cout << "\nEl paciente " << nombre
         << "\nAgendo una cita para "
         << fecha << "." << endl;
}
