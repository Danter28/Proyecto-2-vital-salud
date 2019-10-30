#include "Ejercicio.h"
#include "Persona.h"
#ifndef _NODOEJERCICIO_
#define _NODOEJERCICIO_
class NodoEjercicio {
private:
	Ejercicio* ejercicio;
	NodoEjercicio* siguiente;
public:
	NodoEjercicio(Ejercicio*);
	void setEjercicio(Ejercicio*);
	NodoEjercicio* getEjercicio();
	void setSig(NodoEjercicio*);
	NodoEjercicio* getSig();
	~NodoEjercicio();

};
#endif // !_NODOEJERCICIO_
