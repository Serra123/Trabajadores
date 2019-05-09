#include <iostream>
#include <fstream>
#include <string>

#include "lista.h"
#include "empleado.h"

using std::ifstream;
using namespace std;



void  leerArchivo(char const *archivoTxt){
	 Lista<Trabajador*>* nuevaLista = new Lista();


	int i = 0;
	ifstream archivo;
	archivo.open(archivoTxt);
	if(archivo.is_open()){
		while(!archivo.eof()){
			archivo >> tipoDeEmpleado;
			archivo >> legajo;
			archivo >> nombre;
			if(tipoDeEmpleado == "E"){
				archivo >> sueldoMensual;
				archivo >> llegadasTarde;
				archivo >> ausencia;
				Empleado* nuevoEmpleado = new Empleado(legajo,nombre,tipo_de_empleado,sueldoMensual,llegadasTarde,ausencia);
				
			}
			else {
				if(tipoDeEmpleado == "J"){
					archivo >> valorDiario;
					archivo >> cantidadDeDias;
					
				}
				archivo >> valorHoraCatedra;
				archivo >> horasCatedra;
				archivo >> horasADescontar;
				
			}
			i++;
		}
		archivo.close();
		
	}
	
}

