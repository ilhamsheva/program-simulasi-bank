#include "prc.c"

int main()
{
    printf("=====================================\n");
    printf("\tPROGRAM SIMULASI BANK\n");
    printf("=====================================\n");

    double saldoAwal;
    printf("Masukkan saldo awal: ");
    scanf("%lf", &saldoAwal);

    Rekening rekening = saldoawal(saldoAwal);
    
    system("cls");
    
    int pilihan;
    char choice;

    do
    {
        printf("=====================================\n");
        printf("\tPROGRAM SIMULASI BANK\n");
        printf("=====================================\n");

        printf("\n");
        printf("1. Sumpah\n");
        printf("2. Transfer\n");
        printf("3. Nabung\n");
        printf("4. Tarik Tunai\n");
        printf("5. Lihat Saldo\n");
        printf("6. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &pilihan);

        system("cls");

        switch (pilihan)
        {
        case 1:
            sumpah();
            system("pause");
            system("cls");
            break;

        case 2:
            printf("1. Transfer sekali\n");
            printf("2. Transfer sampai saldo habis\n");
            int transferOption;
            printf("Pilih jenis transfer: ");
            scanf("%d", &transferOption);
            
            printf("\n");

            if (transferOption == 1)
            {
                // Transfer sekali
                rekening = transfer(rekening, 0, 0);
                system("pause");
                system("cls");
            }
            else if (transferOption == 2)
            {
                // Transfer sampai saldo habis menggunakan fungsi rekursif
                rekening = transferRekursif(rekening);
                system("pause");
                system("cls");
            }
            else
            {
                printf("Opsi transfer tidak valid.\n");
            }
            break;

        case 3:
            rekening = nabung(rekening, 0);
            system("pause");
            system("cls");
            break;

        case 4:
            rekening = tariktunai(rekening, 0);
            system("pause");
            system("cls");
            break;

        case 5:
            // Menampilkan sisa saldo setelah operasi
            lihatsaldo(rekening);
            system("pause");
            system("cls");
            break;

        case 6:
            printf("Keluar dari program.\n");
            break;

        default:
            printf("Opsi tidak valid.\n");
        }
    } while (pilihan != 6);
    printf("Exiting the program. Thank you!\n");

    return 0;
}
