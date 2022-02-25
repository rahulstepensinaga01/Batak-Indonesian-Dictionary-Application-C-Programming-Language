/*
	Nama :	Rahul Stepen Sinaga  ( Proyek Kamus terjemahan Indonesia Batak )
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "HEADER.h"

void CetakSemuaIndonesiakeBatak(BahasaHata *ptrIndo, BahasaHata *ptrBatak)
{
	int loop;
	char pemisah[]="\n";
	ptrIndo->textindo = fopen("kata_indonesia.txt", "r");
	ptrBatak->textbatak = fopen("kata_batak.txt", "r");
	printf("Kamus Indonesia ke Batak!\n\n");
	while(!feof(ptrIndo->textindo) && !feof(ptrBatak->textbatak))
	{
		fgets(max[loop].bahasaindonesia, 999999999, ptrIndo->textindo);
		fgets(max[loop].bahasabatak,999999999, ptrBatak->textbatak);
		strtok(max[loop].bahasaindonesia, pemisah);
		printf("%s => %s", max[loop].bahasaindonesia, max[loop].bahasabatak);
	}
	printf("\n\n");
	fclose(ptrIndo->textindo);
	fclose(ptrBatak->textbatak);
}

void CetakSemuaBatakkeIndonesia(BahasaHata *ptrBatak, BahasaHata *ptrIndo)
{
	int loop;
	char pemisah[]="\n";
	ptrBatak->textbatak = fopen("kata_batak.txt", "r");
	ptrIndo->textindo = fopen("kata_indonesia.txt", "r");
	printf("Kamus Batak ke Indonesia!\n\n");
	while(!feof(ptrIndo->textindo) && !feof(ptrBatak->textbatak))
	{
		fgets(max[loop].bahasaindonesia, 999999999, ptrIndo->textindo);
		fgets(max[loop].bahasabatak,999999999, ptrBatak->textbatak);
		strtok(max[loop].bahasabatak, pemisah);
		printf("%s => %s", max[loop].bahasabatak, max[loop].bahasaindonesia);
	}
	printf("\n\n");
	fclose(ptrIndo->textindo);
	fclose(ptrBatak->textbatak);
}

void TerjemahkanKataIndonesiakeBatak(BahasaHata *ptrIndo, BahasaHata *ptrBatak)
{
	int loop;
	char pemisah[]="\n";
	char masukan[99999];
	ptrIndo->textindo = fopen("kata_indonesia.txt", "r");
	ptrBatak->textbatak = fopen("kata_batak.txt", "r");
	printf("Menerjemahkan kata dari Indonesia ke Batak!\n");
	printf("Masukkan kata bahasa Indonesia : ");
	scanf(" %[^\n\t]", masukan);
	while(!feof(ptrIndo->textindo) && !feof(ptrBatak->textbatak))
	{
		fgets(max[loop].bahasaindonesia, 999999999, ptrIndo->textindo);
		fgets(max[loop].bahasabatak,999999999, ptrBatak->textbatak);
		strtok(max[loop].bahasaindonesia, pemisah);
		if(strcmp(max[loop].bahasaindonesia, masukan) == 0)
		{
			printf("%s", max[loop].bahasabatak);
		}
	}
	printf("\n\n");
	fclose(ptrIndo->textindo);
	fclose(ptrBatak->textbatak);
}

void TerjemahkanKataBatakkeIndonesia(BahasaHata *ptrBatak, BahasaHata *ptrIndo)
{
	int loop;
	char pemisah[]="\n";
	char masukan[99999];
	ptrIndo->textindo = fopen("kata_indonesia.txt", "r");
	ptrBatak->textbatak = fopen("kata_batak.txt", "r");
	printf("Menerjemahkan kata dari Batak ke Indonesia!\n");
	printf("Masukkan kata bahasa Batak : ");
	scanf(" %[^\n\t]", masukan);
	while(!feof(ptrIndo->textindo) && !feof(ptrBatak->textbatak))
	{
		fgets(max[loop].bahasaindonesia, 999999999, ptrIndo->textindo);
		fgets(max[loop].bahasabatak,999999999, ptrBatak->textbatak);
		strtok(max[loop].bahasabatak, pemisah);
		if(strcmp(max[loop].bahasabatak, masukan) == 0)
		{
			printf("%s", max[loop].bahasaindonesia);
		}
	}
	printf("\n\n");
	fclose(ptrIndo->textindo);
	fclose(ptrBatak->textbatak);
}

void TerjemahkanIndonesiakeBatakdiTXT(BahasaHata *ptrIndo, BahasaHata *ptrBatak, BahasaHata *ptrIndoBatak)
{
	int loop;
	char pemisah[]="\n";
	char pemisahmasukan[]=" .,\n";
	char masukan[99999];
	char penghubung[]=" => ";
	ptrIndo->textindo = fopen("kata_indonesia.txt", "r");
	ptrBatak->textbatak = fopen("kata_batak.txt", "r");
	ptrIndoBatak->textindobatak = fopen("indonesia_ke_batak.txt", "a");
	printf("Menerjemahkan kata dari Indonesia ke Batak!\n");
	printf("Masukkan kata bahasa Indonesia : ");
	scanf(" %[^\n\t]", masukan);
	while(!feof(ptrIndo->textindo) && !feof(ptrBatak->textbatak))
	{
		fgets(max[loop].bahasaindonesia, 999999999, ptrIndo->textindo);
		fgets(max[loop].bahasabatak, 999999999, ptrBatak->textbatak);
		strtok(max[loop].bahasaindonesia, pemisah);
		if(strcmp(max[loop].bahasaindonesia, masukan) == 0)		
		{
			printf("%s = %s", masukan, max[loop].bahasabatak);
			fputs(masukan, ptrIndoBatak->textindobatak);
			fputs(penghubung, ptrIndoBatak->textindobatak);
			fputs(max[loop].bahasabatak, ptrIndoBatak->textindobatak);
		}
	}
	printf("Berhasil Menerjemahkan dan Menambahkan ke File");
	printf("\n\n");
	fclose(ptrIndo->textindo);
	fclose(ptrBatak->textbatak);
	fclose(ptrIndoBatak->textindobatak);
}

void TerjemahkanBatakkeIndonesiadiTXT(BahasaHata *ptrBatak, BahasaHata *ptrIndo, BahasaHata *ptrIndoBatak)
{
	int loop;
	char pemisah[]="\n";
	char pemisahmasukan[]=" .,\n";
	char masukan[99999];
	char penghubung[]=" => ";
	ptrIndo->textindo = fopen("kata_indonesia.txt", "r");
	ptrBatak->textbatak = fopen("kata_batak.txt", "r");
	ptrIndoBatak->textindobatak = fopen("batak_ke_indonesia.txt", "a");
	printf("Menerjemahkan kata dari Indonesia ke Batak!\n");
	printf("Masukkan kata bahasa Batak : ");
	scanf(" %[^\n\t]", masukan);
	while(!feof(ptrIndo->textindo) && !feof(ptrBatak->textbatak))
	{
		fgets(max[loop].bahasaindonesia, 999999999, ptrIndo->textindo);
		fgets(max[loop].bahasabatak, 999999999, ptrBatak->textbatak);
		strtok(max[loop].bahasabatak, pemisah);
		if(strcmp(max[loop].bahasabatak, masukan) == 0)		
		{
			printf("%s = %s", masukan, max[loop].bahasaindonesia);
			fputs(masukan, ptrIndoBatak->textindobatak);
			fputs(penghubung, ptrIndoBatak->textindobatak);
			fputs(max[loop].bahasaindonesia, ptrIndoBatak->textindobatak);
		}
	}
	printf("Berhasil Menerjemahkan dan Menambahkan ke File");	
	printf("\n\n");
	fclose(ptrIndo->textindo);
	fclose(ptrBatak->textbatak);
	fclose(ptrIndoBatak->textindobatak);
}
