/* Nama file     :CekPrima.c */
/* Deskripsi     :Mengecek apakah suatu bilangan integer sembarang N>0 termasuk bilangan prima atau bukan */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Minggu,20 Maret 2022/03.05 WIB */
#include<stdio.h>
#include<stdlib.h>
int main(){ /* Program Utama */
/* Kamus */
   int N;/* inputan integer > 0 */
   int S;/*jumlah faktor*/
   int i;/* counter */
/* Algoritma */
   printf("=========================================================================\n");
   printf("                             Program Cek Prima                           \n");
   printf("=========================================================================\n");
   printf("Masukkan bilangan (N>0) :");scanf("%d",&N);/* input */
   printf("=========================================================================\n");
   if (N<=0){
     printf("N harus positif");
   }
   else {
     S=0;
     for(i=1;i<=N;i++){
          if (N%i==0){
             S+=1;
          }
            }
        if (S==2){
          printf("N=%d adalah bilangan prima",N);
            }
        else{
          printf("N=%d adalah bukan bilangan prima",N);
            }
    }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
