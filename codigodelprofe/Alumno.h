#pragma once
#include <iostream>
#include "Persona.h"
using namespace std;
class Alumno:public Persona{
    private:
        int semestre;
    public:
        Alumno(int semestre, int edad, string nombre);
        int getSemestre();
        void setSemestre(int semestre);
};