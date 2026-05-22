//
//  doctor.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//

#ifndef doctor_hpp
#define doctor_hpp

#include <stdio.h>

#endif /* doctor_hpp */
#pragma once
#include "empleado.hpp"

class doctor : public empleado {

protected:

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
