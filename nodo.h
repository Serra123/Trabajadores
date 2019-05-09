#ifndef NODO_H
#define NODO_H

template < typename Dato >
class Nodo{
	private:
		// Dato a almacenar
		Dato dato;
		
		// Puntero a otro nodo
		Nodo* siguiente;
		
	public:
		/*  Constructor con parametro
		    PRE: Ninguna
			POST: Crea un nodo con el dato d
		 		 y el puntero a NULL */
		Nodo(Dato d);

		/* Destructor
		 	PRE: Nodo creado
		 	POST: No hace nada*/
		~Nodo();

		/* Setea el dato (lo cambia)
			PRE: el nodo tiene que estar creado
			 	 d tiene que ser un dato válido
			POST: el nodo queda con el dato d*/
		void cambiarDato(Dato d);

		/* Setear el puntero al siguiente nodo
		 	PRE: nodo creado y ps válido
		    POST: el puntero al siguiente apuntará a ps */
		void cambiarSiguiente(Nodo* ps);

		/* Obtener el dato
			PRE: nodo creado
			POST: devuelve el dato que contiene el nodo */
		Dato obtenerDato();

		/* Obtener el puntero al nodo siguiente
		 	PRE: nodo creado
			POST: Devuelve el puntero al siguiente nodo
				  si es el último devuelve NULL */
		Nodo* obtenerSiguiente();

};

// Constructor con parametro
template < typename Dato >
Nodo<Dato>::Nodo(Dato d){
	this->dato = d;
	this->siguiente = NULL;
}

// Destructor
template < typename Dato >
Nodo<Dato>::~Nodo(){
	// No hace nada
}

// Setear el dato
template < typename Dato >
void Nodo<Dato>::cambiarDato(Dato d){
 	this->dato = d;
}

// Setear el ptr al sig
template < typename Dato >
void Nodo<Dato>::cambiarSiguiente(Nodo* ps){
	this->siguiente = ps;
}

// Devolver el dato
template < typename Dato >
Dato Nodo<Dato>::obtenerDato(){
	return this->dato;
}

// Devolver el siguiente
template < typename Dato >
Nodo* Nodo<Dato>::obtenerSiguiente(){
	return this->siguiente;
}

#endif
