#include "ListaEjercicios.h"
ListaEjercicios::ListaEjercicios() {
	primero = NULL;
	actual = NULL;
}


bool ListaEjercicios::listaVacia() { //retorna si la lista está vacía
	if (primero == NULL)
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
	actual = NULL;
	primero = NULL;
}

void ListaEjercicios::insertarEjercicio(Ejercicio* ejer) {  //En este metodo se inserta el Objeto n en un nodo para posteriormente insertarlo en la lista, guardandolos.

	actual = primero;
	if (primero == NULL) //Si la lista está vacia,  se crea un nuevo nodo para iniciar la lista, insertando el objeto que entra por parametro.

		primero = new NodoEjercicio();

	else { //Caso contrario se inserta el elemento
		while (actual->getSig()) {
			actual = actual->getSig();
		}
		actual = new NodoEjercicio(ejer, actual->getSig());
	}
}
void ListaEjercicios::eliminaEjercicio(Ejercicio* n) {//Busca y elimina un nodo determinado de la lista
	NodoEjercicio* anterior = NULL;
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
			anterior->setSigNodo(actual->getSig());
		delete actual;
	}
}
string ListaEjercicios::toString() { // toString de la clase, obtiene todos nodos, les extrae los datos y los imprime en pantalla, cambia segun el contenido de los nodos
	string s1;
	actual = primero;

	while (actual != NULL) {
		s1 += actual->getEjercicio()->resumen() + "\n";
		actual = actual->getSig();
	}
	return s1;
}

Ejercicio* ListaEjercicios::encuentraEjercicio(string nom) { //Busca un objeto y lo devuelve a partir de un nombre que digite el usuario, cambia segun el contenido del nodo
	actual = primero;
	while (actual != NULL) {
		if (actual->getEjercicio()->getNombreE() == nom) {
			return actual->getEjercicio();
			break;
		}
		actual = actual->getSig();
		if (actual == NULL)
			return NULL;
	}
}

string ListaEjercicios::buscarEjercicio(string nom) {//Busca un objeto y retorna la informacion de este, cambia segun el contenido del nodo
	actual = primero;
	while (actual != NULL) {
		if (actual->getEjercicio()->getNombreE() == nom) {
			return actual->getEjercicio()->resumen();
			break;
		}
		actual = actual->getSig();
		if (actual == NULL)
			return NULL;
	}
}

void ListaEjercicios::ActualizaEjercicio(Ejercicio* nuevo) { //Actualiza la informacion de un objeto que se encuentre en esta clase, cambia segunel contenido del nodo
	actual = primero;
	while (actual != NULL) {
		if (actual->getEjercicio()->getNombreE() == nuevo->getNombreE()) {
			actual->setEjercicio(nuevo);
			break;
		}
		actual = actual->getSig();
	}
}

ListaEjercicios::~ListaEjercicios() { // Destructor de la clase 
	actual = primero;
	while (primero) {
		actual = primero;
		primero = primero->getSig();
		delete actual;
	}
	actual = NULL;
	primero = NULL;
}
