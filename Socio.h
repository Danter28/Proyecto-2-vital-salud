#ifndef _SOCIO_
#define _SOCIO_
#include"ListaEjercicios.h"
#include "Instructor.h"
#include"Persona.h"
class Rutina;
class Socio :public Persona {
private:
	Instructor* instructor;
	float peso;
	float masaMuscular;
	float grasaCorporal;
	bool tipoRutina;
	ListaEjercicios* rutina;
public:
	Socio();
	Socio(string, string, string, string,float,float,float,bool );
	~Socio();
	string getCedula();
	string getNombreCompleto();
	string getEmail();
	string getTelefono();
	string verInformacion();
	void setCedula(string);
	void setNombreCompleto(string);
	void setEmail(string);
	void setTelefono(string);
	float getPeso();
	float getMasaMuscular();
	float getGrasaCorporal();
	bool getTipoRutina();
	Instructor* getInstructor();
	ListaEjercicios* getRutina();
	void setPeso(float);
	void setMasaMuscular(float);
	void setGrasaCorporal(float);
	void setTipoRutina(int);
	void setRutina(ListaEjercicios*);
	void setInstructor(Instructor*);
	string toString();

};
#endif // !_SOCIO_

