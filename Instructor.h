#ifndef _INSTRUCTOR_
#define _INSTRUCTOR_
#include "ListaPersona.h"


class Instructor:public Persona{
private:
	ListaPersona* sociosAsignados= new ListaPersona();
public:
	Instructor();
	Instructor(string,string,string,string);
	~Instructor();
	ListaPersona* getSociosAsignados();
	string getCedula();
	string getNombreCompleto();
	string getEmail();
	string getTelefono();
	void setCedula(string);
	void setNombreCompleto(string);
	void setEmail(string);
	void setTelefono(string);
	string toString();
	



};

#endif // !_INSTRUCTOR_
