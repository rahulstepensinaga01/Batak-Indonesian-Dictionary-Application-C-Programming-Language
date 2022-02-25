/*
	Nama :	Rahul Stepen Sinaga  ( Proyek Kamus terjemahan Indonesia Batak )
*/

#include <stdio.h>

typedef struct _bahasa BahasaHata;
struct _bahasa{
	char bahasaindonesia[9999];
	char bahasabatak[9999];
	FILE *textindo;
	FILE *textbatak;
	FILE *textindobatak;
};

struct _bahasa max[999999999];

void CetakSemuaIndonesiakeBatak(BahasaHata *ptrIndo, BahasaHata *ptrBatak);
void CetakSemuaBatakkeIndonesia(BahasaHata *ptrBatak, BahasaHata *ptrIndo);
void TerjemahkanKataIndonesiakeBatak(BahasaHata *ptrIndo, BahasaHata *ptrBatak);
void TerjemahkanKataBatakkeIndonesia(BahasaHata *ptrBatak, BahasaHata *ptrIndo);
void TerjemahkanIndonesiakeBatakdiTXT(BahasaHata *ptrIndo, BahasaHata *ptrBatak, BahasaHata *ptrIndoBatak);
void TerjemahkanBatakkeIndonesiadiTXT(BahasaHata *ptrBatak, BahasaHata *ptrIndo, BahasaHata *ptrIndoBatak);
