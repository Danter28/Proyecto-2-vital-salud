#include "NodoEjercicio.h"

class ListaEjercicios {
private:
	NodoEjercicio* primero;
	NodoEjercicio* actual;
public:
	ListaEjercicios(void);
	~ListaEjercicios(void);
	bool listaVacia();
	string toString();
	void insertarEjercicio(Ejercicio*);
	void eliminaEjercicio(Ejercicio*);
	void ActualizaEjercicio(Ejercicio*);
	Ejercicio* encuentraEjercicio(string);
	string buscarEjercicio(string);

};
#endif // !_LISTAEJERCICIOS_
