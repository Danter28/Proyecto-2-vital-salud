#include "Nodos.h"


#ifndef _LISTA_
#define _LISTA_
class Lista_Objeto {
private:
	Nodo* primero;
	Nodo* actual;
public:
	Lista(void);
	~Lista(void);
	bool listaVacia();
	string toString();
	Objeto* encuentraObjeto(/*parametro de busqueda*/);
	string buscarObjeto(/*parametro de busqueda*/);

};#endif

class ListaEjercicios {
private:
	Nodo* primero;
	Nodo* actual;
public:
	ListaEjercicios(void);
	~ListaEjercicios(void);
	bool listaVacia();
	string toString();
	void insertarEjercicio(Ejercicio*);
	void eliminaEjercicio(Ejercicio*);
	void ActualizaEjercicio(Ejercicio*);
	Ejercicio* encuentraEjercicio(/*parametro de busqueda*/);
	string buscarEjercicio(/*parametro de busqueda*/);

};
#endif // !_LISTAEJERCICIOS_

/*
class ListaSocios {
private:
	Nodo* primero;
	Nodo* actual;
public:
	ListaSocios(void);
	~ListaSocios(void);
	bool listaVacia();
	string toString();
	void insertarSocio(Socio*);
	void eliminaSocio(Socio*);
	void ActualizaSocio(Socio*);
	Socio* encuentraSocio(/*parametro de busqueda*//*);
	string buscarSocio(/*parametro de busqueda*//*);

};

class ListaInstructores {
private:
	Nodo* primero;
	Nodo* actual;
public:
	ListaInstructores(void);
	~ListaInstructores(void);
	bool listaVacia();
	string toString();
	void insertarInstructor(Instructor*);
	void eliminaInstructor(Instructor*);
	void ActualizaInstructor(Instructor*);
	Instructor* encuentraInstructor(/*parametro de busqueda*//*);
	string buscarInstructor(/*parametro de busqueda*//*);

};*/