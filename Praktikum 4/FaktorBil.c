/* Nama file     :FaktorBil.c */
/* Deskripsi     :Menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0) yang diinputkan melalui keyboard */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Minggu,20 Maret 2022/02.17 WIB */
#include<stdio.h>
#include<stdlib.h>
int main(){ /* Program Utama */
/* Kamus */
   int N;/* inputan integer > 0 */
   int i;/* counter */
/* Algoritma */
   printf("=========================================================================\n");
   printf("                Program Menentukan Faktor-Faktor Bilangan                \n");
   printf("=========================================================================\n");
   printf("Masukkan bilangan (N>0) :");scanf("%d",&N);/* input */
   printf("=========================================================================\n");
   if (N<=0){
     printf("N harus positif");
   }
   else {
     printf("N=%d,faktor bilangannya adalah ",N);
     for(i=1;i<N;i++){
          if (N%i==0){
          printf("%d,",i);
          }
        }
    printf("dan %d",N);
   }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
