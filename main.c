#include<stdio.h>
#include<conio.h> // getche i�in


int soru_ekle(void); //soru ekleme fonksiyon tan�m�
int menu();       // menu fonksiyonunun tan�m�


char secim;
char sorular[15];


int main(){

	menu(); // menu i�in fonksiyon olu�turup burada �a��rd�k

	switch (secim){

		case '1': soru_ekle();
		
		break;
	}




	return 0;
}


