#include "ListaPersona.h"
ListaPersona::ListaPersona() {
	this->primero = nullptr;
	this->actual = nullptr;
}
ListaPersona::~ListaPersona() {
	actual = primero;
	while (primero) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
	actual = NULL;
	primero = NULL;
}
bool ListaPersona::listaVacia() {
	if (primero == NULL)
		return true;
	else
		return false;
}
string ListaPersona::toString() {
	string s1;
	actual = primero;

	while (actual != NULL) {
		s1 += actual->NodoPersona::getPersona()->toString() + "\n";
		actual = actual->getSig();
	}
	return s1;
}
void ListaPersona::insertaPersona(Persona*) {}
void ListaPersona::eliminaPersona(Persona*) {}
void ListaPersona::ActualizaPersona(Persona*) {}
Persona* ListaPersona::encuentraPersona(/*parametro de busqueda*/) {}
string ListaPersona::buscarPersona(/*parametro de busqueda*/) {}
