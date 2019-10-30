#include "NodoPersona.h"
NodoPersona::NodoPersona() {
	persona = new Persona(); //se pueden setear los parametros desde aqui
	siguiente = NULL;
}

void NodoPersona::setPersona(Persona* per) {
	persona = per;

}

Persona* NodoPersona::getPersona() {
	return persona;
}

void NodoPersona::setSig(NodoPersona* sig) {
	siguiente = sig;
}

NodoPersona* NodoPersona::getSig() {
	return siguiente;
}

NodoPersona::~NodoPersona()
{
}