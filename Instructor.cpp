#include "Instructor.h"
Instructor::Instructor():Persona(){}
Instructor::Instructor(string cedula, string nombreCompleto, string email, string telefono):Persona(cedula,nombreCompleto,email,telefono){}
Instructor::~Instructor(){}
string Instructor::getCedula() { return Persona::getCedula(); }
string Instructor::getNombreCompleto() {return Persona::getNombreCompleto(); }
string Instructor::getEmail() {return Persona::getEmail(); }
string Instructor::getTelefono() { return Persona::getTelefono(); }
void Instructor::setCedula(string cedula) { Persona::setCedula(cedula); }
void Instructor::setNombreCompleto(string nombre) { Persona::setNombreCompleto(nombre); }
void Instructor::setEmail(string email) { Persona::setEmail(email); }
void Instructor::setTelefono(string telefono) { Persona::setTelefono(telefono); }