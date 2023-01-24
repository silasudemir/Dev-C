#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	char Ad[10],Soyad[10],Yas[2],Sehir[12],Meslek[10],Medenidurum[5];
	
	printf("Adiniz: ");
	scanf("%s",Ad);
	
	printf("Soyadiniz: ");
	scanf("%s",Soyad);
	
	printf("Yasiniz: ");
	scanf("%s",Yas);
	
	printf("Sehriniz: ");
	scanf("%s",Sehir);
	
	printf("Mesleginiz: ");
	scanf("%s",Meslek);
	
	printf("Medeni durumunuz: ");
	scanf("%s",Medenidurum);
	
	printf("\n");
	
	printf("Adi: %s - Soyadi: %s",Ad,Soyad);
	printf("\n");
	printf("Yasi: %s",Yas);
	printf("\n");
	printf("Sehri: %s",Sehir);
	printf("\n");
	printf("Meslegi: %s",Meslek);
	printf("\n");
	printf("Medeni durumu: %s",Medenidurum);
	

	return 0;
	
}
