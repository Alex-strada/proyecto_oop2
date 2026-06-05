//
//  doctor.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//
#include "doctor.hpp"

doctor::doctor(string nom,
               int ed,
               int idEmp,
               double sal,
               string tur,
               string esp,
               int consul)

: empleado(nom,
           ed,
           idEmp,
           sal,
           tur) {

    especialidad = esp;
    consultorio = consul;
}

void doctor::trabajar() {

    cout << "\nEl doctor "
         << nombre
         << " esta atendiendo pacientes en el consultorio "
         << consultorio
         << "."
         << endl;
}

void doctor::diagnosticar(string diagnostico) {

    cout << "\nEl doctor "
         << nombre
         << " esta realizando el diagnostico..."
         << endl;

    cout << "Diagnostico: "
         << diagnostico
         << endl;
}

void doctor::recetarMedicamento() {

    cout << "El doctor "
         << nombre
         << " receto medicamento."
         << endl;
}
