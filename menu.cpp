#include "menu.h"

#include <iostream>

using namespace std;

Menu::Menu(){
    opcion_usuario = MENU_ACTIVO;
}

void Menu::iniciar_interfaz(){
    cargar_lista();
    while(opcion_usuario != OPCION_SALIR){
        mostrar_menu();
        recibir_opcion();
        ejecutar_opcion();
    }
}

void Menu::cargar_lista(){
    ifstream archivo_trabajadores("trabajadores.txt");
    leer_trabajadores(archivo_trabajadores);
    archivo_trabajadores.close();
}

void Menu::leer_trabajadores(ifstream &archivo_trabajadores){
    cout << "Acomodando trabajadores en lista..." << endl;
    char tipo_de_trabajador;
    int legajo
    string nombre;
    while(archivo_trabajadores >> tipo_de_trabajador){
    	archivo_trabajadores >> legajo;
    	archivo_trabajadores >> nombre;
    	if(tipo_de_trabajador == TIPO_EMPLEADO){
    		Empleado aux(legajo,nombre);
    		float sueldo_mensual;
    		int llegadas_tarde;
    		int ausencias;
    		aux->asginar_tipo_de_trabajador(tipo_de_trabajador);		
    		aux->asignar_sueldo_mensual(archivo_trabajadores >> sueldo_mensual);
    		aux->asignar_llegadas_tarde(archivo_trabajadores >> llegadas_tarde);
    		aux->asignar_ausencias(archivo_trabajadores >> ausencias);
    		lista_principal.agregar(aux);
    	}else if(tipo_de_trabajador == TIPO_JORNALERO){
    		Jornalero aux(legajo,nombre);
    		float sueldo_diario;
    		int dias_trabajados;
    		aux->asignar_tipo_de_trabajador(tipo_de_trabajador);
    		aux->asignar_sueldo_diario(archivo_trabajadores >> sueldo_diario);
    		aux->asignar_dias_trabajados(archivo_trabajadores >> dias_trabajados);
    		lista_principal.agregar(aux);
    	}else if(tipo_de_trabajador == TIPO_CONSULTOR){
    		Consultor aux(legajo,nombre);
    		float sueldo_hora_catedra;
    		int cantidad_horas_catedra;
    		int dias_a_descontar;
    		aux->asignar_tipo_de_trabajador(tipo_de_trabajador);
    		aux->asignar_sueldo_hora_catedra(archivo_trabajadores >> sueldo_hora_catedra);
    		aux->asignar_cantidad_horas_catedra(archivo_trabajadores >> cantidad_horas_catedra);
    		aux->asginar_dias_a_descontar(archivo_trabajadores >> dias_a_descontar);
    		lista_principal.agregar(aux);
    	}else{
    		cout << "ERROR, EN EL ARCHIVO DE TEXTO HAY UN TIPO DE EMPLEADO INVALIDO" << endl;
    	}
    }
}

void Menu::mostrar_trabajadores_de_la_lista(){
    lista_principal.mostrar_trabajadores();
}

void Menu::recibir_opcion(){
    cin >> opcion_usuario;
    cout << endl << endl;
}

void Menu::ejecutar_opcion(){
    switch(opcion_usuario){
        case OPCION_CARGAR_TRABAJADOR:
            cargar_nuevo_trabajador();
            break;
        case OPCION_BUSCAR_TRABAJADOR:
            buscar_trabajador();
            break;
        case OPCION_MOSTRAR_TABAJADORES:
            mostrar_trabajadores_del_chango();
            break;
        case OPCION_SALIR:
            cout << "Saliendo" << endl;
            break;
        default:
            cout << "Ingreso invalido. Recuerde que debe ingresar una de las opciones del Menú." << endl << endl;
    }
}

void Menu::mostrar_menu(){
    opcion_usuario = MENU_ACTIVO;
    cout << endl << endl;
    cout << "\t\t\t ---Menú de acciones en lista---"<<endl;	
    cout << "\t Primero seleccionar una opción del Menú, luego una del SubMenú" << endl;
    cout << "\t\t\t      [Menú(*) - SubMenú(-)]" << endl << endl;
    cout << " * Cargar nuevo trabajador 		[a]" << endl;
    cout << " * Buscar trabajador por legajo 	[b]" << endl;
    cout << "     - Quitar un trabajador 		-e-" << endl;
    cout << " * Sumar sueldo trabajadores		[f]" << endl;
    cout << " * Mostrar trabajadores 			[h]" << endl;
    cout << " * Salir 							[x]" << endl << endl;
    cout << "Por favor ingrese su opción:" << endl << endl;
}

void Menu::cargar_trabajador(){
	char tipo_de_trabajador;
	cout << "Ingrese tipo de trabajador a cargar" << endl;
	cout << "E para empleado" << endl;
	cout << "J para jornalero" << endl;
	cout << "C para consultor" << endl;
	cout << "s para salir" << endl;
	while(tipo_de_trabajador != OPCION_SALIR){
	Trabajador* nuevo_trabajador;
	pedir_datos_trabajador(tipo_de_trabajador,nuevo_trabajador);
	lista_principal.agregar(nuevo_trabajador);
    
}

void Menu::pedir_datos_trabajador(char tipo_de_trabajador, Trabajador* nuevo_trabajador){
	cout << "Ingrese legajo de nuevo trabajador" << endl;
	cin >> 
}


int Menu::buscar_trabajador_nombre(){
    bool trabajador_encontrado=false;
    int posicion = POSICION_INVALIDA;
    string nombre_trabajador_buscado = BUSQUEDA_NULA;
    cout << "Ingrese el nombre del trabajador a buscar: "<<endl<<endl;
    cin >> nombre_trabajador_buscado;
    lista_principal.buscar_trabajador_por_nombre(nombre_trabajador_buscado, posicion, trabajador_encontrado);
    if(!trabajador_encontrado){
        cout<<"\t\t***trabajador no encontrado***"<<endl;
        return posicion;
    }else{
        return posicion;
	}
}

int Menu::buscar_trabajador_codigo(){
    bool trabajador_encontrado=false;
    int posicion = POSICION_INVALIDA;
    int codigo_trabajador_buscado= POSICION_INVALIDA;
    cout << "Ingrese el codigo del trabajador a buscar: ";
    cin >> codigo_trabajador_buscado;
    lista_principal.buscar_trabajador_por_codigo(codigo_trabajador_buscado, posicion, trabajador_encontrado);
    if(!trabajador_encontrado){
        cout<<"\t\t***trabajador no encontrado***"<<endl;
        return posicion;
    }else{
        return posicion;
    }
}

