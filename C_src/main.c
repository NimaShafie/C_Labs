// Nima Shafie
#include "Bankers_Algorithm.h"
//#include "Hot_Potato.h"
//#include "Stack_Warehouse.h"
//#include "Recursion.h"
//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int choice = 1;
	printf("Initiating Lab Projects Now\n\n");
	while (choice != 5) {
		printf("\nPlease select a lab to interact with\n"
			"\n1. Banker's Algorithm"
			"\n2. .."
			"\n3. .."
			"\n4. .."
			"\n5. Exit program\n\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			bankersMain();
			break;
		case 2:
			//hotPotatoMain();
			break;
		case 3:
			//stackWarehouseMain();
			break;
		case 4:
			//recursionMain();
			break;
		case 5:
			printf("\nQuitting program.\n");
			break;
		default:
			printf("\nInvalid choice, select again.\n");
		}
	}
	printf("\nProgram ended successfully.\n");
	return 0;
}