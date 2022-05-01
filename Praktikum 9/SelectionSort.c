// Nama file    : SelectionSort.c
// Nama /NIM    : Labiba Adinda Zahwana / 24060121140111
// Tgl. Pembuat : 01 Mei 2022
// Deskripsi    : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Selection Sort

#include<stdio.h>

void SelectionSort(int array[], int n)
{
    //Kamus Lokal
    int i ;
    int min ;
    int temp ;
    int j ;

    //Algoritma
    for(i = 0; i < n; i++) {
        min = i ;
        for(j = i+1; j < n; j++){
            if (array[j] < array[min]){
                min = j ;
            }
        }
        temp = array[min] ;
        array[min] = array[i] ;
        array[i] = temp ;
    }

}

//PROGRAM UTAMA
int main()
{
    //Kamus
    int i ;
    int n ;
    int array[] = {99,6,2,15,89,5,3,34,12,1} ;

    //Algoritma
    n = sizeof(array) / sizeof(array[0]);
    SelectionSort(array, n) ;
    for(i = 0; i < n; i ++){
        printf("%d ", array[i]) ;
    }

    return 0 ;
}
