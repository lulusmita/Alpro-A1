/* Nama file     :InsertionSort.c */
/* Deskripsi     :Menyortir suatu bilangan dari urutan terbesar ke terkecil atau descending dengan metode insertion sort */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Senin,2 Mei 2022/14.55 WIB */
#include<stdio.h>
#include<stdlib.h>
/*Fungsi insertionSort*/
void insertionSort(int array[],int n){
    int i,j,ts;
    for(i=1;i<n;i++){
        ts=array[i];
        j=i-1;
        while(j>=0&&array[j]>ts){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=ts;
    }
}
int main(){ /* Program Utama */
/* Kamus */
   int i,N,*array;
/* Algoritma */
   printf("=========================================================================\n");
   printf("                        Insertion Sort Program                           \n");
   printf("=========================================================================\n");
   printf("Masukkan panjang array:");scanf("%d", &N);
   array = (int*) malloc(N * sizeof(int));
   printf("Masukkan elemen-elemen array:\n");
    for(i=0;i<N;i++){
        scanf("%d", &array[i]);
    }
   printf("=========================================================================\n");
   insertionSort(array,N);
   printf("Array setelah disorting secara descending dengan insertion sort:\n");
   for(i=N-1;i>=0;i--){
    printf("%d ",array[i]);
   }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
