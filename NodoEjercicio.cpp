#include "NodoEjercicio.h"

NodoEjercicio::NodoEjercicio(Ejercicio* e,NodoEjercicio* sig=nullptr) {
	ejercicio = e; //se pueden setear los parametros desde aqui
	siguiente = sig;
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