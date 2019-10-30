#ifndef _RUTINA_
#define _RUTINA_
#include "Ejercicio.h"

class Ejercicio;
class Rutina {
private:
	Ejercicio** ejercicios;
	string objetivo;
	int tamanno;
	int cantidad;
public:
	Rutina();
	Rutina(string,int);
	~Rutina();
	int getCantidad();
	int getTamanno();
	string reporteRutina();
	void setTamanno(int);
	void agregarEjercicio(Ejercicio*);
	void eliminarEjercicio(Ejercicio*);

};
#endif