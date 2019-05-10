#include <iostream>
#include "trabajador.h"

Trabajador::Trabajador(int legajo,string nombre){
	this->legajo = legajo;
	this->nombre = nombre;
}

int Trabajador::obtener_legajo(){
 	return legajo;
 }

string Trabajador::obtener_nombre(){
 	return nombre;
 }

float Trabajador::obtener_sueldo_a_cobrar(){
 	return sueldo_a_cobrar;
 }

void Trabajador::asignar_sueldo_a_cobrar(float nuevo_sueldo){
 	sueldo_a_cobrar = nuevo_sueldo;
 }