#ifndef QUICKSORT
#define QUICKSORT

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <fstream>
#include <stack>
#include <ctime>
#include <vector>

#include "funcoes.h"
#include "criacaoArquivo.h"
#include "main.h"

using namespace std;


void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particao1(int array[], int menor, int maior){
    int pivo = array[menor];
    int i = menor + 1;

    for(int j = menor + 1; j <= maior; j++){
        if(array[j] < pivo){
            troca(&array[i], &array[j]);
            i++;
        }
    }

    troca(&array[menor], &array[i - 1]);
    return i - 1;
}

double quickSortV1(int array[], int menor, int maior){

    clock_t inicio = clock();

    stack<pair<int, int>> s;
    s.push(make_pair(menor, maior));

    while(!s.empty()){
        pair<int, int> current = s.top();
        s.pop();

        menor = current.first;
        maior = current.second;

        if(menor < maior){
            int pivoIndex = particao1(array, menor, maior);
            s.push(make_pair(menor, pivoIndex - 1));
            s.push(make_pair(pivoIndex + 1, maior));
        }
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}


//QUICK SORT VERSÃO 2

void troca2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int mediaPivo(int* array, int menor, int maior){
    int media = (menor + maior) / 2;

    if(array[menor] > array[media]){
        troca2(array[menor], array[media]);
    }
    if(array[menor] > array[maior]){
        troca2(array[menor], array[maior]);
    }
    if(array[media] > array[maior]){
        troca2(array[media], array[maior]);
    }

    troca2(array[media], array[maior - 1]);

    return array[maior - 1];
}

int particao2(int* array, int menor, int maior){
    int pivo = mediaPivo(array, menor, maior);
    int i = menor;

    for(int j = menor; j < maior; j++){
        if(array[j] < pivo){
            troca2(array[i], array[j]);
            i++;
        }
    }
    troca2(array[i], array[maior - 1]);

    return i;
}

double quickSortV2(int* array, int menor, int maior){

    clock_t inicio = clock();

    if(menor < maior){
        int posicaoPivo = particao2(array, menor, maior);
        quickSortV2(array, menor, posicaoPivo - 1);
        quickSortV2(array, posicaoPivo + 1, maior);
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}



//QUICK SORT VERSÃO 3

int pivoRandomico(int array[], int menor, int maior){
    int pivoAleatorio = menor + rand() % (maior - menor + 1);
    troca(&array[menor], &array[pivoAleatorio]);

    return array[menor];
}

int particao3(int array[], int menor, int maior){
    int pivo = pivoRandomico(array, menor, maior);
    int i = menor + 1;

    for(int j = menor + 1; j <= maior; j++){
        if(array[j] < pivo){
            troca(&array[i], &array[j]);
            i++;
        }
    }

    troca(&array[menor], &array[i - 1]);
    return i - 1;
}

double quickSortV3(int array[], int menor, int maior){

    clock_t inicio = clock();

    stack<pair<int, int>> s;
    s.push(make_pair(menor, maior));

    while(!s.empty()){
        pair<int, int> current = s.top();
        s.pop();

        menor = current.first;
        maior = current.second;

        if(menor < maior){
            int pivoIndex = particao3(array, menor, maior);
            s.push(make_pair(menor, pivoIndex - 1));
            s.push(make_pair(pivoIndex + 1, maior));
        }
    }

    clock_t fim = clock();
    double duracao = (fim - inicio) / (double)CLOCKS_PER_SEC;
    return duracao;
}

#endif
