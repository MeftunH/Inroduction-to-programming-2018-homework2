/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:2
**				ÖÐRENCÝ ADI...............:MAFTUN HASHIMLI
**				ÖÐRENCÝ NUMARASI.:G181210554
**				DERS GRUBU…………:B
****************************************************************************/




#include <iostream>
#include <conio.h> //KUTUPHANELER
#include <cstdlib>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{//KOD HER CALISTIGINDA FARKLI HARF VERMESI ICIN SRAND FONKSIYONU
	srand(time(NULL));
	//RASTGELE MATRISI OLUSTURUYORUZ
	char rastgele_matris[5][10];
	//SATIRLARI KONTROL EDEN FOR
	for (int satýr = 0; satýr < 5; satýr++)
	{//SUTUNLARI KONTOL EDEN FOR
		for (int sutun= 0; sutun < 10; sutun++)
		{//MATRISIN ICINI RANDOM DOLDURMAK ICIN ASCII TABLOSUNDAN BUYUK VE KUCUK HARFLER
			char a = rand() % 26 + 65 + (rand() % 2) * 32;
			rastgele_matris[satýr][sutun] = a;
			cout << a << "\t";
		}
		cout << endl;
	}

	cout << endl;

	//SIMDI SATIR VE SUTUN OLARAK GEZIP BUBBLE SORT UYGULACAGIZ
	//MATRISDEKI SATIR VE SUTUNLARI TANIMLADIK
	for (int satýr = 0; satýr < 5; satýr++)
	{//SUTUN TANIMLADIK
		for (int sutun= 0; sutun < 10; sutun++)
		{//SONRA GECICI OLARAK NITELENDIRDIGIMIZ K VE L KULLANICAZ TARAMA ICIN
			for (int k = sutun; k < 10; k++)
			{//SATIR TARIYORUZ
				for (int l = satýr; l < 5; l++)
					//SONRA BUBBLE SORT GEREGI KUCUK OLAN BUYUKLE YERDEGISECEK BUNU YAPIYORUZ
					if (rastgele_matris[satýr][sutun] > rastgele_matris[l][k])
					{//GECICI MATRISLE RASTGELE MATRISI KARSILASTIRIYORUZ
						char ptr = rastgele_matris[satýr][sutun];
						rastgele_matris[satýr][sutun] = rastgele_matris[l][k];
						rastgele_matris[l][k] = ptr;
					}
			}
		}
	}//YENI OLUSAN MATRISI YAZDIRIYORUZ
	for (int satýr = 0; satýr < 5; satýr++)
	{
		for (int sutun = 0; sutun < 10; sutun++)
		{

			cout << rastgele_matris[satýr][sutun] << "\t";

		}
		cout << endl;
	}
	system("pause");
	return 0;
}







