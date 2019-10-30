#include "Nodos.h"


Nodo::Nodo( Nodo* sig = nullptr) {
	objeto = new Objeto(); //se pueden setear los parametros desde aqui
	siguiente = sig;
}

void Nodo::setSig(Nodo* sig) {
	siguiente = sig;
}

Nodo* Nodo::getSig() {
	return siguiente;
}

Nodo::~Nodo()
{
}

//////////////////////////////////////////////////////


NodoEjercicio::NodoEjercicio(Ejercicio* ejer, Nodo* sig):Nodo(sig) {
	ejercicio = new Ejercicio(); //se pueden setear los parametros desde aqui
	siguiente = sig;
}

void NodoEjercicio::setEjercicio(Ejercicio* ejer) {
	ejercicio= ejer;

}

Ejercicio* NodoEjercicio::getEjercicio() {
	return Ejercicio;
}

NodoEjercicio::~NodoEjercicio()
{
}

////////////////////////////////////////////////////


NodoPersona::NodoPersona(Persona* per, Nodo* sig) {
	persona = new Persona(); //se pueden setear los parametros desde aqui
	siguiente = sig;
}

void NodoPersona::setPersona(Persona* per) {
	persona = per;

}

Ejercicio* NodoEjercicio::getEjercicio() {
	return Ejercicio;
}

NodoEjercicio::~NodoEjercicio()
{
}