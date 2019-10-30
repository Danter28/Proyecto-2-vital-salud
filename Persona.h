#ifndef _PERSONA_
#define _PERSONA_
#include<iostream>
#include<string>
using std::string;
class Persona {

private:
	string cedula;
	string nombreCompleto;
	string email;
	string telefono;
public:
	Persona();
	Persona(string,string,string,string);
	~Persona();
	string getCedula();
	string getNombreCompleto();
	string getEmail();
	string getTelefono();
	void setCedula(string);
	void setNombreCompleto(string);
	void setEmail(string);
	void setTelefono(string) ;
	string toString();


};
#endif // !_PERSONA_
