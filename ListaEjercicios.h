#ifndef _LISTAEJERCICIOS_
#define _LISTAEJERCICIOS_
#include "NodoEjercicio.h"

class ListaEjercicios {
private:
	NodoEjercicio* primero;
	NodoEjercicio* actual;
public:
	ListaEjercicios();
	~ListaEjercicios();
	bool listaVacia();
	string toString();
	void insertarEjercicio(Ejercicio* );
	void eliminaEjercicio(Ejercicio* );
	void ActualizaEjercicio(Ejercicio* );
	Ejercicio* encuentraEjercicio(string);
	string buscarEjercicio(string);

};
#endif // !_LISTAEJERCICIOS_
