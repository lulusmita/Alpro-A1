/* Nama file     :luasbjsk.c */
/* Deskripsi     :Menghitung dan menampilkan luas bujur sangkar */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :6 Maret 2022/11:26 WIB */
#include<stdio.h>
#include<stdlib.h>
int main(){ /* Program Utama */
/* Kamus */
   int S;/* Sisi bujursangkar */
   int Luas;/* Luas bujursangkar */
/* Algoritma */
   printf("=========================================================================\n");
   printf("                     Menghitung Luas Bujur Sangkar                       \n");
   printf("=========================================================================\n");
   printf("Masukkan panjang sisi bujur sangkar (dalam m) :");scanf("%d",&S);/* input */
   printf("=========================================================================\n");
   Luas=S*S;/* proses hitung luas bujursangkar */
   printf("Luas bujur sangkar tersebut adalah %d m^2\n",Luas);/* output */
   printf("=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
