#include "lib.h"

void sumpah()
{
    printf("Dengan nama Allah, saya Ilham Sheva Renggafiarto bahwa saya tidak melakukan\n");
    printf("kecurangan (mencontek maupun memberikan contekan) selama UAS Algoritma dan Pemrograman berlangsung.\n");
    printf("Jika pengawas menemukan saya melakukan kecurangan, maka saya siap mendapatkan nilai 0 pada UAS.\n");
    printf("Dan apabila kecurangan saya tidak diketahui oleh pengawas maka saya siap mendapatkan azab dari Allah\n");
    printf("baik di dunia maupun di akhirat.\n");
}

Rekening saldoawal(int saldoAwal)
{
    Rekening rekening;
    rekening.saldo = saldoAwal;
    printf("Saldo Saat Ini: %d\n", rekening.saldo);
    return rekening;
}

Rekening transfer(Rekening rekening, int nomorRekeningTujuan, int jumlahTransfer)
{
    printf("Masukkan nomor rekening tujuan: ");
    scanf("%d", &nomorRekeningTujuan);

    printf("Masukkan jumlah transfer: ");
    scanf("%d", &jumlahTransfer);

    if (rekening.saldo - jumlahTransfer >= 0)
    {
        rekening.saldo -= jumlahTransfer;
        printf("Transfer berhasil. Saldo tersisa: %d\n", rekening.saldo);
    }
    else
    {
        printf("Saldo tidak mencukupi. Transfer dibatalkan.\n");
    }

    return rekening;
}

Rekening transferRekursif(Rekening rekening)
{
    int nomorRekeningTujuan, jumlahTransfer;

    printf("Masukkan nomor rekening tujuan: ");
    scanf("%d", &nomorRekeningTujuan);

    printf("Masukkan jumlah transfer: ");
    scanf("%d", &jumlahTransfer);

    if (rekening.saldo - jumlahTransfer >= 0)
    {
        rekening.saldo -= jumlahTransfer;
        printf("Transfer berhasil. Saldo tersisa: %d\n", rekening.saldo);

        // Panggil rekursif untuk melakukan transfer lagi
        return transferRekursif(rekening);
    }
    else
    {
        printf("Saldo tidak mencukupi. Transfer dibatalkan.\n");
        return rekening;
    }
}

Rekening nabung(Rekening rekening, int jumlahNabung)
{
    printf("Masukkan jumlah uang yang ingin ditabungkan: ");
    scanf("%d", &jumlahNabung);

    // Menambahkan jumlah yang ditabungkan ke saldo
    rekening.saldo += jumlahNabung;
    printf("Nabung berhasil. Saldo saat ini: %d\n", rekening.saldo);

    return rekening;
}

Rekening tariktunai(Rekening rekening, int jumlahTarik)
{
    printf("Masukkan jumlah yang ingin ditarik: ");
    scanf("%d", &jumlahTarik);

    // Check jika jumlah yang ingin ditarik memenuhi syarat
    if (jumlahTarik >= 50000 && rekening.saldo - jumlahTarik >= 0)
    {
        rekening.saldo -= jumlahTarik;
        printf("Penarikan tunai berhasil. Saldo saat ini: %d\n", rekening.saldo);
    }
    else
    {
        printf("Penarikan tunai gagal. Harap periksa kembali jumlah yang ingin ditarik dan saldo Anda.\n");
    }

    return rekening;
}

void lihatsaldo(Rekening rekening)
{
    printf("Sisa Saldo Anda: %d\n", rekening.saldo);
}
