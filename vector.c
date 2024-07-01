#include "vector.h"

int main(){
	
	int operation;
	int capacity;
	Vector obj;
	Vector *vector = &obj;

	int pos;
	int elem;
	int value;
	while(1){
		printf("Enter the activity's number.\n");
		printf("1. Initialization\n"); 
		printf("2. One of the elements\n");
		printf("3. Is empty arrey?\n");
		printf("4. Push element from back\n");
		printf("5. Pop element from back\n");
		printf("6. Get the size of arrey\n");
		printf("7. Get capacity of arrey\n");
		printf("8. Insert element fixed index\n");
		printf("9. Print all elements\n");
		printf("10.Exit\n");
		scanf("%d", &operation);
		switch(operation){
			case 1:
				printf("Enter the capacity: ");
				scanf("%d", &capacity);
				initializeVector(vector, capacity);
				printf("Initializetion successfully done.\n");
				break;

			case 2:
				printf("Enter the index, that's value want to get: ");
				scanf("%d", &pos);
				printf("In %d position have %d value.\n", pos, at(vector, pos));
				break;

			case 3:
				if(empty(vector)){
					printf("Arrey is empty.\n");
				}
				else{
					printf("The arrey isn't empty.\n");
				}
				break;

			case 4:
				printf("Enter the element that want to add arrey from back: ");
				scanf("%d", &elem);
				push_back(vector, elem);
				printf("Element added successfully.\n");
				break;

			case 5:
				pop_back(vector);
				printf("Last element removed successfully.\n");
				break;

			case 6:
				printf("The arrey has %d elements.\n", getSize(vector));
				break;

			case 7:
				printf("The arreys capacity: %d\n", getCapacity(vector));				
				break;

			case 8:
				printf("Enter the position: ");
				scanf("%d", &pos);
				printf("Enter the value: ");
				scanf("%d", &value);
				insert(vector, pos, value);
				printf("The element inserted successfully.\n");
				break;

			case 9:
				print_arr(vector);
				break;

			case 10:
				exit(0);
			default:
				printf("Invalid choice.\n");

		}
		
	}
	return 0;
}

