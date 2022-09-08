#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion;
    float precio_unitario;
    string articulo, consola ,  genero , clasificacion   ;

    cout << "\t ***TIENDA DE VIDEOJUEGOS*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> numarticulo;

        cout << "ingrese el nombre del articulo\n";
        cin.ignore();
        getline(cin, articulo); 

        cout << "ingrese el descripcion del articulo\n";
        cin.ignore();

        getline(cin, consola);
        cout << "ingrese la categoria del articulo\n";
        cin.ignore();

        etline(cin, genero );
        cout << "ingrese la categoria del articulo\n";
        cin.ignore();

        etline(cin, clasificacion );
        cout << "ingrese la categoria del articulo\n";
        cin.ignore();

        getline(cin, precio_unitario );
        cout << "ingrese el precio unitario del articulo\n";
        cin >> precio_unitario;
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }

}




