//
//  doctor.hpp
//  Created by Alejandro Estrada Pérez on


#ifndef doctor_hpp
#define doctor_hpp

#include <stdio.h>

#endif /* doctor_hpp */
#pragma once
#include "empleado.hpp"

class doctor : public empleado {

private:

    string especialidad;
    int consultorio;

public:

    doctor(string nom,
           int ed,
           int idEmp,
           double sal,
           string tur,
           string esp,
           int consul);

    void trabajar() override;

    void diagnosticar(string diagnostico);

    void recetarMedicamento();
};
