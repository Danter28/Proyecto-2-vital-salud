#include"Socio.h"
#include "Instructor.h"
#include "ListaPersona.h"
#include "ListaEjercicios.h"
int main() {
//modo-0
//creacion de listas******************************	
	ListaPersona* instructores=new ListaPersona();
	ListaPersona* socios=new ListaPersona();
	ListaEjercicios* R1 = new ListaEjercicios();
//************************************************
//insercion de socios, instructores y rutinas correcto********************************************************************
	Ejercicio* e1 = new Ejercicio("push-up","pectorales",3,5);//se crea Ejercicio
	R1->insertarEjercicio(e1);//se añade ejercicio a la rutina
	Instructor* I1 = new Instructor("001-1","Juan Martinez","juan@vitalsalud.com","4444-111");//se crea el instructor
	Socio* S1 = new Socio("001-2", "Ana Quijano", "ana@gmail.com", "4444-222", 0.30, 0.40, 73.5, 1);//se crea el socio
	socios->insertaPersona(S1);//se inserta nuevo socio a la lista
	instructores->insertaPersona(I1);//se inserta nuevo instructor a la lista
	S1->setInstructor(I1);//se configura un instructor al socio
	S1->setRutina(R1);//se setea la rutina al socio
	I1->getSociosAsignados()->insertaPersona(S1);//se asigna socio a la lista de socios del instructor
	cout<<socios->toString();
	cout << instructores->toString();
//*************************************************************************************************************************

	system("pause");
	return 0;
};