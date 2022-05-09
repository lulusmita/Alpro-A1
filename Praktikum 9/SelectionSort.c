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
   int i,N,*array;
/* Algoritma */
   printf("=========================================================================\n");
   printf("                        Selection Sort Program                           \n");
   printf("=========================================================================\n");
   printf("Masukkan panjang array:");scanf("%d", &N);
   array = (int*) malloc(N * sizeof(int));
   printf("Masukkan elemen-elemen array:\n");
    for(i=0;i<N;i++){
        scanf("%d", &array[i]);
    }
   selectionSort(array,N);
   printf("=========================================================================\n");
   printf("Array setelah disorting secara descending dengan selection sort:\n");
   for(i=0;i<N;i++){
    printf("%d ",array[i]);
   }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
