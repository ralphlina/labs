// Ralph Lina
// Comp 162

#include <stdio.h>

int main()
{
	printf("Enter a number greater than 1 or '0' to end.\n");
	//int input, count2=0, count3=0, count5=0, count7=0, count11=0, count13=0;

	int input, rem, factor, count=0;

	printf("N: ");
	scanf("%d" , &input);

	if (input != 0)
	{
		while (input < 2)
		{
			printf("N: ");
			scanf("%d" , &input);
		}

// checks if input is only 2 since it cannot enter the for loop
		if (input == 2)
		{
			printf("%d^1", input );
			input = input/2;
		}

		for (factor = 2 ; factor < input ; factor++)
		{
			while (input % factor == 0)
			{
				input = input/factor;
				count += 1;
			}
			if (count > 0)
			{
				printf("%d^%d " ,factor , count );
				count = 0;
			}
			
// checks to see if input is same as factor since it will exit for loop
			if (input == factor+1)
			{
				printf("%d^1", input);
				input = input/factor;
			}
		}	
	}

/*
		while (input != 1)
		{
			rem = 0;
			factor += 1;
			while (rem != 0)
			{
				rem = input%factor;
				input = input/factor;
				count +=1;
			}
			printf("%d\n" , input);

		}


*/

/*

	// checking to end if it is 0
	if (input != 0)
	{
		while (input < 2)
		{
			printf("N: ");
			scanf("%d" , &input);
		}

	// checking for 2
		while (input%2 == 0 )
		{
			input = input/2;
			count2 = count2+1;
		}
		if (count2 > 0)
		{
			printf("2^%d", count2);
		}

	// checking for 3
		while (input%3 == 0 )
		{
			input = input/3;
			count3 = count3+1;
		}
		if (count3 > 0)
		{
			if (count2 > 0)
			{
				printf(" * ");
			}
			printf("3^%d", count3);
		}	

	// checking for 5
		while (input%5 == 0 )
		{
			input = input/5;
			count5 = count5+1;
		}
		if (count5 > 0)
		{
			if (count2 > 0 || count3 > 0)
			{
				printf(" * ");
			}
			printf("5^%d", count5);
		}	

	// checking for 7
		while (input%7 == 0 )
		{
			input = input/7;
			count7 = count7+1;
		}
		if (count7 > 0)
		{
			if (count2 > 0 || count3 > 0 || count5 > 0)
			{
				printf(" * ");
			}
			printf("7^%d", count7);
		}	

	// checking for 11
		while (input%11 == 0 )
		{
			input = input/11;
			count11 = count11+1;
		}
		if (count11 > 0)
		{
			if (count2 > 0 || count3 > 0 || count5 > 0 || count7 > 0)
			{
				printf(" * ");
			}
			printf("11^%d", count11);
		}	

	// checking for 13
		while (input%13 == 0 )
		{
			input = input/13;
			count13 = count13+1;
		}
		if (count13 > 0)
		{
			if (count2 > 0 || count3 > 0 || count5 > 0 || count7 > 0 || count11 > 0)
			{
				printf(" * ");
			}
			printf("13^%d", count13);
		}	
	}
*/
	printf("\n");
	return 0;
}