#include "Nodos.h"

NodoEjercicio::NodoEjercicio(Ejercicio*) {
	ejercicio = new Ejercicio(); //se pueden setear los parametros desde aqui
	siguiente = NULL;
}

void NodoEjercicio::setEjercicio(Ejercicio* ejer) {
	ejercicio = ejer;

}

Ejercicio* NodoEjercicio::getEjercicio() {
	return ejercicio;
}

void NodoEjercicio::setSig(NodoEjercicio* sig) {
	siguiente = sig;
}

NodoEjercicio* NodoEjercicio::getSig() {
	return siguiente;
}

NodoEjercicio::~NodoEjercicio()
{
}