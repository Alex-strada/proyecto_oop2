# Sistema de Administración Hospitalaria

## Descripción

Sistema desarrollado en C++ utilizando Programación Orientada a Objetos (POO) para la gestión de un hospital. El programa permite administrar información relacionada con empleados, doctores, enfermeros, pacientes, consultorios y salas de urgencias mediante una estructura basada en clases y relaciones de herencia.

## Objetivo

Implementar los conceptos fundamentales de Programación Orientada a Objetos:

- Clases y objetos
- Encapsulamiento
- Herencia
- Polimorfismo
- Constructores y destructores
- Sobrecarga de métodos

## Funcionalidades

### Gestión de Empleados
- Registrar empleados.
- Consultar información laboral.
- Administrar salarios y turnos.

### Gestión de Doctores
- Registrar especialidades médicas.
- Consultar información profesional.
- Asignar pacientes.

### Gestión de Enfermeros
- Registrar personal de enfermería.
- Administrar turnos y áreas asignadas.

### Gestión de Pacientes
- Registrar pacientes.
- Consultar historial básico.
- Asignar médico responsable.

### Gestión de Consultorios
- Registrar consultorios disponibles.
- Controlar ocupación y disponibilidad.

### Gestión de Urgencias
- Registrar ingresos de emergencia.
- Asignar pacientes a salas de urgencias.

## Diagrama General de Clases

```
Persona
│
├── Empleado
│   ├── Doctor
│   └── Enfermero
│
└── Paciente

Hospital
├── Consultorio
└── SalaUrgencias
```

## Tecnologías Utilizadas

- Lenguaje: C++
- Paradigma: Programación Orientada a Objetos
- Compilador: g++
- Control de versiones: Git
- Repositorio: GitHub

## Estructura del Proyecto

```
proyecto_oop2/
│
├── persona.h
├── empleado.h
├── doctor.h
├── enfermero.h
├── paciente.h
├── consultorio.h
├── hospital.h
├── salaUrgencias.h
├── main.cpp
└── README.md
```

## Compilación
g++ hospital_poo.cpp doctor.cpp enfermero.cpp empleado.cpp paciente.cpp -o hospital

## Ejecución 
./hospital

## Conceptos de POO Aplicados

- Herencia entre clases relacionadas.
- Encapsulamiento mediante atributos privados.
- Uso de constructores y destructores.
- Polimorfismo mediante métodos virtuales.
- Reutilización de código mediante jerarquías de clases.

## Autor

Alejandro Estrada

Proyecto académico desarrollado para la materia de Programación Orientada a Objetos.
