
#ifndef _NODOPERSONA_
#define _NODOPERSONA_
#include "Persona.h"
class NodoPersona {
private:
	Persona* persona;
	NodoPersona* siguiente;
public:
	NodoPersona();
	void setPersona(Persona*);
	Persona* getPersona();
	void setSig(NodoPersona*);
	NodoPersona* getSig();
	~NodoPersona();

};
#endif // !_NODOPERSONA_