//
//  enfermero.cpp
//  
//
//  Created by Alejandro Estrada Pérez
//

#include "enfermero.hpp"

// Constructor de la clase enfermero.
enfermero::enfermero(string nom,
                     int ed,
                     int idEmp,
                     double sal,
                     string tur,
                     string area,
                     int exp)

: empleado(nom,
           ed,
           idEmp,
           sal,
           tur) {

    areaAsignada = area;
    experiencia = exp;
}
// Implementación del metodo trabajar()
void enfermero::trabajar(){
    
    cout << "\nEl enfermero " << nombre << " Esta laborando en " << areaAsignada << endl; // Sobrescribe el metodo virtual de la clase empleado
        
}

void enfermero::tomarSignos(){
    // Simula la toma de signos vitales del paciente
    cout << "\n---Signos Vitales---" << endl;
    cout << "Presion Arterial normal 120/80" << endl;
    cout << "Temperatura: normal" << endl;
    cout << "Frecuencia cardiaca estable" << endl;
         
}

void enfermero::asistirDoctor(){
    // Simula la asistencia medica
    cout << "El enfermero "<< nombre << " esta ayudando al doctor"<< endl;
}
