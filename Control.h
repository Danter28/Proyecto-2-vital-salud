#pragma once
#include"ListaEjercicios.h"
#include"ListaPersona.h"
#include"menu.h"
class Control
{
	const ListaPersona* instructores = new ListaPersona();
	const ListaPersona* socios = new ListaPersona();
	const ListaEjercicios* R1 = new ListaEjercicios();

public:
	static void menuPrincipal();
	static void menuAdmin();
	static void menuClient();
	static void verDatosC(Persona*);
	static void verClases();
	static void solicitaEvaluacion(Persona*);
};

