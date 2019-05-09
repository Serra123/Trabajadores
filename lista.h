#ifndef LISTA_H
#define LISTA_H
# include "nodo.h"

template < typename Dato >
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
		void agregar(Dato d,int pos);

		/* Obtener el tamaño de la lista
		 	PRE: Lista creada
		 	POST: devuelve el tamaño de la lista (cantidad de nodos) */
		int tamanio();

		/* Obtener el dato que está en la posición pos
 			PRE: - lista creada y no vacía
				 - 0 < pos <= tam
			POST: devuelve el dato que está en la posición pos
				  se toma 1 como el primero */
		Dato<Dato> consultar(int pos);

		// ¿Lista vacia?
		// PRE: Lista creada
		// POST: T si es vacia, F sino
		bool listaVacia();

		// Borrado del nodo que está en la posición pos
		// PRE: - lista creada y no vacía
		//- 0 < pos <= tam
		// POST: libera el nodo que está en la posición pos
		// se toma 1 como el primero
		void eliminar(int pos);

	private:

		Nodo<Dato>* obtenerNodo(int pos);
};

template < typename Dato >
Lista<Dato>::Lista(){
	this->primero = NULL;
	this->tamanio = 0;
}

template < typename Dato >
Nodo<Dato>* Lista<Dato>::obtenerNodo(int pos){

	Nodo<Dato>* aux = this->primero;
	for (int i = ; i < pos; ++i) aux = aux->obtenerSiguiente();
	return aux;

}

template < typename Dato >
void Lista<Dato>::agregar(Dato d){

	Nodo<Dato>* nuevoNodo = new Nodo(d);
	if(lista_vacia()){
		nuevoNodo->cambiarSiguiente(this->primero);
		this->primero = nuevoNodo;
	}
	else{
		
		Nodo* anterior = NULL;
		if(d->legajo_del_trabajador() < primero->legajo_del_trabajador()){
			nuevo_nodo->cambiarSiguiente(primero);
			primero = nuevo_nodo;
		}
		Nodo* actual = primero->obtenerSiguiente();
		while(anterior->obtenerSiguiente()){
			if(d->legajo_del_trabajador() < actual->legajo_del_trabajador()){
				nuevoNodo->cambiarSiguiente(actual);
				anterior->cambiarSiguiente(nuevoNodo);
			}
			anterior = actual;
			actual = actual->obtenerSiguiente();
		}
		nuevoNodo->cambiarSiguiente(aux->obtenerSiguiente());
		aux->cambiarSiguiente(nuevoNodo);
	}
	this->tamanio++;
}

template < typename Dato >
int Lista<Dato>::tamanio(){
	return this->tamanio;
}

template < typename Dato >
Dato Lista<Dato>::consultar(int pos){
	Nodo* aux = obtenerNodo(pos);
	return aux->obtenerDato();
}

template < typename Dato >
bool Lista<Dato>::listaVacia(){
	return this->tamanio == 0;
}

template < typename Dato >
void Lista<Dato>::eliminar(int pos) {
	Nodo<Dato>* aux;
	if(pos == 1){
		aux = this->primero;
		primeo = aux->obtenerSiguiente();
	}
	else{
		Nodo<Dato>* anterior = obtenerNodo(pos-1);
		aux = anterior ->obtenerSiguiente();
		anterior ->cambiarSiguiente(aux->obtenerSiguiente());
	}
	this->tamanio--;
	delete aux;
}

template < typename Dato >
Lista<Dato>::~Lista(){
	while(!listaVacia()){
		eliminar(1);
	}
}

#endif