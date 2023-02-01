#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	& kullanimi
	*******
	Pricing in the cinema is as follows;
	Popcorn: 25 TL
	Tin drinks: 18tl
	Water: 5tl
	Ticket: 60tl
	
	*/
	int popcorn,tindrinks,water,ticket,total;
	
	printf("Popcorn quantity: ");
	scanf("%d",&popcorn);
	
	printf("Tindrinks quantity: ");
	scanf("%d",&tindrinks);
	
	printf("Water: ");
	scanf("%d",&water);
	
	printf("Ticket(s): ");
	scanf("%d",&ticket);
	
	total=popcorn*25+tindrinks*18+water*5+ticket*60;
	printf("Total amount: %d",total);
	
	
	
	
	
	
	
	
	return 0;
}
