//
//  hospital_poo.hpp
//  
//
//  Created by Alejandro Estrada Pérez 
//

#ifndef hospital_poo_hpp
#define hospital_poo_hpp

#include <stdio.h>

#include <string>
#include "empleado.hpp"
#include "doctor.hpp"
#include "enfermero.hpp"
#include "paciente.hpp"
using namespace std;

const int MAX_PERSONAL = 10; // Cantidad max de empleados que el hospital puede registrar
const int MAX_PACIENTES = 10; // Cantidad maxima de pacientes permitidos

// define de la clase hospital
class hospital {

private:
    string nombre;
       empleado* personal[MAX_PERSONAL]; // arreglo de apuntadores a empleados
    // donde almacenan enfermeros y doctores
    
       int totalPersonal; //contador de empleados

public:
    hospital(string nom); //constructor que inicializa el nombre del hospital
        void agregarPersonal(empleado* emp); //agrega un empleado al arreglo de personal
    //inicia el menu principal y lo demás
        void iniciarSistema(paciente& p1, doctor& d1, enfermero& e1,
                             doctor& d2, enfermero& e2);
    };


#endif /* hospital_poo_hpp */
