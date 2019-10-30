#ifndef _SOCIO_
#define _SOCIO_
#include"Rutina.h"
#include"Persona.h"
class Rutina;
class Socio :public Persona {
private:
	float peso;
	float masaMuscular;
	float grasaCorporal;
	bool tipoRutina;
	Rutina* rutina;
public:
	Socio();
	Socio(string, string, string, string );
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
	Rutina* getRutina();
	void setPeso(float);
	void setMasaMuscular(float);
	void setGrasaCorporal(float);
	void setTipoRutina(int);
	void setRutina(Rutina*);

};
#endif // !_SOCIO_

