#include <iostream>
#include "Persona.h"
#include "Alumno.h"
using namespace std;

Alumno::Alumno(int semestre, int edad, string nombre):Persona(edad, nombre)
{
    this -> semestre = semestre;
}
int Alumno::getSemestre(){return semestre;}
void Alumno::setSemestre(int semestre){this -> semestre = semestre;}