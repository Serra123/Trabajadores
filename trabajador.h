#ifndef TRABAJADOR_H
#define TRABAJADOR_H

class Trabajador{

	private:
		int legajo;
		string nombre;
		float sueldo_a_cobrar;
		char tipo_de_trabajador;
		
	public:

		Trabajador(int legajo,string nombre);
		int legajoDelTrabajador();
		string nombreDelTrabajador();
		void asignar_sueldo_a_cobrar();
		virtual float calcularSueldo();
		virtual void mostrarDatos();
		~Trabajador();
	
};






#endif