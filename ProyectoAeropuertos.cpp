// ProyectoAeropuertos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

/*
Si al ejecutar por consola se recibe :
-Un argumento---- > los nombres de los archivos seran "archivoAeropuertos.txt" y
"archivoVuelos.txt"
- Dos argumentos-- > los nombres de los archivos seran el segundo argumento para
los aeropuertos y "archivoVuelos.txt"
- Tres argumentos->los nombres de los archivos seran el segundo argumento para
los aeropuertos y el tercer argumento para los vuelos
*/

#include <iostream>
#include "include/Menu.h"
#include <string.h>

using std::string;

const int AEROPUERTOS_TXT = 2;
const int AEROPUERTO_Y_VUELOS_TXT = 3;

int main(int argc, char* argv[]) {

	string archAeropuertos = "res/archivoAeropuertos.txt";
	string archVuelos = "res/archivoVuelos.txt";

	switch (argc) {
	case AEROPUERTOS_TXT:
		archAeropuertos = argv[1];
		break;
	case AEROPUERTO_Y_VUELOS_TXT:
		archAeropuertos = argv[1];
		archVuelos = argv[2];
		break;
	}

	Menu menu(archAeropuertos, archVuelos);
	menu.mostrarOpciones();

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
