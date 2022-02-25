/*
	Nama :	Rahul Stepen Sinaga  ( Proyek Kamus terjemahan Indonesia Batak )
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "HEADER.h"


int main()
{
	int pilihan;
	BahasaHata *ptrIndo = (BahasaHata *)malloc(sizeof(BahasaHata));
	BahasaHata *ptrBatak = (BahasaHata *)malloc(sizeof(BahasaHata));
	BahasaHata *ptrIndoBatak = (BahasaHata *)malloc(sizeof(BahasaHata));
	while (1 == 1)
	{
		printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n");
		printf("[1]. Menampilkan semua Terjemahan Indonesia ke Batak!\n");
		printf("[2]. Menampilkan semua Terjemahan Batak ke Indonesia!\n");
		printf("[3]. Menerjemahkan Indonesia ke Batak!\n");
		printf("[4]. Menerjemahkan Batak ke Indonesia!\n");
		printf("[5]. Menerjemahkan Indonesia ke Batak dan disimpan di indonesia_ke_batak.txt!\n");
		printf("[6]. Menerjemahkan Batak ke Indonesia dan disimpan di batak_ke_indonesia.txt!\n");
		printf("[7]. Bersihkan Layar!\n");
		printf("[8]. Keluar!\n");
		printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n");
		printf("Masukkan Pilihan : ");
		scanf("%d", &pilihan);
		if(pilihan == 1)
		{
			CetakSemuaIndonesiakeBatak(ptrIndo, ptrBatak);
		}
		else if(pilihan == 2)
		{
			CetakSemuaBatakkeIndonesia(ptrBatak, ptrIndo);
		}
		else if(pilihan == 3)
		{
			TerjemahkanKataIndonesiakeBatak(ptrIndo, ptrBatak);
		}
		else if(pilihan == 4)
		{
			TerjemahkanKataBatakkeIndonesia(ptrBatak, ptrIndo);
		}
		else if(pilihan == 5)
		{
			TerjemahkanIndonesiakeBatakdiTXT(ptrIndo, ptrBatak, ptrIndoBatak);
		}
		else if(pilihan == 6)
		{
			TerjemahkanBatakkeIndonesiadiTXT(ptrBatak, ptrIndo, ptrIndoBatak);
		}
		else if(pilihan == 7)
		{
			system("cls");
		}
		else if(pilihan == 8)
		{
			system("PAUSE");
			exit(0);
		}
	}
	return 0;
}
