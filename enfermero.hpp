//
//  enfermero.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//

#ifndef enfermero_hpp
#define enfermero_hpp

#include <stdio.h>

#endif /* enfermero_hpp */
#pragma once
#include "empleado.hpp"

class enfermero : public empleado {

protected:

    string areaAsignada;
    int experiencia;

public:

    enfermero(string nom,
              int ed,
              int idEmp,
              double sal,
              string tur,
              string area,
              int exp);

    void trabajar() override;

    void tomarSignos();

    void asistirDoctor();
};
