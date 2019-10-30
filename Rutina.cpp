#include"Rutina.h"
Rutina::Rutina():objetivo(" "),tamanno(0),cantidad(0){
	ejercicios = new Ejercicio * [tamanno];
	for (int recorrer = 0; recorrer < tamanno; recorrer++) {
		ejercicios[recorrer] = new Ejercicio();
	}
}
Rutina::Rutina(string objetivo, int tamanno) :objetivo(objetivo), tamanno(tamanno) { cantidad = 0;
ejercicios = new Ejercicio * [tamanno];
for (int recorrer = 0; recorrer < tamanno; recorrer++) {
ejercicios[recorrer]=nullptr;
}
}
Rutina::~Rutina(){}
int Rutina::getCantidad() { return cantidad; }
int Rutina::getTamanno() { return tamanno; }
void Rutina::setTamanno(int tamanno) {
	this->tamanno = tamanno;
	if (tamanno > this->tamanno) {
		for (int annadir = cantidad; annadir < tamanno;annadir++) {

		}
	}
	if (tamanno < this->tamanno) {
		int diferencia = this->tamanno - tamanno;
		while (diferencia > 0) {
			if (cantidad == tamanno)cantidad--;
			delete ejercicios[diferencia];
			diferencia--;
		}
	}
}
void Rutina::agregarEjercicio(Ejercicio* ejercicioN) {
	if (cantidad < tamanno) {
		ejercicios[cantidad] = ejercicioN;
		cantidad++;
	}
}
void Rutina::eliminarEjercicio(Ejercicio* ejercicio){
	for (int recorrer = 0; recorrer <= cantidad; recorrer++) {
		if (ejercicios[recorrer] == ejercicio) { 
			while (recorrer <= cantidad) {
				ejercicios[recorrer] = ejercicios[recorrer + 1];
				recorrer++;
			} 
		}
	}

}

string Rutina::reporteRutina(){
	string reporteR="\nLista de ejercicios:\n";
	for (int recorrer = 0; recorrer < cantidad; recorrer++) {
		reporteR += ejercicios[recorrer]->resumen()+"\n";
	}
	return reporteR;
}