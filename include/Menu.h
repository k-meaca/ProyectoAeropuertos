#ifndef PROYECTOAEROPUERTOS_MENU_H
#define PROYECTOAEROPUERTOS_MENU_H

#include "MenuAeropuerto.h"
#include "MenuVuelo.h"
#include <string.h>

class Menu {
private:
    char opcion;
    MenuAeropuerto menuAeropuerto;
    MenuVuelo menuVuelo;

public:
    //DESCRIPCION: Constructor del Menu
    //PRE: Recibe la ruta de los archivos aeropuertos y vuelos
    //POST: Crea el ABB y el grafo y llama a los metodos necesarios para completarlos con los archivos.
    Menu(const string& rutaArchAeropuertos, const string& rutaArchVuelos);

    //DESCRIPCION: Destructor del Menu
    //PRE: -
    //POST: Llama a liberarRecursos de los menuAeropuertos y menuVuelos
    ~Menu();

    //DESCRIPCION: Muestra las opciones del Menu
    //PRE: -
    //POST: Muestra las opciones del Menu y llama al metodo selectorOpcion()
    void mostrarOpciones();

    //DESCRIPCION: Selector de las opciones del Menu
    //PRE: -
    //POST: Pide el ingreso de una opcion y abre el submenu correspondiente.
    //      Si la opcion ingresada es distinta de SALIR llama al metodo mostrarOpciones().
    void selectorOpcion();
};

#endif //PROYECTOAEROPUERTOS_MENU_H
