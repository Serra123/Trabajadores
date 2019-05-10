#include <iostream>
#include "consultor.h"

Consultor::Empleado(int legajo,string nombre):Trabajador(legajo,nombre){
	}

float Empleado::liquidar_sueldo(){
	float sueldo;
	float sueltoPorDia = this->sueldoMensual/30;

	if(this->ausencia == 0 && this->llegadasTarde < 3) sueldo = this->sueldoMensual + (10*this->sueldoMensual)/100;
	if(this->ausencia > 0) sueldo = this->sueldoMensual - sueltoPorDia*this->ausencia;

	return sueldo;

}
