#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Yob, CY, Age;

	printf("Enter your year of birth:");
	scanf("%d", &Yob);

	printf("Enter current year:");
	scanf("%d", &CY);

	Age = CY - Yob;

	printf("Entered year of birth:%d\n", Yob);
	printf("Entered current year:%d\n", CY);
	printf("You are %d years old\n", Age);

	if (Age >= 18) {
		printf("You are an adult\n");
	}
	else {
		printf("You are a minor\n");
	}

	switch (Age / 10) {

	case 0:
		printf("you are less than 10 years old\n");
		break;

	case 1:
		printf("you are in your teens\n");
		break;

	case 2:
		printf("you are in your twenties\n");
		break;
	case 3:
		printf("you are in your thirties\n");
		break;
	case 4:
		printf("you are in your forties\n");
		break;
	case 5:
		printf("you are in your fifties\n");
		break;
	case 6:
		printf("you are in your sixties\n");
		break;
	case 7:
		printf("you are in your seventies\n");
		break;
	case 8:
		printf("you are in your eighties\n");
		break;
	case 9:
		printf("you are in your nineties\n");
		break;
	default:
		printf("you are over 100 years old\n");
		break;

	}

	return 0;
}