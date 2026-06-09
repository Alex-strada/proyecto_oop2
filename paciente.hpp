//
//  paciente.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 22/05/26.
//
#ifndef paciente_hpp
#define paciente_hpp

#include <stdio.h>


#include <iostream>
#include <string>

using namespace std;

class paciente {

private:
    string nombre;
    int edad;
    string diagnostico;

public:
    paciente();

    void registrarPaciente();

    void formulario();

    string generarDiagnostico();

    void mostrarExpediente();

    void solicitarCita();

    void solicitarCita(string fecha);
};

#endif /* paciente_hpp */

