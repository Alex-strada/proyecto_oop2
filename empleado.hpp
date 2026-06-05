//
//  empleado.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//

#ifndef empleado_hpp
#define empleado_hpp

#include <stdio.h>

#endif /* empleado_hpp */

#pragma once
#include <iostream>
#include <string>

using namespace std;

class empleado{
    
protected:
    
    string nombre;
    int edad;
    int idEmpleado;
    double salario;
    string turno;
    
public:
    empleado ();
    empleado(string nom, int ed, int idEmp, double sal, string tur);
    
    virtual void trabajar () = 0; //método abstracto será sobreescrito
    
    void registrarEntrada();
    
    void mostrarDatos();
    
};

/*
    
class empleado {

protected:

    string nombre;
    int edad;
    int idEmpleado;
    double salario;
    string turno;

public:

    empleado(string nom,
              int ed,
              int idEmp,
              double sal,
              string tur);

    virtual void trabajar();

    void registrarEntrada();

    void mostrarDatos();
};
*/
