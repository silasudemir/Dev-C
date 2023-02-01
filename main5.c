#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/* Karar Yapilari (if/else)
	Mod alma %
	Ve &&
	Veya ||
	*/
	
	/*
	int x;
	printf("Sayiyi Girin: ");
	scanf("%d",&x);
	if(x%5==0)
	{
		printf("Sayi 5'e tam bolunur");
	}
	else
	{
		printf("Sayi 5'e tam bolunmez");
	}
	*/
	/*
	int sayi;
	printf("Sayiyi girin: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 && sayi%5==0)
	{
		printf("Sayi 3 ve 5e tam bolunur");
	}
	else
	{
		printf("Sayi 3 ve 5e tam bolunmez");
	}
	*/
	
	/*
	int sayi;
	printf("Sayiyi girin: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 || sayi%5==0 || sayi%7==0)
	{
		printf("Sayi 3 veya 5e tam bolunur");
	}
	else
	{
		printf("Sayi 3 veya 5e tam bolunmez");
	}
	*/
	
	/* esit midir ==
	esit degil midir !=
	*/
	
	//Klavyeden girilen dereceye göre suyun durumunu yazdiran program
	
	printf("*******Suyun Durumu********\n\n");
	
	int su;
	
	printf("Sicaklik degerini giriniz");
	scanf("%d",&su);
	
	if(su<=0)
	{
		printf("Su buz halinde");
	}
	if(su>0 && su<100)
	{
		printf("Su sivi halde");
	}
	if(su>=100)
	{
		printf("Su buhar halinde");
	}
	
	
	
	return 0;
}
