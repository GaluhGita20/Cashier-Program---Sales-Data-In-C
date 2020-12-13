#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "pustaka.h"

main(){

    //Deklarasi variabel lokal
    int pilihan;
    int pilihan1;
    int a;
    struct data_penjualan nota[100];
    int size=0;
    int i;

    puts("");
    puts("\t\t\t\t\tToko Swalayan Serba Murah JB CLIN");
    puts("\t\t\t\tJalan Terusan I Gusti Ngurah Rai Kranji Bekasi Barat");
    puts("\t\t========================================================================================");
    puts("");
    do{
        puts("\t\t\t\t    1. View Daftar Barang");
        puts("\t\t\t\t    2. Input data penjualan");
        puts("\t\t\t\t    3. Lihat data keseluruhan");
        puts("\t\t\t\t    0. Exit");
        puts("");
        printf ("\t\t\t\tMasukkan pilihan anda       : ");
        scanf ("%d", &pilihan);
        puts("\n");
        if (pilihan==1){
            daftar_barang();
        }else if(pilihan==2){
            a=0;
            nota[size].biaya_total=0;
            fflush(stdin); //Merefresh perpindahan jenis variable int atau float dengan string atau char
            puts("\t\t\t================================================");
            puts("\t\t\t\t\tInput Data");
            puts("\t\t\t================================================");
            printf("\t\tTanggal             : ");
            gets(nota[size].tanggal);
            printf("\t\tNomor transaksi     : ");
            gets(nota[size].no_transaksi);
            printf("\t\tNama pegawai        : ");
            gets(nota[size].nama_pegawai);
            printf("\t\tNama pelanggan      : ");
            gets(nota[size].nama_pelanggan);
            do{
                printf("\t\tKode barang         : ");
                scanf("%d", &nota[size].DT[a].kode_barang);
                if(nota[size].DT[a].kode_barang==1){
                    strcpy(nota[size].DT[a].nama_produk , "Milkita");
                    printf("\t\tNama Produk         : %s\n", nota[size].DT[a].nama_produk);
                    printf("\t\tJumlah barang       : ");
                    scanf("%d", &nota[size].DT[a].kuantitas);
                    nota[size].DT[a].harga=7000;
                    nota[size].DT[a].sub_biaya=7000*nota[size].DT[a].kuantitas;
                    printf("\t\tTotal sub biaya     : %ld\n", nota[size].DT[a].sub_biaya);
                }else if(nota[size].DT[a].kode_barang==2){
                    strcpy(nota[size].DT[a].nama_produk, "KinderJoy");
                    printf("\t\tNama Produk         : %s\n", nota[size].DT[a].nama_produk);
                    printf("\t\tJumlah barang       : ");
                    scanf("%d", &nota[size].DT[a].kuantitas);
                    nota[size].DT[a].harga=12000;
                    nota[size].DT[a].sub_biaya=12000*nota[size].DT[a].kuantitas;
                    printf("\t\tTotal sub biaya     : %ld\n", nota[size].DT[a].sub_biaya);
                }else if(nota[size].DT[a].kode_barang==3){
                    strcpy(nota[size].DT[a].nama_produk, "Roma Kelapa");
                    printf("\t\tNama Produk         : %s\n", nota[size].DT[a].nama_produk);
                    printf("\t\tJumlah barang       : ");
                    scanf("%d", &nota[size].DT[a].kuantitas);
                    nota[size].DT[a].harga=20000;
                    nota[size].DT[a].sub_biaya=20000*nota[size].DT[a].kuantitas;
                    printf("\t\tTotal sub biaya     : %ld\n", nota[size].DT[a].sub_biaya);
                }else if(nota[size].DT[a].kode_barang==4){
                    strcpy(nota[size].DT[a].nama_produk, "Chitato");
                    printf("\t\tNama Produk         : %s\n", nota[size].DT[a].nama_produk);
                    printf("\t\tJumlah barang       : ");
                    scanf("%d", &nota[size].DT[a].kuantitas);
                    nota[size].DT[a].harga=10000;
                    nota[size].DT[a].sub_biaya=10000*nota[size].DT[a].kuantitas;
                    printf("\t\tTotal sub biaya     : %ld\n", nota[size].DT[a].sub_biaya);
                }else if(nota[size].DT[a].kode_barang==5){
                    strcpy(nota[size].DT[a].nama_produk, "Chochopie");
                    printf("\t\tNama Produk         : %s\n", nota[size].DT[a].nama_produk);
                    printf("\t\tJumlah barang       : ");
                    scanf("%d", &nota[size].DT[a].kuantitas);
                    nota[size].DT[a].harga=15000;
                    nota[size].DT[a].sub_biaya=15000*nota[size].DT[a].kuantitas;
                    printf("\t\tTotal sub biaya     : %ld\n", nota[size].DT[a].sub_biaya);
                }else{
                    puts("\t\tPerhatikan data yg anda inputkan");
                }
                a++;
                printf("\t\tApakah Anda ingin menambahkan barang lagi? (1.Ya/2.Tidak): ");
                scanf("%d", &pilihan1);
                if(pilihan1>=1 && pilihan1<=2){
                    if(pilihan1==1){
                    }else{
                        for(i=0; i<a ;i++){
                            nota[size].biaya_total+=nota[size].DT[i].sub_biaya;
                        }
                        printf("\t\tTotal biaya         : %ld", nota[size].biaya_total);
                        puts("");
                    }

                }else{
                    puts("\t\tPerhatikan data yang Anda inputkan");
                }
            }while(pilihan1!=2);
            puts("\n\n");
            printf("\t\t==================================  Tagihan  Pembelanjaan =======================================\n");
            printf("\t\t|Jumlah \t Deskripsi \t\t\t Harga Satuan \t\t\t  Sub Harga   \t|\n");
            printf("\t\t|------ \t --------- \t\t\t ------------ \t\t\t  ---------   \t|\n");
            for(i=0;i<a;i++){
                printf ("\t\t|%d \t\t %s \t\t\t Rp.%ld \t\t\t Rp.%ld\t|\n", nota[size].DT[i].kuantitas, nota[size].DT[i].nama_produk, nota[size].DT[i].harga, nota[size].DT[i].sub_biaya);
            }
            printf("\t\t|\t\t\t\t\t\t\t\t\t\t------------ +  |\n");
            printf("\t\t|\t\t\t\t\t\t\t\t\t\tRp.%ld\t|\n", nota[size].biaya_total);
            printf("\t\t=================================================================================================\n\n\n");
            size++;
        }else if(pilihan==3){
            for(i=0;i<size;i++){
                puts("\n\n\t\t\t============================================");
                printf("\t\t\t\tData Penjualan ke-%d\n", (i+1));
                printf("\t\tTanggal             : %s\n", nota[i].tanggal);
                printf("\t\tNomor transaksi     : %s\n", nota[i].no_transaksi);
                printf("\t\tNama pegawai        : %s\n", nota[i].nama_pegawai);
                printf("\t\tNama pelanggan      : %s\n", nota[i].nama_pelanggan);
                printf("\t\tTotal Belanja       : %ld\n", nota[i].biaya_total);
                puts("\n");
            }
        }
    }while(pilihan!=0);

    system("cls");

    return 0;
}
