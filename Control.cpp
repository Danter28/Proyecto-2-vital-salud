#include "Control.h"
//creacion de listas basicas

//Menu Principal************************************************************
void Control::menuPrincipal() {
	int opc;
	do {
		cout << menu::menuPrincipal();
		cin >> opc;
		while (!isdigit(opc)) { cout << "entrada invalida, intente de nuevo...\n"; cin >> opc; }
		switch (opc) {
		case 1: {
			system("cls");
			Control::menuAdmin();}
			  break;
		case 2: {
			system("cls");
			Control::menuClient();}
			  break;
		case 3: {system("cls"); cout << "Gracias por utilizar nuestros servicios...\n";}
			  break;
		default: {system("cls"); cout << "la opcion es incorrecta, intente de nuevo...\n"; }
		}
	} while (opc != 3);
}
/////Menu Admin***********************************************************
void Control::menuAdmin(){
		int opc;
		do {
			system("cls");
			cout << menuAdmin();
			cin >> opc;
			while (!isdigit(opc)) { cout << "entrada invalida, intente de nuevo...\n"; cin >> opc; }
			switch (opc) {
			case 1: {
				system("cls");
				menu::registroInstructores(); }
				  break;
			case 2: {
				system("cls");
				menu::registroSocios(); }
				  break;
			case 3: {system("cls");
				menu::registroClases(); }
				  break; 
			case 4:{system("cls"); cout << "Gracias por utilizar nuestros servicios...\n"; }
				  break;
			default: {system("cls"); cout << "la opcion es incorrecta, intente de nuevo...\n"; }
			}
		} while (opc != 3);
	}

//Menu Client*************************************************************
void Control::menuClient(){
	int opc; string nom;
	Persona* s;
	cout << "digite su nombre completo...\n";
		cin >> nom;
		s= socios->encuentraPersona(nom);
	do {
		system("cls");
		cout << menu::menuClien();
		cin >> opc;
		while (!isdigit(opc)) { cout << "entrada invalida, intente de nuevo...\n"; cin >> opc; }
		switch (opc) {
		case 1: {
			system("cls");
			menu::verDatosC(); }
			  break;
		case 2: {
			system("cls");
			menu::verClases(); }
			  break;
		case 3: {
			system("cls");
			
			menu::solicitaEvaluacion(socios.encuentraPersona(nom));
		}
			  break;
		case 4: {system("cls"); cout << "Gracias por utilizar nuestros servicios...\n"; }
			  break;
		default: {system("cls"); cout << "la opcion es incorrecta, intente de nuevo...\n"; }
		}
	} while (opc != 3);
}
void Control::verDatosC(Persona* s){}
void Control::verClases(){}
void Control::solicitaEvaluacion(Persona* s){}
