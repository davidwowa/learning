/*Currency conversion*/
#include <stdio.h>

main()


{

int sel;
float usDollar;
float newVal;
float foreign;

	printf ("What currency would you like to use?\n1 German Marks\n2 French Francs\n3 British Pounds\n4 Chinese Yen\n5 Italian Lira\n\nEnter currency option  ");
	scanf ("%d", &sel);
	
	if (sel == 1) 
		foreign = .25;
	else
		if (sel == 2)
		foreign = .5;
	else
		if (sel == 3)
		foreign = .75;
	else
		if (sel == 4)
		foreign = 1.25;
	else
		if (sel == 5)
		foreign = 1.5;
	else
		if (sel >5)
		printf (" INVALID SELECTION");
	printf ("\nWhat US Dollar would you like to convert? ");
	scanf ("%f", &usDollar);
	newVal = usDollar * foreign;
	printf ("\nYou selected a conversion which is at the rate of %f per US Dollar and entered $%f and the resulting value is %f", foreign, usDollar, newVal);
	getchar();
}
