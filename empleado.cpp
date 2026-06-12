
//  empleado.cpp
//  Created by Alejandro Estrada Pérez 

#include "empleado.hpp"
#include <iostream>

// contructor vacio desde cero
empleado::empleado(): nombre(""), edad(0), idEmpleado(0), salario(0.0), turno(""){}

//constructor crear un empleado con toda su info
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

//Getter del empleado para obtener nombre
string empleado::getNombre() {
    return nombre;
}

//Metodos que va a tener el objeto
void empleado::trabajar(){
    
    cout << "El empleado "
        << nombre
        <<" esta laborando"
        << endl;
}
//Registra la entrada del empleado
void empleado::registrarEntrada(){
    
    cout << nombre
    << " registro su entrada."
    << endl;
}
//Muestra toda la información del empleado
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











