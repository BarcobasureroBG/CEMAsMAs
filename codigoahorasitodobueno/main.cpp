#include <iostream>
#include "Alumno.h"

using namespace std;
int main(){

    Alumno* a1 = new Alumno(5,29,"Jose");
    cout<<"Nombre: "<<a1->getNombre()<<" Edad: "<<a1 -> getEdad()<<" Semestre: "<<a1->getSemestre()<<endl;
    delete a1;
    return 0;

}