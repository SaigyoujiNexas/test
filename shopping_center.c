#include <stdio.h>
#define P_ARTICHOKE 2.05
#define P_BEET 1.15
#define P_CARROT 1.09

int main(void)
{
	float discount = 1;
	float artichoke = 0;
	float beet = 0;
	float carrot = 0;
	float input;
	char ch;
	float price = 0;
	printf("**************************************************************\n");
	printf("welcome to buy some vergetables!\n");
	printf("'a': buy artichoke\t\t'b': buy beet\t\n'c': buy carrot\t\t'q': complete this shopping\n");
	printf("**************************************************************\n");
	while ((ch = getchar()) != 'q')
	{
		switch (ch)
		{
		case'a':
			printf("please enter how pounds artichoke that you want to buy:");
			scanf("%f", &input);
			getchar();
			artichoke += input; 
			printf("Now you ordered %.2f pounds artichoke.\n", artichoke); break;
		case 'b':
			printf("please enter how pounds beet do you want to buy:");
			scanf("%f", &input);
			getchar();
			beet += input;
			printf("Now you ordered %.2f pounds beet.\n", beet); break;
		case 'c':
			printf("please enter how pounds carrot do you want to buy:");
			scanf("%f", &input);
			getchar();
			carrot += input;
			printf("Now you ordered %.2f pounds carrot.\n", carrot); break;
		default:
			printf("you entered wrong order, please enter right word:");
		}
	}
	price = artichoke * P_ARTICHOKE + beet * P_BEET + carrot * P_CARROT;
	if (price > 100)
		discount = 0.95;
	input = artichoke + beet + carrot;
	if (input <= 5)
		input = 6.5;
	else if (input > 20)
		input = (input - 40) * 0.5 + 14;
	else
		input = 14;
	printf("artichoke\t\tbeet\t\tcarrot\t\n");
	printf("%.2fper pound\t\t%.2fper pound\t\t%.2fper pound\t\n", P_ARTICHOKE, P_BEET, P_CARROT);
	printf("%.1f pounds\t\t%.1f pounds\t\t%.1f pounds\t\n", artichoke, beet, carrot);
	printf("%.2f dollers\t\t%.2f dollers\t\t%.2f dollers\t\n", artichoke*P_ARTICHOKE, beet*P_BEET, carrot*P_CARROT);
	printf("discount:%.2f\nshipping&packaging fee: %.1f dollers\n", discount, input);
	printf("you need paid: %.2f", price * discount + input);
	return 0;
}



