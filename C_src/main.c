// Nima Shafie
#include "Bankers_Algorithm.h"
#include "Lab_Disk_Scheduling.h"
#include "Batch-Process-Scheduling.h"
#include "Memory_Allocation.h"
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
			"\n2. Disk Scheduling"
			"\n3. Batch Process Scheduling"
			"\n4. Memory Allocation"
			"\n5. Exit program\n\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			bankersMain();
			break;
		case 2:
			diskSchedulingMain();
			break;
		case 3:
			batchProcessMain();
			break;
		case 4:
			memoryAllocationMain();
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