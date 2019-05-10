#include <iostream>
#include "nodo.h"



// Constructor con parametro
Nodo::Nodo(Trabajador d){
	dato = d;
	siguiente = NULL;
}

// Destructor
Nodo::~Nodo(){
	// No hace nada
}

// Setear el ptr al sig
void Nodo::asignar_siguiente(Nodo* ps){
	siguiente = ps;
}

// Devolver el dato
Trabajador* Nodo::obtener_dato(){
	return &dato;
}

// Devolver el siguiente
Nodo* Nodo::obtener_siguiente(){
	return siguiente;
}