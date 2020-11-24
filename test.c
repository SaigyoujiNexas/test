#include <stdio.h>
#define P_ARTICHOKE 2.05
#define P_BEET 1.15
#define P_CARROT 1.09
                                               
int main(void)
{
	int artichoke = 0;
	int beet = 0;
	int carrot = 0;
	int input;
	char ch;
	float price = 0;
	while((ch = getchar()) != 'q')
	{
		switch((ch = getchar()))
		case'a':
		{
			printf("please enter how pounds artichoke that you want to buy:");
			scanf("%d", &input);
			artichoke += input;break;
		}
		case'b':
		{
			printf("please enter how pounds beet do you want to buy:");
			scanf("%d", &input);
			beet += input;break;
		}
		case'c':
		{
			printf("please enter how pounds carrot do you want to buy:");
			scanf("%d", &input);
			carrot += input;break;
		}
		default:
		{
			printf("you entered wrong order, please enter right word:");
		}
	}
	price = artichoke * P_ARTICHOKE + beet * P_BEET + carrot * P_CARROT;
	if (input > 100)
		price *= 0.95;
	input = artichoke + beet + carrot;
	if (input <= 5)
		price += 6.5;
	else if (input > 20)
		price = price + 14 + (input - 20) * 0.5;
	else
		price += 14;
		
		
		


}


