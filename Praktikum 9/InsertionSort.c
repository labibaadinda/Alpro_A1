// Nama file    : InsertionSort.c
// Nama /NIM    : Labiba Adinda Zahwana / 24060121140111
// Tgl. Pembuat : 01 Mei 2022
// Deskripsi    : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Insertion Sort

#include<stdio.h>

void InsertionSort(int array[], int n)
{
    //Kamus Lokal
    int i ;
    int temp ;
    int j ;

    //Algoritma
    for(i = 1; i < n; i++) {
        temp = array[i];
        j = i - 1 ;
        while (j>=0 && array[j] > temp){
            array[j + 1] = array[j];
            j = j - 1 ;
        }
        array[j + 1] = temp ;
    }

}

//PROGRAM UTAMA
int main()
{
    //Kamus
    int i ;
    int n ;
    int array[] = {2,81,89,122,78,54,11,19,5,4} ;

    //Algoritma
    n = sizeof(array) / sizeof(array[0]);
    InsertionSort(array, n) ;
    for(i = 0; i < n; i ++){
        printf("%d ", array[i]) ;
    }

    return 0 ;
}
