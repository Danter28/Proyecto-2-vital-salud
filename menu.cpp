#include "menu.h"
string menu::menuPrincipal() {
	string menu = ".........Bienvenidos a VitalSalud........\n";
	menu += "..Digite el servicio que desea utilizar..\n"
		"1-Servicios para administrativos.........\n"
		"2-Servicios para clientes................\n"
		"3-Salir..................................\n";
	return menu;
}//-----------------ADMIN---------------------------------------------
string menu::menuAdmin() {
	string menu = 
		"..Digite el servicio que desea utilizar..\n"
		"1-Registro de instructores...............\n"
		"2-Resgistro de clientes..................\n"
		"3-Registro de clases grupales............\n"
		"4-Salir..................................\n";
	return menu;
}
string menu::registroInstructores() {
	string menu = 
		"...Digite la opcion que desea utilizar...\n"
		"1-Registro nuevo instructor..............\n"
		"2-Eliminar instructor....................\n"
		"3-Modificar instructor...................\n"
		"3-Visualizar instructores................\n"
		"4-Salir..................................\n";
	return menu;


}
string menu::registroSocios() {
	string menu =
		"...Digite la opcion que desea utilizar...\n"
		"1-Registro nuevo Socio...................\n"
		"2-Eliminar Socio.........................\n"
		"3-Modificar Socio........................\n"
		"3-Visualizar Socios......................\n"
		"4-Salir..................................\n";
	return menu;
}
string menu::registroClases() {
	string menu =
		"...Digite la opcion que desea utilizar...\n"
		"1-Registrar nueva clase grupal...........\n"
		"2-Eliminar clase grupal..................\n"
		"3-Visualizar clases grupales.............\n"
		"4-Salir..................................\n";
	return menu;
}

//-----------------------CLIENT----------------------------------------
string menu::menuClien() {
	string menu = 
		"..Digite el servicio que desea utilizar..\n"
		"1-verificar datos de cliente.............\n"
		"2-ver clases grupales disponibles........\n"
		"3-solicitar nueva evaluacion.............\n"
		"4-salir..................................\n";
	return menu;

}
string menu::verDatosC() {
	string menu =
		"...Digite la opcion que desea utilizar...\n"
		"1-Revisar datos personales...............\n"
		"2-Revisar rutina actual..................\n"
		"3-Salir..................................\n";
	return menu;
}
string menu::verClases() {
	//********clases.toString()/////
	return "s";
}
string menu::solicitaEvaluacion(Socio* s) {
	return "sus nuevas mediciones son...\nGrasaCorporal:" + std::to_string(s->getGrasaCorporal())+
		"\nMasaMuscular: "+ std::to_string(s->getMasaMuscular())+"\nPeso:"+std::to_string(s->getPeso());

}
//*******************************************************