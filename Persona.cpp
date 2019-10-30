#include "Persona.h"
Persona::Persona():cedula("0"),nombreCompleto(" "),email(" "),telefono("0000-0000") {}
Persona::Persona(string cedula, string nombreCompleto, string email, string telefono):cedula(cedula),nombreCompleto(nombreCompleto),
email(email),telefono(telefono) {}
Persona::~Persona() {}
string Persona::getCedula() { return cedula; }
string Persona::getNombreCompleto() { return nombreCompleto; }
string Persona::getEmail() { return email; }
string Persona::getTelefono() { return telefono; }
void Persona::setCedula(string ced) { cedula = ced; }
void Persona::setNombreCompleto(string nom) { nombreCompleto = nom; }
void Persona::setEmail(string email) { this->email = email; }
void Persona::setTelefono(string tel) { telefono = tel; }
string Persona::toString() {}