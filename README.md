# Sistema de Administración Hospitalaria

## Descripción

Sistema desarrollado en C++ utilizando Programación Orientada a Objetos (POO) para la gestión de un hospital. El programa administra empleados (doctores y enfermeros), pacientes y sus expedientes, mediante clases con herencia, clases abstractas y polimorfismo.

## Objetivo

Implementar:

- Clases y objetos
- Encapsulamiento
- Herencia
- Clases abstractas
- Polimorfismo
- Constructores y destructores
- Sobrecarga y sobreescritura de métodos

## Funcionalidades

### Gestión de Empleados (clase abstracta `empleado`)

- Registrar entrada de empleados.
- Mostrar datos generales (nombre, edad, id, salario, turno).
- Método `trabajar()` abstracto, implementado de forma distinta por cada tipo de empleado (polimorfismo).

### Gestión de Doctores

- Diagnosticar pacientes.
- Recetar medicamentos.
- Atender consultas y emergencias.

### Gestión de Enfermeros

- Tomar signos vitales.
- Asistir al doctor.
- Atender consultas y emergencias.

### Gestión de Pacientes

- Registrar paciente (nombre, edad).
- Llenar formulario de síntomas y generar diagnóstico.
- Solicitar cita (con y sin fecha — sobrecarga de método).
- Ver expediente con historial completo de atenciones.

### Pase de lista (Polimorfismo)

- El hospital mantiene un arreglo de punteros `empleado*` con varios doctores y enfermeros.
- Al recorrerlo, cada objeto ejecuta su propia versión de `trabajar()` según su tipo real (doctor o enfermero).

## Estructura del Proyecto

```
proyecto_oop2/

├── empleado.hpp / empleado.cpp

├── doctor.hpp / doctor.cpp

├── enfermero.hpp / enfermero.cpp

├── paciente.hpp / paciente.cpp

├── hospital_poo.hpp / hospital_poo.cpp

├── UML.png

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
## Casos en los que el proyecto deja de funcionar

- Si se ingresa una opción del menú fuera del rango 1-6, se muestra "Opción inválida" pero el programa continúa (no se rompe).
- Si en el formulario de síntomas se ingresa un valor no numérico, `cin` queda en estado de error y puede provocar un ciclo infinito al leer la siguiente opción.
- Si se agregan más de MAX_PERSONAL (10) empleados al arreglo, se ignoran los excedentes.
- Si se llama a mostrarExpediente() antes de registrar al paciente, se muestra el historial vacío con el mensaje "Sin registros aún".

## Conceptos de POO Aplicados

- **Herencia**: doctor y enfermero heredan de empleado.
- **Clase abstracta**:  como método virtual puro, obligando a sus clases hijas a implementarlo.
- **Polimorfismo**: arreglo de punteros.
- **Encapsulamiento**: atributos privados/protegidos con acceso mediante métodos públicos.
- **Sobrecarga de métodos**
- **Sobreescritura de métodos**
- **Composición/Agregación**

## Diagrama UML
<img width="1536" height="1024" alt="UML" src="https://github.com/user-attachments/assets/994a2129-af76-4528-9013-d5032da3753a" />


## Autor

Alejandro Estrada - A01714400

