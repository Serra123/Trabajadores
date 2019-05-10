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
		int obtener_legajo();
		string obtener_nombre();
		void asignar_sueldo_a_cobrar(float nuevo_sueldo);
		void obtener_sueldo_a_cobrar();
		virtual float liquidar_sueldo();
		virtual void a_cadena();
		~Trabajador();
	
};

#endif