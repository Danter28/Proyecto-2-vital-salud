#include"Socio.h"
Socio::Socio() :Persona("", "", "", "") {
	peso = 80.0;
	masaMuscular = 0.70;
	grasaCorporal = 0.30;
	tipoRutina = 1;
	rutina = nullptr;
}
Socio::Socio(string cedula, string nombreCompleto, string email, string telefono):Persona(cedula,nombreCompleto,email,telefono){
	peso = 80.0;
	masaMuscular = 0.70;
	grasaCorporal = 0.30;
	tipoRutina = 1;
	rutina = nullptr;
}
Socio::~Socio(){}
string Socio::getCedula() { return Persona::getCedula(); }
string Socio::getNombreCompleto() {return Persona::getNombreCompleto(); }
string Socio::getEmail() { return Persona::getEmail(); }
string Socio::getTelefono() { return Persona::getTelefono(); }
string Socio::verInformacion() {
	string reporte = "cedula: " + getCedula() + "\nNombreCompleto: " + getNombreCompleto() + "\nEmail: " + getEmail() + "\nTelefono: " + getTelefono() +
		"\nRutina: " + rutina->toString();



	/////////	agregar los otros datos		\\\\\\\\\


	return reporte;
}
void Socio::setCedula(string cedula) { Persona::setCedula(cedula); }
void Socio::setNombreCompleto(string nombre) { Persona::setNombreCompleto(nombre); }
void Socio::setEmail(string email) { Persona::setEmail(email); }
void Socio::setTelefono(string telefono) { Persona::setTelefono(telefono); }
float Socio::getPeso() { return peso; }
float Socio::getMasaMuscular() { return masaMuscular; }
float Socio::getGrasaCorporal() { return grasaCorporal; }
bool Socio::getTipoRutina() { return tipoRutina; }
ListaEjercicios* Socio::getRutina() { return rutina; }
void Socio::setPeso(float peso) { this->peso = peso; }
void Socio::setMasaMuscular(float masaM) { masaMuscular = masaM; }
void Socio::setGrasaCorporal(float grasaC) { grasaCorporal = grasaC; }
void Socio::setTipoRutina(int tipo) { tipoRutina = (tipo == 1)?true:false; }
void Socio::setRutina(ListaEjercicios* rutina) { this->rutina = rutina; }
void Socio::setInstructor(Instructor* ins) { instructor = ins; }
string Socio::toString() {
	string resumen=Persona::toString();
	resumen += "\nPeso: " + std::to_string(getPeso()) +
		"\nMasa Muscular: " + std::to_string(getMasaMuscular()) +
		"\nGrasa Corporal:" + std::to_string(getMasaMuscular()) +
		"\nRutina: \n" + getRutina()->toString() + "\n\n";
	return resumen;


}
