#include <stdio.h>
#define BASIC1 8.75f
#define BASIC2 9.33fhttps://github.com/Saigyoujinexas/test
#define BASIC3 10.00f
#define BASIC4 11.20f
#define TAX1 0.15f
#define TAX2 0.2f
#define TAX3 0.25f
#define LIMIT1 45
#define LIMIT2 30
int main(void)
{
	long int time;
	int rank;
	double salary, tax, nim;
	printf("***********************************************************************\n");
	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr\t\t\t2) $9.33/hr\n3) $10.00/hr\t\t\t4) $11.20/hr\n5) quit\n");
	printf("***********************************************************************\n");
	scanf("%d", &rank);
	while (rank != 5)
	{
		getchar();
		double type;
		while (rank < 1 || rank > 5)
		{
			printf("you enterd wrong number, please input one to five:");
			scanf("%d", &rank);
		}
		switch (rank)
		{
		case 1:
			type = BASIC1; break;
		case 2:
			type = BASIC2; break;
		case 3:
			type = BASIC3; break;
		case 4:
			type = BASIC4; break;
		}
		printf("Please enter your work time(hour):");
		scanf("%ld", &time);
		if (time < 40)
			salary = type * time;
		else
			salary = 40 * type + (time - 40) * 1.5 * type;
		if (salary < 300)
			tax = TAX1 * salary;
		else if (salary > 300 && salary < 450)
			tax = LIMIT1 + TAX2 * (salary - 300);
		else
			tax = LIMIT2 + TAX3 * (salary - 450);
		nim = salary - tax;
		printf("salary\t\t\ttax\t\t\tnet income\n%.2lf\t\t\t%.2lf\t\t\t%.2lf\n", salary, tax, nim);
		printf("please enter other income level(5 to quit):");
		scanf("%d", &rank);
	}
	printf("Bye.︿(￣︶￣)︿\n");
	return 0;
