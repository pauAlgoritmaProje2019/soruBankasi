int soruEkle()
{
	FILE* dosya; // dosya i�in
	dosya = fopen("sorular.txt", "w"); // sorular.txt ad�nda belge olu�turur w: okuma ve yazma i�lemi yap�labilir dosya
	printf("\n soru1:");
	gets(sorular); // soru giri�i al�yoruz

	fprintf(dosya, "%s", sorular);// dosyaya yaz�yor
	fclose(dosya);//dosyay� kapat�yor

	return 0;
}