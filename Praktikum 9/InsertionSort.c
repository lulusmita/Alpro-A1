/* Nama file     :InsertionSort.c */
/* Deskripsi     :Menyortir suatu bilangan dengan metode insertion sort */
/* Pembuat       :Lulus Dwiyan Mita-24060121120029 */
/* Tgl Pembuatan :Senin,2 Mei 2022/14.55 WIB */
#include<stdio.h>
#include<stdlib.h>
void insertionSort(int array[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=array[i];
        j=i-1;
        while(j>=0&&array[j]>temp){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=temp;
    }
}
int main(){ /* Program Utama */
/* Kamus */
   int i,n,array[]={29,10,14,37,14,13,5,7,40,35};
/* Algoritma */
   printf("=========================================================================\n");
   printf("                        Insertion Sort Program                           \n");
   printf("=========================================================================\n");
   n=sizeof(array)/sizeof(array[0]);
   insertionSort(array,n);
   for(i=n-1;i>=0;i--){
    printf("%d ",array[i]);
   }
   printf("\n=========================================================================\n");
   printf("                      Program selesai dieksekusi                         \n");
   printf("=========================================================================\n");
   return 0;
}
