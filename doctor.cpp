//
//  doctor.cpp
//  Created by Alejandro Estrada Pérez on 

#include "doctor.hpp"

doctor::doctor(string nom,
               int ed,
               int idEmp,
               double sal,
               string tur,
               string esp,
               int consul)

: empleado(nom, ed, idEmp, sal, tur) {
    especialidad = esp;
    consultorio = consul;
}
/* Metodo sobrescrito de la clase empleado
se aplica el polimorfismo por que trabajar()
es diferente a cada empleado
*/
void doctor::trabajar() {

    cout << "\nEl doctor " << nombre << " esta atendiendo pacientes en el consultorio " << consultorio << endl;
}
//Muestra el diagnostico por el doctor,
void doctor::diagnosticar(string diagnostico) {

    cout << "\nEl doctor " << nombre << " esta realizando el diagnostico..." << endl;

    cout << "Diagnostico: " << diagnostico << endl;
}
// Simula la receta de un medicamento
void doctor::recetarMedicamento() {

    cout << "El doctor " << nombre << " receto medicamento." << endl;
}
