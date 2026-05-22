//
//  empleado.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//

#include "empleado.hpp"

empleado::empleado(string nom,
                   int ed,
                   int idEmp,
                   double sal,
                   string tur) {

    nombre = nom;
    edad = ed;
    idEmpleado = idEmp;
    salario = sal;
    turno = tur;
}

void empleado::trabajar() {

    cout << "El empleado "
         << nombre
         << " esta trabajando."
         << endl;
}

void empleado::registrarEntrada() {

    cout << nombre
         << " registro su entrada."
         << endl;
}

void empleado::mostrarDatos() {

    cout << "\n===== DATOS DEL EMPLEADO ====="
         << endl;

    cout << "Nombre: "
         << nombre
         << endl;

    cout << "Edad: "
         << edad
         << endl;

    cout << "ID: "
         << idEmpleado
         << endl;

    cout << "Salario: $"
         << salario
         << endl;

    cout << "Turno: "
         << turno
         << endl;
}
