/* Nama file     :CountingSort.c */
/* Deskripsi     :Menyortir beberapa inputan bilangan dari urutan terbesar ke terkecil atau descending dengan CountingSort */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Senin,2 Mei 2022/15.25 WIB */
#include<stdio.h>
#include<stdlib.h>
/*Fungsi counting sort*/
void counting_sort(int arr1[],int N,int max, int min){
    int count[1000]={0},i,j;
    for(i=0;i<N;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=max-min;i>=0;--i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}
int main(){ /* Program Utama */
/* Kamus */
   int i;/*counter*/
   int N;/*panjang array*/
   int *arr;/*alokasi array dinamis*/
   int max=0, min=0;/*inisialisasi*/
/* Algoritma */
   printf("=========================================================================\n");
   printf("                        Counting Sort Program                            \n");
   printf("=========================================================================\n");
   printf("Masukkan panjang array:");scanf("%d", &N);
   arr = (int*) malloc(N * sizeof(int));
   printf("Masukkan elemen-elemen array:");
    for(i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
   printf("=========================================================================\n");
   printf("Elemen-elemen array sebelum disorting secara descending:\n ");
   for(i=0;i<N;i++){
     printf("%d ", arr[i]);
   }
   for(i=0;i<N;i++){
     if(arr[i]>max){
        max=arr[i];
     }
     else if(arr[i]<min){
        min=arr[i];
     }
   }
   printf("\n=========================================================================");
   printf("\nMax: %d\nMin: %d ",max,min);
   printf("\n=========================================================================\n");
   printf("Elemen-elemen array setelah disorting secara descending:\n ");
   counting_sort(arr,N,max, min);
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
