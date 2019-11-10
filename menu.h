#pragma once
#include "Librerias.h"
#include "Socio.h"
#include"ListaPersona.h"
#include"ListaEjercicios.h"
class menu
{
public:
	//---------------------------
	static string menuPrincipal();
	//-------ADMIN--------------------
	static string menuAdmin();
	static string registroInstructores();
	static string registroSocios();
	static string registroClases();
	//----------CLIENT---------------
	static string menuClien();
	static string verDatosC();
	static string verClases();
	static string solicitaEvaluacion(Socio*);


};

