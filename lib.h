#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int saldo;
} Rekening;

void sumpah();
Rekening saldoawal(int saldoAwal);
Rekening transfer(Rekening rekening, int nomorRekeningTujuan, int jumlahTransfer);
Rekening transferRekursif(Rekening rekening); // Menggunakan fungsi rekursif
Rekening nabung(Rekening rekening, int jumlahNabung);
Rekening tariktunai(Rekening rekening, int jumlahTarik);
void lihatsaldo(Rekening rekening);