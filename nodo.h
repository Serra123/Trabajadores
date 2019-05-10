#ifndef NODO_H
#define NODO_H

template < typename Dato >
class Nodo{
	private:
		// Dato a almacenar
		Trabajador dato;
		
		// Puntero a otro nodo
		Nodo* siguiente;
		
	public:
		/*  Constructor con parametro
		    PRE: Ninguna
			POST: Crea un nodo con el dato
		 		 y el puntero "siguiente" apuntando a NULL */
		Nodo(Trabajador dato);

		/* Destructor
		 	PRE: Nodo creado
		 	POST: No hace nada*/
		~Nodo();

		/* Setear el puntero al siguiente nodo
		 	PRE: nodo creado y ps válido
		    POST: el puntero al siguiente apuntará a ps */
		void asignar_siguiente(Nodo* ps);

		/* Obtener el dato
			PRE: nodo creado
			POST: Devuelve un punrero al dato que contiene el nodo */
		Trabajador* obtener_dato();

		/* Obtener el puntero al nodo siguiente
		 	PRE: nodo creado
			POST: Devuelve el puntero al siguiente nodo
				  si es el último devuelve NULL */
		Nodo* obtenerSiguiente();

};


#endif
