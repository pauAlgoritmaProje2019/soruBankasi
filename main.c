#include<stdio.h>
#include<conio.h> // getche için


int soru_ekle(); //soru ekleme fonksiyon tanýmý
int menu();       // menu fonksiyonunun tanýmý
int secim;

char sorular[15];

int main()

{

	menu(); // menu için fonksiyon oluþturup burada çaðýrdýk

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
	secim = getche(); // char ve getche kullanmamým sebebi; int ve scanf ile alýnca entere basmak gerekiyor öyle olunca soru ekleme iþlemi yapamadan program sonlanýyo.

	return secim;

}
int soru_ekle()
{
	FILE* dosya; // dosya için
	dosya = fopen("sorular.txt", "w"); // sorular.txt adýnda belge oluþturur w: okuma ve yazma iþlemi yapýlabilir dosya
	printf("\n soru1:");
	gets(sorular); // soru giriþi alýyoruz

	fprintf(dosya, "%s", sorular);// dosyaya yazýyor
	fclose(dosya);//dosyayý kapatýyor
	return 0;
}