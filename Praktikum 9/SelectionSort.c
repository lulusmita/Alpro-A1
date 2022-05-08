/* Nama file     :SelectionSort.c */
/* Deskripsi     :Menyortir suatu bilangan dengan metode selection sort secara descending */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Senin,2 Mei 2022/14.55 WIB */
#include<stdio.h>
#include<stdlib.h>
void selectionSort(int array[],int n){
    int i,j,max,temp;
    for(i=0;i<n-1;i++){
        max=i;
        for(j=i+1;j<n;j++){
          if(array[j]>array[max]){
             max=j;
          }
      }
      temp=array[max];
      array[max]=array[i];
      array[i]=temp;
    }
}
int main(){ /* Program Utama */
/* Kamus */
   int i,n,array[]={29,80,14,37,141,13,5,7,40,35};
/* Algoritma */
   printf("=========================================================================\n");
   printf("                        Selection Sort Program                           \n");
   printf("=========================================================================\n");
   n=sizeof(array)/sizeof(array[0]);
   selectionSort(array,n);
   for(i=0;i<n;i++){
    printf("%d ",array[i]);
   }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
