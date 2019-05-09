#include <iostream>
#include "empleado.h"

Empleado::Empleado(int legajo,string nombre,float sueldoMensual,int llegadasTarde,int ausencia):Trabajador(legajo,nombre){
	
	this->sueldoMensual = sueldoMensual;
	this->llegadasTarde = llegadasTarde;
	this->ausencia = ausencia;

}

float Empleado::calcularSueldo(){
	float sueldo;
	float sueltoPorDia = this->sueldoMensual/30;

	if(this->ausencia == 0 && this->llegadasTarde < 3) sueldo = this->sueldoMensual + (10*this->sueldoMensual)/100;
	if(this->ausencia > 0) sueldo = this->sueldoMensual - sueltoPorDia*this->ausencia;

	return sueldo;

}
