#include <iostream>
#include "jornalero.h"

Jornalero::Jornalero(int legajo,string nombre,float sueldo_diario,int cantidad_dias):Trabajador(legajo, nombre){
	this->sueldo_diario = sueldo_diario;
	this->cantidad_dias = cantidad_dias;
}

float Jornalero::liquidar_sueldo(){
	return sueldo_diario * cantidad_dias;
}