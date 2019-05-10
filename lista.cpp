#include <iostream>
#include "lista.h"

using namespace std;

Lista::Lista(){
	primero = NULL;
	tamanio = 0;
}

void Lista::agregar(Trabajador dato){
	Nodo* nuevo_nodo = new Nodo(dato);
	if(lista_vacia()){
		nuevo_nodo->asignar_siguiente(primero);
		primero = nuevo_nodo;
	}
	else if(dato->obtener_legajo() < primero->obtener_legajo()){
			nuevo_nodo->cambiarSiguiente(primero);
			primero = nuevo_nodo;
	}else{
		Nodo* aux = primero;
		while(aux->obtener_siguiente()){
			if(dato->obtener_legajo() < aux->obtener_siguiente()->obtener_legajo()){
				nuevo_nodo->asginar_siguiente(aux->obtener_siguiente());
				aux->asginar_siguiente(nuevo_nodo);
			}
			aux = aux->asignar_siguiente(nuevo_nodo);
		}
	}
	tamanio++;
}

int Lista::obtener_tamanio(){
	return tamanio;
}

Trabajador* Lista::consultar(int legajo){
	Nodo* aux = primero;
	Trabajador* buscado = NULL;
	while(legajo != buscado->obtener_legajo() && aux){
		if(legajo == aux->obtener_legajo()){
			buscado = aux->obtener_dato;
		}
		aux = aux->obtener_siguiente;
	}
	return buscado;
}

bool Lista::lista_vacia(){
	return tamanio == 0;
}

void Lista::eliminar(int legajo){
	Nodo* nodo_a_eliminar = NULL;
	if(lista_vacia()){
		cout << "ERROR, LA LISTA ESTA VACIA";
	}else if(legajo == primero->obtener_legajo()){
			nodo_a_eliminar = primero;
			primero = nodo_a_eliminar->obtener_siguiente();
	}else{
		Nodo* aux = primero;
		while(aux->obtener_siguiente()){
			if(legajo == aux->obtener_siguiente()->obtener_legajo()){
				nodo_a_eliminar = aux->obtener_siguiente();
				aux->asignar_siguiente(aux->obtener_siguiente()->obtener_siguiente());
			}
			aux = aux->asignar_siguiente(nuevo_nodo);
		}
	}
	if(nodo_a_eliminar != NULL){
		delete nodo_a_eliminar;
		tamanio--;
	}
}


void Lista::eliminar(){
	Nodo* nodo_a_eliminar = primero;
	Nodo* aux = primero;
	while(aux->obtener_siguiente()){
		nodo_a_eliminar = aux->obtener_siguiente;
		aux = aux->obtener_siguiente()
	}	
	delete nodo_a_eliminar;
	tamanio--;
}



Lista::~Lista(){
	while(!listaVacia()){
		eliminar();
	}
}