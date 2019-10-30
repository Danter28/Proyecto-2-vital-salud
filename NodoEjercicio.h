#include "Ejercicio.h"
#include "Persona.h"

#ifndef _NODO_
#define _NODO_
class Nodo {
private:
	Nodo* siguiente;
public:
	Nodo(Nodo*);
	void setSigNodo(Nodo*);
	Nodo* getSig();
	~Nodo();		
		
};
#endif

#ifndef _NODOEJERCICIO_
#define _NODOEJERCICIO_
class NodoEjercicio :Nodo {
private:
	Ejercicio* ejercicio;
public:
	NodoEjercicio(Ejercicio*, Nodo*);
	void setEjercicio(Ejercicio*);
	Ejercicio* getEjercicio();
	~NodoEjercicio();


};
#endif



#ifndef _NODOPERSONA_
#define _NODOPERSONA_
class NodoPersona :Nodo {
private:
	Persona* persona;
public:

	NodoPersona(Persona*, NodoPersona*);
	void setPersona(Persona*);
	Persona* getPersona();
	~NodoPersona();

};
#endif
