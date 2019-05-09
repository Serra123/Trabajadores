#include <iostream>
#include "trabajador.h"

Trabajador::Trabajador(int legajo,string nombre){

	this->legajo = legajo;
	this->nombre = nombre;

}
 int Trabajador::legajoDelTrabajador(){
 	return this->legajo;
 }

 string Trabajador::nombreDelTrabajador(){
 	return this->nombre;
 }

 virtual float Trabajador::calcularSueldo(){
 
 }