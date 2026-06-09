//
//  enfermero.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//

#include "enfermero.hpp"

enfermero::enfermero(string nom,
                     int ed,
                     int idEmp,
                     double sal,
                     string tur,
                     string area,
                     int exp)

: empleado(nom,
           ed,
           idEmp,
           sal,
           tur) {

    areaAsignada = area;
    experiencia = exp;
}

void enfermero::trabajar(){
    
    cout << "\nEl enfermero "
         << nombre
         << " Esta laborando en"
    <<areaAsignada << endl;
        
}

void enfermero::tomarSignos(){
    
    cout << "\n---Signos Vitales---" << endl;
    
    cout << "Presion Arterial normal 120/80" << endl;
    
    cout << "Temperatura: normal" << endl;
    
    cout << "Frecuencia cardiaca estable" << endl;
         
}

void enfermero::asistirDoctor(){
    
    cout << "El enfermero "
    << nombre
    << "esta ayudando al doctor"
    << endl;
}
