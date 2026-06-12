//
//  enfermero.hpp
//  Created by Alejandro Estrada Pérez

#ifndef enfermero_hpp
#define enfermero_hpp

#include <stdio.h>

#endif /* enfermero_hpp */
#pragma once
#include "empleado.hpp"

class enfermero : public empleado {
    
private:
    string areaAsignada;
    int experiencia;
    
public:
//constructor
    enfermero (string nom,
               int ed,
               int idEmp,
               double sal,
               string tur,
               string area,
               int exp);
    
//metodos
    void trabajar () override;
    
    void tomarSignos ();
    
    void asistirDoctor ();
        
    
    
};













