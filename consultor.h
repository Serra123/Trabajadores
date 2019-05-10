#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "trabajador.h"

class Consultor:public Trabajador{
	private:
		float valor_hora_catedra;
		int horas_catedra;
		int horas_a_descontar;

	public:
		Consultor(int legajo,string nombre);
		float liquidar_sueldo();
		~Consultor();
	
};
#endif