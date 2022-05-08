/* Nama file     :BubbleSort.c */
/* Deskripsi     :Menyortir beberapa inputan bilangan secara descending dengan BubbleSort(Membandingkan dua data berdekatan dan menukarnya sampai dalam urutan yang diinginkan) */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Senin,2 Mei 2022/14.55 WIB */
#include<stdio.h>
#include<stdlib.h>
/*Fungsi bubbleSort*/
void bubbleSort(int arr[], int N)
{
    int i,j,ts;
    for(i=N;i>0;i--){
        for(j=N;j>0;j--){
            if(arr[j-1]>arr[j-2]){
                ts=arr[j-1];
                arr[j-1]=arr[j-2];
                arr[j-2]=ts;
            }
        }
    }
}
int main(){ /* Program Utama */
/* Kamus */
   int i;/*counter*/
   int N;/*panjang array*/
   int *arr;/*variabel untuk alokasi memori dinamis*/
/* Algoritma */
   printf("=========================================================================\n");
   printf("                         BubbleSort Program                              \n");
   printf("=========================================================================\n");
   printf("Masukkan panjang array:");scanf("%d", &N);
   arr = (int*) malloc(N * sizeof(int));
   printf("Masukkan elemen-elemen array:\n");
   for(i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
   bubbleSort(arr, N);
   printf("=========================================================================\n");
   printf("Array terurut descending dengan menggunakan bubble sort: \n");
   for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
