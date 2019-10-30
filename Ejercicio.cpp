#include "Ejercicio.h"
Ejercicio::Ejercicio():nombreEjercicio(""),parteCuerpo(""),series(0),repeticiones(0){}
Ejercicio::Ejercicio(string nombre, string parte, int serie, int repet):nombreEjercicio(nombre),parteCuerpo(parte),series(serie),repeticiones(repet){}
Ejercicio::~Ejercicio(){}
string Ejercicio::getNombreE() { return nombreEjercicio; }
string Ejercicio::getParteC() { return parteCuerpo; }
string Ejercicio::resumen() {
	string resumen = "ejercicio: " + getNombreE() + "\nparte del cuerpo que trabaja: " + getParteC() +
		"\nnumero de series: " + std::to_string(getSeries()) + "\nrepeticiiones: " + std::to_string(getRepeticiones()) + "\n";
	return resumen;
}
int Ejercicio::getSeries() { return series; }
int Ejercicio::getRepeticiones() { return repeticiones; }
void Ejercicio::setNombreE(string nombre) { nombreEjercicio = nombre; }
void Ejercicio::setParteC(string parte) { parteCuerpo = parte; }
void Ejercicio::setSeries(int serie) { series = serie; }
void Ejercicio::setRepeticiones(int repet) { repeticiones = repet; }
