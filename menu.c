#include<stdio.h>
#include<conio.h> // getche i�in


int soru_ekle(); //soru ekleme fonksiyon tan�m�
int menu();       // menu fonksiyonunun tan�m�
int secim;

char sorular[15];

int main()

{

	menu(); // menu i�in fonksiyon olu�turup burada �a��rd�k

	switch (secim)
	{
	case '1':
	{
		soru_ekle();

	}
	break;
	}




	return 0;
}

int menu()//menu fonksiyonu
{

	printf("1. Soru ekle\n");
	printf("2. Soru sil\n");
	printf("3. Sorulari goster ve guncelle\n");
	printf("4. Oyun oyna\n");
	printf("5. En yuksek skorlari goster\n");
	printf("6. Cik\n");
	printf("seciminiz: ");
	secim = getche(); // char ve getche kullanmam�m sebebi; int ve scanf ile al�nca entere basmak gerekiyor �yle olunca soru ekleme i�lemi yapamadan program sonlan�yo.

	return secim;

}
int soru_ekle()
{
	FILE* dosya; // dosya i�in
	dosya = fopen("sorular.txt", "w"); // sorular.txt ad�nda belge olu�turur w: okuma ve yazma i�lemi yap�labilir dosya
	printf("\n soru1:");
	gets(sorular); // soru giri�i al�yoruz

	fprintf(dosya, "%s", sorular);// dosyaya yaz�yor
	fclose(dosya);//dosyay� kapat�yor
	return 0;
}