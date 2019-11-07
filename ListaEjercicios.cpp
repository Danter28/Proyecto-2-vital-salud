#include "ListaEjercicios.h"
ListaEjercicios::ListaEjercicios() {
	primero = nullptr;
	actual = nullptr;
}


bool ListaEjercicios::listaVacia() { //retorna si la lista está vacía
	if (primero == nullptr)
		return true;
	else
		return false;
}

ListaEjercicios::~ListaEjercicios() {
	actual = primero;
	while (primero) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
	actual = nullptr;
	primero = nullptr;
}

void ListaEjercicios::insertarEjercicio(Ejercicio* ejer) {  //En este metodo se inserta el Objeto n en un nodo para posteriormente insertarlo en la lista, guardandolos.

	actual = primero;
	if (primero == nullptr) //Si la lista está vacia,  se crea un nuevo nodo para iniciar la lista, insertando el objeto que entra por parametro.

		primero = new NodoEjercicio(ejer,nullptr);

	else { //Caso contrario se inserta el elemento
		while (actual->getSig()) {
			actual = actual->getSig();
		}
		actual = new NodoEjercicio(ejer,nullptr);
	}
}
void ListaEjercicios::eliminaEjercicio(Ejercicio* n) {//Busca y elimina un nodo determinado de la lista
	NodoEjercicio* anterior = nullptr;
	actual = primero;
	while (actual && actual->getEjercicio()->getNombreE() != n->getNombreE()) { //cambia segun los parametros de busqueda
		anterior = actual; //Se usa una auxiliar anterior para guardar el campo del nodo anterior al que se va a borrar
		actual = actual->getSig(); //Avanza por la lista hasta encontrar el objeto a borrar.
	}
	if (!actual || actual->getEjercicio()->getNombreE() != n->getNombreE())//Si no lo encontro, cambia segun los parametros de busqueda
		return; //
	else {//Borra el nodo
		if (!anterior)//si es el primer elemento
			primero = actual->getSig();
		else//si es un elemento intermedio o el ultimo
			anterior->setSig(actual->getSig());
		delete actual;
	}
}
string ListaEjercicios::toString() { // toString de la clase, obtiene todos nodos, les extrae los datos y los imprime en pantalla, cambia segun el contenido de los nodos
	string s1;
	actual = primero;

	while (actual != nullptr) {
		s1 += actual->getEjercicio()->resumen() + "\n";
		actual = actual->getSig();
	}
	return s1;
}

Ejercicio* ListaEjercicios::encuentraEjercicio(string nom) { //Busca un objeto y lo devuelve a partir de un nombre que digite el usuario, cambia segun el contenido del nodo
	actual = primero;
	while (actual != nullptr) {
		if (actual->getEjercicio()->getNombreE() == nom) {
			return actual->getEjercicio();
			break;
		}
		actual = actual->getSig();
		if (actual == nullptr)
			return nullptr;
	}
}

string ListaEjercicios::buscarEjercicio(string nom) {//Busca un objeto y retorna la informacion de este, cambia segun el contenido del nodo
	actual = primero;
	while (actual != nullptr) {
		if (actual->getEjercicio()->getNombreE() == nom) {
			return actual->getEjercicio()->resumen();
			break;
		}
		actual = actual->getSig();
		if (actual == nullptr)
			return nullptr;
	}
}

void ListaEjercicios::ActualizaEjercicio(Ejercicio* nuevo) { //Actualiza la informacion de un objeto que se encuentre en esta clase, cambia segunel contenido del nodo
	actual = primero;
	while (actual != nullptr) {
		if (actual->getEjercicio()->getNombreE() == nuevo->getNombreE()) {
			actual->setEjercicio(nuevo);
			break;
		}
		actual = actual->getSig();
	}
}