#include<stdio.h>
#include<conio.h> // getche için
#include <locale.h>


int soru_ekle(); //soru ekleme fonksiyon tanýmý
int menu();       // menu fonksiyonunun tanýmý
int secim;

char sorular[15];

int main(){
	//setlocale(LC_ALL, "Turkish");

	FILE* dosya;
	dosya = fopen("sorular.txt", "r");
	if (dosya == NULL) {
		puts("############################################################################################\n"
		 	 "# sorular.txt dosyasi bulunamadi.                                                          #\n"
		  	 "# sorular.txt dosyasina sahipseniz dosyayi programin bulundugu dizine kopyalabilirsiniz.   #\n"
			 "#                                                                                          #\n"
			 "# Devam etmek istemiyorsaniz:                                                              #\n"
			 "# ' H ' tusuna basarak programdan cikabilirsiniz.                                          #\n"
			 "#                                                                                          #\n"
			 "# Devam etmek icin herhangi bir tusa basiniz.                                              #\n"
			 "#                                                                                          #\n"
			 "# Devam ederseniz program kendisi 'sorular.txt' dosyasini olusturacaktir!!!                #\n"
		     "############################################################################################\n");

		char cevap = getch();

		switch (cevap) {
			case 'H':
				return 0;

			case 'h':
				return 0;

			default: {
				FILE* dosya;
				dosya = fopen("sorular.txt", "w");
				system("CLS");
			}
		}


	}



	menu(); // ekranda menu numaralarýný gosterir. Secilen menu numarasýný "int secim" deðiskenine aktarýr
	        // ve bu deðiþken main fonksiyonuna dondurulur. 

	switch (secim) {

	case '1': {
		system("CLS");
		soru_ekle();
	}
			  break;

	default:
		system("CLS");
		
		puts("#######################################\n"
			 "# Lutfen gecerli bir secim yapiniz!!! #\n"
		     "#######################################\n");
		main();
	}

	return 0;

} //main sonu

int menu(){//menu fonksiyonu

	

	printf("1. Soru ekle\n");
	printf("2. Soru sil\n");
	printf("3. Sorulari goster ve guncelle\n");
	printf("4. Oyun oyna\n");
	printf("5. En yuksek skorlari goster\n");
	printf("6. Cik\n");
	printf("seciminiz: ");
	secim = getche(); // char ve getche kullanmamým sebebi; int ve scanf ile alýnca entere basmak gerekiyor öyle olunca soru ekleme iþlemi yapamadan program sonlanýyo.

	return secim;

}

int soru_ekle() {

	FILE* dosya;
	dosya = fopen("sorular.txt", "a"); // sorular.txt adýnda belge oluþturur w: okuma ve yazma iþlemi yapýlabilir dosya
	printf("\n soru1:");
	char giris;
	while (1) {
		if ((giris = getchar()) == EOF) {  // soru giriþi alýyoruz
			fclose(dosya);	
			break;
			
		}
		else {
			fputc(giris, dosya);
			


		}
		break;
	}
	main();
}
	