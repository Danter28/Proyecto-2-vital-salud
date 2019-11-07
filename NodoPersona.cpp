#include "NodoPersona.h"
NodoPersona::NodoPersona(Persona* v, NodoPersona* sig=nullptr) {
	persona = v; //se pueden setear los parametros desde aqui
	siguiente = sig;
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