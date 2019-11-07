#ifndef _INSTRUCTOR_
#define _INSTRUCTOR_
#include "Persona.h"

class Instructor:public Persona{
private:

public:
	Instructor();
	Instructor(string,string,string,string);
	~Instructor();
	string getCedula();
	string getNombreCompleto();
	string getEmail();
	string getTelefono();
	void setCedula(string);
	void setNombreCompleto(string);
	void setEmail(string);
	void setTelefono(string);
	



};

#endif // !_INSTRUCTOR_
