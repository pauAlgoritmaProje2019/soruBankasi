int soruEkle()
{
	FILE* dosya; // dosya için
	dosya = fopen("sorular.txt", "w"); // sorular.txt adýnda belge oluþturur w: okuma ve yazma iþlemi yapýlabilir dosya
	printf("\n soru1:");
	gets(sorular); // soru giriþi alýyoruz

	fprintf(dosya, "%s", sorular);// dosyaya yazýyor
	fclose(dosya);//dosyayý kapatýyor

	return 0;
}