int menu()//menu fonksiyonu
{

	printf("1. Soru ekle\n");
	printf("2. Soru sil\n");
	printf("3. Sorulari goster ve guncelle\n");
	printf("4. Oyun oyna\n");
	printf("5. En yuksek skorlari goster\n");
	printf("6. Cik\n");
	printf("seciminiz: ");
	int secim = getche(); // char ve getche kullanmam�m sebebi; int ve scanf ile al�nca entere basmak gerekiyor �yle olunca soru ekleme i�lemi yapamadan program sonlan�yo.

	return secim;

}