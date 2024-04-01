#pragma once
#include <iostream>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(int edad, string nombre);
        int getEdad();
        string getNombre();
        void setEdad(int edad);
        void setNombre(string nombre);
        ~Persona();
};