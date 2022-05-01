// Nama file    : BubbleSort.c
// Nama /NIM    : Labiba Adinda Zahwana / 24060121140111
// Tgl. Pembuat : 01 Mei 2022
// Deskripsi    : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Bubble Sort

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    //Kamus Lokal
    int i, j, temp;

    //Algoritma
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//PROGRAM UTAMA
int main()
{
    //Kamus
    int i, n, *arr;

    //Algoritma
    printf("Masukkan banyaknya array : ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("Masukan nilai array n ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
