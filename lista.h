#ifndef LISTA_H
#define LISTA_H
# include "nodo.h"

class Lista{
	private:
		// Primer elemento de la lista
		Nodo* primero;
		// Tamaño de la lista
		int tamanio;
	public:
		/* Constructor
 		PRE: Ninguna
 		POST: construye una lista vacía
			- primero apunta a nulo
			- tam = 0 */
		Lista();

		// Destructor
		// PRE: Lista creada
		// POST: Libera todos los recursos de la lista
		~Lista();

		/*  Agregar un elemento a la lista
			PRE: lista creada y d válido
		 	POST: agrega un dato dentro de un nodo al principio
				- modifica el primero
				- tam se incrementa en 1 */
		void agregar(Trabajador dato);

		/* Obtener el tamaño de la lista
		 	PRE: Lista creada
		 	POST: devuelve el tamaño de la lista (cantidad de nodos) */
		int tamanio();

		/* Obtener un puntero al dato que tiene el legajo igual al pasado por parametro
 			PRE:  Lista creada y no vacía
			POST: Devuelve el dato que que tiene el mismo legajo que el pasado por parametro
				  Devuelve NULL si no existe un dato en la lista con el legajo pasado por parametro
		*/
		Trabajador* consultar(int legajo);

		/* 			¿Lista vacia?
		 PRE: 		Lista creada
		 POST: 		True si es vacia, False si no es vacia
		*/
		bool lista_vacia();

		/* 		Borrado del nodo que tiene contiene al trabajador que tiene el mismo legajo que el pasado por parametro
		PRE: 	Lista creada y no vacía
		POST: 	Libera el nodo que tiene el mismo legajo que el pasado por parametro
				No elimina nada si no existe un trabajador con el mismo legajo que el pasado por parametro
		*/
		void eliminar(int legajo);

		/* 		Borrado del nodo que está en la ultima posicion
		PRE: 	Lista creada y no vacía
		POST: 	Libera el ultimo nodo de la lista
		*/
		void eliminar();
};

#endif