#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "trabajador.h"

class Empleado:public Trabajador{
	private:

		float sueldoMensual;
		int llegadasTarde;
		int ausencia;


	public:

		Empleado(int legajo,string nombre,float sueldoMensul,int llegadasTarde,int ausencia);
		float calcularSueldo();
		~Empleado();
	
};
#endif