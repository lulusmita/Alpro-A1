/* Nama file     :CekHari.c */
/* Deskripsi     :Menuliskan ke layar nama hari berdasarkan nomor hari yang diinputkan user(1-7) */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Sabtu,12 Maret 2022/9:38 WIB */
#include<stdio.h>
#include<stdlib.h>
int main(){ /* Program Utama */
/* Kamus */
   int N;/* Nomor Hari */
/* Algoritma */
   printf("=========================================================================\n");
   printf("           Program Nama Hari Berdasarkan Nomor Inputan User              \n");
   printf("=========================================================================\n");
   printf("Masukkan nomor hari (1-7) :");scanf("%d",&N);/* input */
   printf("=========================================================================\n");
   switch(N){ /*Kondisional*/
   case 1:printf("Senin");break;
   case 2:printf("Selasa");break;
   case 3:printf("Rabu");break;
   case 4:printf("Kamis");break;
   case 5:printf("Jumat");break;
   case 6:printf("Sabtu");break;
   case 7:printf("Minggu");break;
   default:printf("Masukan nomor hari tidak tepat");
   }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
