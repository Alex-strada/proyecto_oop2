
//  paciente.hpp
//  Created by Alejandro Estrada Pérez 

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
    string historial;


public:
    
    paciente();

    void registrarPaciente();

    void formulario();

    string generarDiagnostico();

    void mostrarExpediente();

    void solicitarCita();

    void solicitarCita(string fecha);
    
    void agregarHistorial(string evento);
    
    string getNombre();
};

#endif /* paciente_hpp */

