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
void ListaPersona::eliminaPersona(Persona* n) {
	NodoPersona* anterior = NULL;
	actual = primero;
	while (actual && actual->getPersona()->getNombreCompleto() != n->getNombreCompleto()) { //cambia segun los parametros de busqueda
		anterior = actual; //Se usa una auxiliar anterior para guardar el campo del nodo anterior al que se va a borrar
		actual = actual->getSig(); //Avanza por la lista hasta encontrar el objeto a borrar.
	}
	if (!actual || actual->getPersona()->getNombreCompleto() != n->getNombreCompleto())//Si no lo encontro, cambia segun los parametros de busqueda
		return; //
	else {//Borra el nodo
		if (!anterior)//si es el primer elemento
			primero = actual->getSig();
		else//si es un elemento intermedio o el ultimo
			anterior->setSigNodo(actual->getSig());
		delete actual;
	}
}
void ListaPersona::ActualizaPersona(Persona* nuevo) {
	actual = primero;
	while (actual != NULL) {
		if (actual->getPersona()->getNombreCompleto() == nuevo->getNombreCompleto()) {
			actual->setEjercicio(nuevo);
			break;
		}
		actual = actual->getSig();
	}
}
Persona* ListaPersona::encuentraPersona(string nom) {
	actual = primero;
	while (actual != NULL) {
		if (actual->getPersona()->getNombreCompleto() == nom) {
			return actual->getPersona();
			break;
		}
		actual = actual->getSig();
		if (actual == NULL)
			return NULL;
	}
}
string ListaPersona::buscarPersona(string nom) {
	actual = primero;
	while (actual != NULL) {
		if (actual->getPersona()->getNombreCompleto() == nom) {
			return actual->getPersona()->toString();
			break;
		}
		actual = actual->getSig();
		if (actual == NULL)
			return NULL;
	}
}
