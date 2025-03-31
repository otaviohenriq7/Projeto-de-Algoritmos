#ifndef ALGORITMOS
#define ALGORITMOS

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <fstream>

#include "funcoes.h"
#include "criacaoArquivo.h"
#include "main.h"

using namespace std;

double insertionSort(int array[], int tamanhoVet){
    int i;
    int j;
    int chave;

    clock_t inicio = clock();

    for(j = 1; j < tamanhoVet; j++){
        chave = array[j];
        i = j - 1;
        while (i >= 0 && array[i] > chave){
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = chave;
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}

double bubbleSort(int array[], int tamanhoVet){
    clock_t inicio = clock();

    for(int i = 0; i < tamanhoVet - 1; i++){
        int troca = 0;
        for (int j = 0; j < tamanhoVet - i - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                troca = 1;
            }
        }
        if(troca == 0){
            break;
        }
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}

double selectionSort(int array[], int tamanhoVet){

    clock_t inicio = clock();

    for(int i = 0; i < tamanhoVet - 1; i++){
        int valorMinimo = i;
        for(int j = i + 1; j < tamanhoVet; j++){
            if(array[j] < array[valorMinimo]){
                valorMinimo = j;
            }
        }
        int temp = array[valorMinimo];
        array[valorMinimo] = array[i];
        array[i] = temp;
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}

double shellSort(int array[], int tamanhoVet){

    clock_t inicio = clock();

    int intervalo;

    for(intervalo = tamanhoVet / 2; intervalo > 0; intervalo /= 2){
        for(int i = intervalo; i < tamanhoVet; i++){
            int temp = array[i];
            int j;

            for(j = i; j >= intervalo && array[j - intervalo] > temp; j -= intervalo){
                array[j] = array[j - intervalo];
            }
            array[j] = temp;
        }
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}



void mesclar(int array[], int esquerda, int meio, int direita){
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int *arrayEsquerdo = (int*)malloc(n1 * sizeof(int));
    int *arrayDireito = (int*)malloc(n2 * sizeof(int));

    for(int i = 0; i < n1; i++){
        arrayEsquerdo[i] = array[esquerda + i];
    }
    for(int i = 0; i < n2; i++){
        arrayDireito[i] = array[meio + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = esquerda;

    while(i < n1 && j < n2){
        if(arrayEsquerdo[i] <= arrayDireito[j]){
            array[k] = arrayEsquerdo[i];
            i++;
        }else{
            array[k] = arrayDireito[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        array[k] = arrayEsquerdo[i];
        i++;
        k++;
    }
    while(j < n2){
        array[k] = arrayDireito[j];
        j++;
        k++;
    }

    free(arrayEsquerdo);
    free(arrayDireito);
}

double mergeSort(int array[], int esquerda, int direita){

    clock_t inicio = clock();

    if(esquerda < direita){
        int meio;
        meio = esquerda + (direita - esquerda) / 2;

        mergeSort(array, esquerda, meio);
        mergeSort(array, meio + 1, direita);

        mesclar(array, esquerda, meio, direita);
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}

#endif

