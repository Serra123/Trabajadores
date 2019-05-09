#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "trabajador.h"

class Consultor:public Trabajador{
	private:
		float valor_hora_catedra;
		int horas_catedra;
		int horas_a_descontar;

	public:
		Consultor(int legajo,string nombre,char tipo_de_trabajador,float valor_hora_catedra,int horas_catedra,int horas_a_descontar);
		float calcularSueldo();
		~Consultor();
	
};
#endif