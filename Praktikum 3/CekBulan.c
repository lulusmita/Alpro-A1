/* Nama file     :CekBulan.c */
/* Deskripsi     :Menuliskan ke layar nama bulan berdasarkan nomor bulan yang diinputkan user(1-12) */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Sabtu,12 Maret 2022/10.18 WIB */
#include<stdio.h>
#include<stdlib.h>
int main(){ /* Program Utama */
/* Kamus */
   int N;/* Nomor Hari */
/* Algoritma */
   printf("=========================================================================\n");
   printf("             Program Nama Bulan Berdasarkan Nomor Inputan User           \n");
   printf("=========================================================================\n");
   printf("Masukkan nomor bulan (1-12) :");scanf("%d",&N);/* input */
   printf("=========================================================================\n");
   switch(N){ /*Kondisional*/
   case 1:printf("Januari");break;
   case 2:printf("Februari");break;
   case 3:printf("Maret");break;
   case 4:printf("April");break;
   case 5:printf("Mei");break;
   case 6:printf("Juni");break;
   case 7:printf("Juli");break;
   case 8:printf("Agustus");break;
   case 9:printf("September");break;
   case 10:printf("Oktober");break;
   case 11:printf("November");break;
   case 12:printf("Desember");break;
   default:printf("Masukan nomor bulan tidak tepat");
   }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
