#include <stdio.h>
#include <stdlib.h>

#include "Calc.h"

int main() {
	int y, second_operand;
	char key;
	int a;

	do {
		system("CLS");

		printf("%d\n", y);

		printf("Select operation\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Divide\n");
		printf("5. Exponentation\n");
		printf("ESC. Exit\n");
		scanf("%d", &a);

		key = a;

		switch (key) {
		case '1':
			printf("Enter addend: ");
			scanf("%d", &second_operand);
			y = addition(y, second_operand);
			break;
		case '2':
			printf("Enter subtractor: ");
			scanf("%d", &second_operand);
			y = subtraction(y, second_operand);
			break;
		case '3':
			printf("Enter multiplier: ");
			scanf("%d", &second_operand);
			y = multiplication(y, second_operand);
			break;
		case '4':
			printf("Enter divide: ");
			scanf("%d", &second_operand);
			y = divide(y, second_operand);
			break;
		case '5':
			printf("Enter exponent: ");
			scanf("%d", &second_operand);
			y = exponentation(y, second_operand);
			break;
		}

	} while (key != 27);

	return 0;
}
