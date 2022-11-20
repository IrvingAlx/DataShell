/**
 * @file main.c
 * @author Irving Vega, Emilio Roman, Jose Pablo
 * @date 27/09/2021
 */

#include "../libs/def.h"
#include "../src/functions.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char mainMenuOption;
	int tableTotalValues, i;
	sizeData sizeOfTable;

	sizeOfTable = readTable();
	tableTotalValues = sizeOfTable.row * sizeOfTable.column;
	tableData content[tableTotalValues];

	while (mainMenuOption != 'e') {
		mainMenuOption = mainMenu();

		switch (mainMenuOption) {
		case 'r':
			system("clear");
			printf(
				"Cantidad de columnas dentro del archivo = %d\nCantidad de "
				"Filas en el archivo = %d\n\n",
				sizeOfTable.column,
				sizeOfTable.row);
			pause();
			break;

		case 'p':
			system("clear");
			*content = printTable(sizeOfTable, content, tableTotalValues);
			pause();
			break;

		case 'a':
			system("clear");
			alterTable(sizeOfTable, content, tableTotalValues);
			pause();
			break;
		case 's':
			printf("PlaceHolder\n\n");
			break;

		case 'e':
			system("clear");
			printf("Hasta pronto! (._.)/\n\n");
			break;

		default:
			printf("Opcion invalida...\n\n");
			break;
		}
	}
	return 0;
}