//Librerias
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

//Funciones secundarias
void menu() {
    cout << "\n===== Tienda Virtual de VideoJuegos =====";
    cout << "\n  Instrucciones:\nPor favor ingrese el numero de la opcion que desea realizar.";
    cout << "\n\n1.  Agregar un producto al inventario";
    cout << "\n2.  Modificar un producto inventario";
    cout << "\n3.  Eliminar un Producto un producto";
    cout << "\n4.  Ver el inventario";
    cout << "\n5.  Limpiar pantalla";
    cout << "\n9.  Salir del sistema\n";
}

//Funcion principal
int main()
{
    setlocale(LC_ALL, "spanish");
    //Declaracion de variables
    int mainRunner = 0, opcion = 0, id_repeat = 0, count = 0;
    string opcionSegura = "n";

    string producto_mod;
    string id_producto[50], nombre_producto[50], lanzamiento_prod[50], caracteristicas_producto[50], clasificacion_producto[50], genero[50], descripcion_producto[50];
    string precio_unitario[50], impuesto_producto[50], precio_total_prod[50];
    cout << "Bienvenido a la tienda de Video Juegos Virtual!\n";

    //Iniciamos el sistema
    do {
        //El menu esta en el do-while para imprimirlo cada vez que deseamos hacer algo
        menu();
        cin >> opcion;

        //Una vez tenemos la operacion deseada usamos el switch para leer y ejecutar el codigo necesario
        switch (opcion) {
        case 1:
            //Agregar Productos al inventario
            if (id_producto[49] != "") { // preguntamos para ver si todavia tenemos espacio, puede fallar en muy pocos casos
                cout << "Se ha llegado al limite de productos que se pueden registrar\n";
                break;
            }
            for (int index = 0; index < 50; index++) {
                if (id_producto[index] == "") {
                    if (index > 9) {
                        id_producto[index] = "ART" + to_string(index + 1);
                    }
                    else {
                        id_producto[index] = "ART0" + to_string(index+1);
                    }
                    cout << "\nIngrese el nombre del Juego:\n";
                    cin.ignore();
                    getline(cin, nombre_producto[index]);
                    cout << "\nIngrese el ano de lanzamiento del Juego:\n";
                    getline(cin, lanzamiento_prod[index]);
                    cout << "\nIngrese las caractiristicas del Juego:\n";
                    getline(cin, caracteristicas_producto[index]);
                    cout << "\nIngrese la clasificacion del Juego:\n";
                    getline(cin, clasificacion_producto[index]);
                    cout << "\nIngrese el genero del Juego:\n";
                    getline(cin, genero[index]);
                    cout << "\nIngrese el descripcion del Juego:\n";
                    getline(cin, descripcion_producto[index]);
                    cout << "\nIngrese el precio unitario del Juego:\n";
                    getline(cin, precio_unitario[index]);
                    cout << "\nIngrese el impuesto(IVA) sobre Juego:\n";
                    getline(cin, impuesto_producto[index]);
                    cout << "\nIngrese el precio total del Juego:\n";
                    getline(cin, precio_total_prod[index]);

                    cout << "\nProducto guardado con exito!.." << endl;
                    break;
                }
            }
            
            break;
        case 2:
            //Modificar un producto inventario
            count = 0;
            cout << "\nIngrese el ID del producto que desea modificar: ";
            cin >> producto_mod;
            for (int index = 0; index < 50; index++) {
                if (producto_mod == id_producto[index]) {
                    cout << "\nIngrese el nombre del Juego:\n";
                    cin.ignore();
                    getline(cin, nombre_producto[index]);
                    cout << "\nIngrese el ano de lanzamiento del Juego:\n";
                    getline(cin, lanzamiento_prod[index]);
                    cout << "\nIngrese las caractiristicas del Juego:\n";
                    getline(cin, caracteristicas_producto[index]);
                    cout << "\nIngrese la clasificacion del Juego:\n";
                    getline(cin, clasificacion_producto[index]);
                    cout << "\nIngrese el genero del Juego:\n";
                    getline(cin, genero[index]);
                    cout << "\nIngrese el descripcion del Juego:\n";
                    getline(cin, descripcion_producto[index]);
                    cout << "\nIngrese el precio unitario del Juego:\n";
                    getline(cin, precio_unitario[index]);
                    cout << "\nIngrese el impuesto(IVA) sobre Juego:\n";
                    getline(cin, impuesto_producto[index]);
                    cout << "\nIngrese el precio total del Juego:\n";
                    getline(cin, precio_total_prod[index]);

                    cout << "\nProducto modificado con exito!\n";
                }
                else {
                    count++;
                    if (count == 50) {
                        cout << "\nNo se encontro el producto que desea modificar\n";
                    }
                }
            }
            break;
        case 3:
            //Eliminar un Producto un producto
            count = 0;
            cout << "\nIngrese el ID del producto que desea eliminar: ";
            cin >> producto_mod;
            for (int index = 0; index < 50; index++) {
                if (producto_mod == id_producto[index]) {
                    id_producto[index] = "";
                }
                else {
                    count++;
                    if (count == 50) {
                        cout << "\nNo se encontro el producto que desea eliminar\n";
                    }
                }
            }
            break;
        case 4:
            //Ver el inventario
            for (int index = 0; index < 50; index++) {
                if (id_producto[index] != "") {
                    cout << "\nID del Juego:       " + id_producto[index];
                    cout << "\nNombre del Juego:   " + nombre_producto[index];
                    cout << "\nAno de lanzamiento: " + lanzamiento_prod[index];
                    cout << "\nCaracteristicas:    " + caracteristicas_producto[index];
                    cout << "\nClasificacion:      " + clasificacion_producto[index];
                    cout << "\nGenero:             " + genero[index];
                    cout << "\nDescripcion:        " + descripcion_producto[index];
                    cout << "\nPrecio unitario:    " + precio_unitario[index];
                    cout << "\nIVA del Juego:      " + impuesto_producto[index];
                    cout << "\nPrecio Total:       " + precio_total_prod[index] << endl;
                }
            }
            break;
        case 5:
            //Limpiar pantalla
            system("cls");
            system("pause");
            break;
        case 9:
            //Salir del sistema
            do {
                //Hacemos una confirmacion de si desea salir del sistema
                cout << "\nEsta seguro que desea salir? y/n \n";
                cin >> opcionSegura;
                //Validamos la respuesta para asegurarnos que sea y/n
            } while (opcionSegura != "y" && opcionSegura != "n");
            if (opcionSegura == "y") {
                //Aunmentamos el contador y salimos del sistema
                mainRunner++;
            }
            else {
                //Limpiar pantalla
                system("cls");
                system("pause");
            }
            break;
        }
    } while (mainRunner == 0);
}
