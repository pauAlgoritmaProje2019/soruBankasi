#include<stdio.h>
#include<conio.h> // getche için


int soru_ekle(void); //soru ekleme fonksiyon tanýmý
int menu();       // menu fonksiyonunun tanýmý


char secim;
char sorular[15];


int main(){

	menu(); // menu için fonksiyon oluþturup burada çaðýrdýk

	switch (secim){

		case '1': soru_ekle();
		
		break;
	}




	return 0;
}


