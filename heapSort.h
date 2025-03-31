#ifndef HEAPSORT
#define HEAPSORT

#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <ctime>
#include <stack>

#include "funcoes.h"
#include "criacaoArquivo.h"
#include "main.h"

using namespace std;


void minHeapify(int array[], int tamanhoVet, int i){
    int menor = i;
    int filho_E = 2 * i + 1;
    int filho_D = 2 * i + 2;


    if(filho_E < tamanhoVet && array[filho_D] < array[menor])
        menor = filho_E;

    if(filho_D < tamanhoVet && array[filho_D] < array[menor])
        menor = filho_D;

    if(menor != i){
        swap(array[i], array[menor]);
        minHeapify(array, tamanhoVet, menor);
    }
}


void build_min_heap(int array[], int tamanhoVet){
    for(int i = tamanhoVet / 2 - 1; i >= 0; i--){
        minHeapify(array, tamanhoVet, i);
    }
}


double heapSort(int array[], int tamanhoVet){

    clock_t inicio = clock();

    build_min_heap(array, tamanhoVet);

    for(int i = tamanhoVet - 1; i > 0; i--){
        swap(array[0], array[i]);
        minHeapify(array, i, 0);
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}

void printHeap(int array[], int tamanhoVet){
    for(int i = 0; i < tamanhoVet; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int heapMinimum(int array[]){
    return array[0];
}

int heap_extract_min(int array[], int &tamanhoVet){

    int minimo = array[0];
    array[0] = array[tamanhoVet - 1];
    tamanhoVet--;
    minHeapify(array, tamanhoVet, 0);

    return minimo;
}


void heap_increase_key(int array[], int i, int chave){

    array[i] = chave;

    while(array[i] > 0 && array[(i - 1) / 2] > array[i]){
        swap(array[i], array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void max_heap_insert(int array[], int &n, int chave){
    int i = n - 1;
    array[i] = -1000;
    while (i > 0 && array[(i - 1) / 2] < chave){
        array[i] = array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    array[i] = chave;
}


#endif
