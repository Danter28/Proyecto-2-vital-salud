#pragma once
#include "NodoPersona.h"
class ListaPersona{
	private:
		NodoPersona* primero;
		NodoPersona* actual;
	public:
		ListaPersona();
		~ListaPersona();
		bool listaVacia();
		string toString();
		void insertaPersona(Persona*);
		void eliminaPersona(Persona*);
		void ActualizaPersona(Persona*);
		Persona* encuentraPersona(/*parametro de busqueda*/);
		string buscarPersona(/*parametro de busqueda*/);

	


};
