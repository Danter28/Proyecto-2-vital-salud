#include "Persona.h"
#include"Socio.h"
#include "Instructor.h"
#include "ListaPersona.h"
#include "ListaEjercicios.h"
int main() {
//modo-0
	
	ListaPersona* instructores=new ListaPersona();
	ListaPersona* socios=new ListaPersona();
	ListaEjercicios* R1 = new ListaEjercicios();
//Contratacion de instructores//
	Ejercicio* e1 = new Ejercicio("push-up","pectorales",3,5);//se crea Ejercicio
	R1->insertarEjercicio(e1);//se añade ejercicio a la rutina
	Instructor* I1 = new Instructor("001-1","Juan","juan@vitalsalud.com","4444-111");//se crea el instructor
	Socio* S1 = new Socio("001-2", "Ana", "ana@gmail.com", "4444-222");//se crea el socio
	socios->insertaPersona(S1);//se inserta nuevo socio a la lista
	instructores->insertaPersona(I1);//se inserta nuevo instructor a la lista
	S1->setInstructor(I1);//se configura un instructor al socio
	cout<<socios->toString();
	
	//cout << instructores->toString();
	system("pause");
	return 0;
};