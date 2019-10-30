#ifndef _EJERCICIO_
#define _EJERCICIO_
#include "Librerias.h"
class Ejercicio {
private:
	string nombreEjercicio;
	string parteCuerpo;
	int series;
	int repeticiones;
public:
	Ejercicio();
	Ejercicio(string, string, int, int);
	~Ejercicio();
	string getNombreE();
	string getParteC();
	string resumen();
	int getSeries();
	int getRepeticiones();
	void setNombreE(string);
	void setParteC(string);
	void setSeries(int);
	void setRepeticiones(int);


};
#endif // !_EJERCICIO_

