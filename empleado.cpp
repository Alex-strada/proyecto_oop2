//
//  empleado.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//

#include "empleado.hpp"


empleado::empleado(): nombre(""), edad(0), idEmpleado(0), salario(0.0), turno(""){}

empleado::empleado(string nom,
                   int ed,
                   int idEmp,
                   double sal,
                   string tur)
    : nombre(nom),
      edad(ed),
      idEmpleado(idEmp),
      salario(sal),
      turno(tur)
{}

//Métodos que va a tener el objeto
void empleado::trabajar(){
    cout << "El empleado "
        << nombre
        <<"esta laborando"
        << endl;
}

void empleado::registrarEntrada(){
    cout << nombre
    << "Registro su entrada."
    << endl;
}

void empleado::mostrarDatos(){
    cout << "---DATOS DEL EMPLEADO---"
         <<endl;
    
    cout << "Nombre: "
         << nombre
         << endl;
    
    cout << "Edad: "
         << edad
         << endl;
    
    cout << "Id del Empleado: "
         << idEmpleado
         <<endl;
     
    cout << "Salario: $"
         << salario
         <<endl;
    
    cout << "Turno: "
         << turno
         <<endl;
    
     
}











