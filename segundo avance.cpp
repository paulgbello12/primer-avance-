#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>


using namespace std;


struct empresa
{
	
	int idcontrato, numoc;
	string proveedor, juego, clasificacion, genero, descuento, plataforma;

	float subtotal, iva, total;
};



int main()
{
	empresa compras[3];
	int opcion, busqueda;

	do
	{
		printf("\t ***TIENDA DE VIDEOJUEGOS*** \n");
		printf(" 1.-Agregar articulo \n 2.-Lista \n 3.-Eliminar \n 4.-Limpiar \n 5.-Salir \n");
		scanf_s("%d", &opcion);

		switch (opcion)
		{

		case 1:
			//capturar y guardar los datos por posicion
			for (int i = 0; i < 3; i++)
			{
				compras[i].idcontrato = 000 + i;
				printf("ID PROVEEDOR: %d \n", compras[i].idcontrato);
				int salida=1;
				
				do
				{
					printf("ingrese el num oc \n");
					scanf_s("%d", &compras[i].numoc);
				} while (compras[i].numoc == compras[i - 1].numoc || compras[i].numoc == compras[i - 2].numoc);
					
					
					//proveedor 
				printf("ingrese el proveedor \n");
				cin.ignore();
				getline(cin, compras[i].proveedor);
				
				printf("ingrese nombre del juego \n");
				scanf_s("%s", &compras[i].juego);

				printf("ingrese clasificacion \n");
				scanf_s("%s", &compras[i].clasificacion);

				printf("ingrese genero \n");
				scanf_s("%s", &compras[i].genero);

				printf("ingrese plataforma \n");
				scanf_s("%s", &compras[i].plataforma);

				printf("ingrese descuento \n");
				scanf_s("%f", &compras[i].descuento);



				printf("ingrese el subtotal \n");
				scanf_s("%f", &compras[i].subtotal);

				compras[i].iva = compras[i].subtotal * .16;
				compras[i].total = compras[i].subtotal + compras[i].iva;
				//compras[i].total =compras[i].subtotal*1.16;
			}
			break;

		case 2: //lista
			int opc2;
			printf("1.- num OC \n 2.-Listas Vigentes");
			scanf_s("%d", &opc2);
			if (opc2 == 1)
			{
				printf("ingrese el num oc");
				scanf_s("%d", &busqueda);

				//imprimir los datos por posicion 
				for (int i = 0; i < 3; i++)
				{
					if (busqueda == compras[i].numoc)
					{
						printf("ID PROVEEDOR: %d \n", compras[i].idcontrato);
						printf("num OC: %d \n", compras[i].numoc);
						//proveedor
						printf("proveedor %s", compras[i].proveedor.c_str());
						printf("juego %s", compras[i].juego.c_str());
						printf("clasificacion %s", compras[i].clasificacion.c_str());
						printf("genero %s", compras[i].genero.c_str());
						printf("plataforma %s", compras[i].plstaforma.c_str());
						printf("descuento %f", compras[i].descuento.c_str());
						printf("subtotal: %f \n", compras[i].subtotal);
						printf("iva: %f \n", compras[i].iva);
						printf("total: %f \n", compras[i].total);
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					if (compras[i].numoc !=0)
					{
						printf("ID CONTRATO: %d \n", compras[i].idcontrato);
						printf("num OC: %d \n", compras[i].numoc);
						//proveedor
						printf("proveedor %s", compras[i].proveedor.c_str());
						printf("subtotal: %f \n", compras[i].subtotal);
						printf("iva: %f \n", compras[i].iva);
						printf("total: %f \n", compras[i].total);
					}
				}
			}
			break;

		case 3:// no hara nada
			printf("ingrese el num oc");
			scanf_s("%d", &busqueda);

			//imprimir los datos por posicion 
			for (int i = 0; i < 3; i++)
			{
				if (busqueda == compras[i].numoc)
				{
					compras[i].numoc = 0;
				}
			}
			break;

		case 4:
			system("cls");
			break;
		case 5:
			printf("saliendo... \n");
			break;
		default:
			printf("intente denuevo... \n");
			break;
		}
	} while (opcion != 5);
	system("pause");
}