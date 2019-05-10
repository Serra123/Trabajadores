#ifndef _MENU_H_
#define _MENU_H_

#include "lista.h"
#include "nodo.h"
#include "trabajador.h"
#include "empleado.h"
#include "jornalero"
#include "consultor.h"
#include <fstream>
#include <iostream>

using namespace std;

const char OPCION_CARGAR_TRABAJADOR = 'a';
const char OPCION_BUSCAR_TRABAJADOR = 'b';
const char OPCION_QUITAR_TRABAJADOR = 'c';
const char OPCION_SUELDO_MAXIMO_Y_MINIMO = 'd';
const char OPCION_MOSTRAR_TRABAJADORES = 'e';
const char OPCION_SUMATORIA_SUELDOS = 'f';
const char OPCION_SALIR = 's';

const char MENU_ACTIVO = 'x'; // Este caracter es el que funciona como inicializador, es parte de las opciones que no hacen nada

class Menu{
    
    private:

        char opcion_usuario;
        Lista lista_principal;

        /*
        *Descripción: Recibe la opción del usuario guardándolo en el atributo "opcion_usuario".
        *Pre: -.
        *Post: Queda recibida la opción del usuario en el atributo "opcion_usuario".
        */
        void recibir_opcion();

        /*
        *Descripción: Lee del archivo de texto la cantidad de trabajadores que tiene la góndola y luego los carga en un objeto lista.
        *Pre:   El archivo "trabajadores.txt" debe existir.
        *Post:  En el atributo "lista_principal" queda inicializado la lista de clase trabajadores.
        *       con la cantidad y características de los trabajadores del archivo "trabajadores.txt".
        */
        void cargar_lista();

        /*
        *Descripción: Mientras pueda leer una linea del archivo "trabajadores.txt", llama a la funcion que lee de a un trabajador
        *Pre:   El archivo "trabajadores.txt" debe existir. la lista perteneciente al atributo
                "lista_principal" debe estar correctamente inicializada. El archivo de lectura debe estar posicionado sobre 
                el primer trabajador a leer
        *Post:  Guarda los trabajadores en la lista de trabajadores del atributo "lista_principal".
        */
        void leer_trabajadores(ifstream &archivo_trabajadores);

        /*
        *Descripción: Lee las suficientes lineas del archivo "trabajadores.txt" como para cargar un trabajador, y carga este mismo en la lista_principal
        *Pre:   El archivo pasado por parametro debe existir.La lista perteneciente al atributo
                "lista_principal" debe estar correctamente inicializada. 
                El archivo de lectura debe estar posicionado sobre el legajo del trabajador a leer
        *Post:  Guarda un trabajador en la lista de trabajadores del atributo "lista_principal" segun el tipo de trabajador que sea.
        */
        void Menu::leer_trabajador(char tipo_de_trabajador, ifstream* archivo_trabajadores);

        /*
        *Descripción: Muestra por consola los trabajadores actuales de la lista "lista_principal". Mostrando nombre,legajo y sueldo a cobrar
        *Pre: -.
        *Post: Muestra por consola los trabajadores actuales de la lista "lista_principal".
        */
        void mostrar_trabajadores_de_la_lista();

        /*Descripcion: Pedira los datos de la cantidad deseada de trabajadores a ingresar.
        *Pre: Codigo y Nombre de los trabajadores no pueden repetirse.
        *Post: Los datos de los trabajadores a ingresar quedan almacenados en la lista de trabajadores ingresado por parametro.
        */
        void pedir_datos_trabajador(trabajador trabajador_a_cargar);


        /*Descripción:      De acuerdo con la opción que ha elegido el usuario, realiza una tarea particular.
        *Precondiciones:    La opción elegida por el usuario se encuentra dentro del dominio de dicho atributo.
        *Postcondiciones:   Ejecuta la opción acorde con lo que haya elegido el usuario.
        */
        void ejecutar_opcion();


        /*Descripción:      Este método se encarga de mostrarle el menú de opciones a realizar con la lista
                            al usuario a través de una interfaz gráfica rudimentaria.
        *Precondiciones:    -.
        *Postcondiciones:   Se imprime por pantalla el menú de opciones para la visualización del usuario.
        */
        void mostrar_menu();

        /*Descripción:  Realizará los métodos necesarios para poder agregar trabajadores a la
                        lista "lista_principal".
         *Pre: Máximo 10 trabajadores a ingresar..
         *Post: Queda actualizado la lista dinámico mencionado.
        */
        void cargar_nuevos_trabajadores_lista();

        /*Descripción:      Este método llama al método de lista principal que muestra el sueldo minimo y el sueldo maximo
                            entre todos los trabajadores
        *Precondiciones:    -.
        *Postcondiciones:   Se imprime por pantalla el legajo, el nombre y el sueldo de los trabajadores cuyos sueldos son el minimo
                            y el maximo
        */
        void mostrar_sueldo_minimo_y_maximo();

        /*Descripción: Busca el trabajador segun el legajo ingresado en la lista "lista_principal".
         *Pre: -.
         *Post: Devuelve un puntero al trabajador buscado y un puntero nulo si no encontró el trabajador.
        */
        Nodo* buscar_trabajador(int legajo_a_buscar);

    public:

        /*Constructor
        *Descripcion: Inicializa el atributo "opcion_usuario".
        *Pre:-.
        *Post: El atributo mencionado queda inicializado.
        */
        Menu();

        /*
        *Descripción: Inicia la interfaz del programa usando los métodos y clases necesarios para realizar la misma.
        *Pre: El archivo "trabajadores.txt" debe existir.
        *Post: Se muestra un menu mediante consola dando a elegir distintas opciones al usuario, el programa realizará las opciones del menú.
        */
        void iniciar_interfaz();   
};

#endif /*_MENU_H_*/