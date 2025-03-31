#ifndef FUNCOES
#define FUNCOES

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>

#include "criacaoArquivo.h"
#include "algoritmos.h"
#include "main.h"
#include "quickSort.h"
#include "heapSort.h"

using namespace std;

void isCrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\InsertionSort\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = insertionSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\InsertionSort\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\InsertionSort\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


void isDecrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\InsertionSort\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = insertionSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\InsertionSort\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\InsertionSort\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void isRandomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\InsertionSort\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++) {
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = insertionSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\InsertionSort\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\InsertionSort\\ArquivosdeSaida\\Randomico\\saidaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void bsCrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\BubbleSort\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = bubbleSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\BubbleSort\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\BubbleSort\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void bsDecrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\BubbleSort\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = bubbleSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\BubbleSort\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\BubbleSort\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void bsRandomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\BubbleSort\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = bubbleSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\BubbleSort\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\BubbleSort\\ArquivosdeSaida\\Randomico\\saidaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void ssCrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\SelectionSort\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = selectionSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\SelectionSort\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\SelectionSort\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void ssDecrescente(int tamanhoVet) {
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\SelectionSort\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = selectionSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\SelectionSort\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\SelectionSort\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void ssRandomico(int tamanhoVet) {
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\SelectionSort\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = selectionSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\SelectionSort\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\SelectionSort\\ArquivosdeSaida\\Randomico\\saidaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void shsCrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\ShellSort\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = shellSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\ShellSort\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\ShellSort\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


void shsDecrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\ShellSort\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = shellSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\ShellSort\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\ShellSort\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void shsRandomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\ShellSort\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++) {
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = shellSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\ShellSort\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\ShellSort\\ArquivosdeSaida\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void msCrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\MergeSort\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = mergeSort(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\MergeSort\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\MergeSort\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


void msDecrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\MergeSort\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = mergeSort(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\MergeSort\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\MergeSort\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void msRandomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\MergeSort\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++) {
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = mergeSort(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\MergeSort\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\MergeSort\\ArquivosdeSaida\\Randomico\\saidaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void qs1Crescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\QuickSort1\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV1(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort1\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort1\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


void qs1Decrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\QuickSort1\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV1(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort1\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort1\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void qs1Randomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\QuickSort1\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++) {
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV1(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort1\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort1\\ArquivosdeSaida\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void qs2Crescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\QuickSort2\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV2(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort2\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort2\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


void qs2Decrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\QuickSort2\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV2(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort2\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort2\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void qs2Randomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\QuickSort2\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++) {
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV2(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort2\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort2\\ArquivosdeSaida\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void qs3Crescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\QuickSort3\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV3(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort3\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort3\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


void qs3Decrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\QuickSort3\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV3(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort3\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort3\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void qs3Randomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\QuickSort3\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++) {
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = quickSortV3(array, 0, tamanhoVet - 1);

    FILE* tempo = fopen(("output\\QuickSort3\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\QuickSort3\\ArquivosdeSaida\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void hsCrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = i;
    }

    FILE* entrada = fopen(("output\\HeapSort\\ArquivosdeEntrada\\Crescente\\entradaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = heapSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\HeapSort\\ArquivosdeTempo\\Crescente\\tempoCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\HeapSort\\ArquivosdeSaida\\Crescente\\saidaCrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for(int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


void hsDecrescente(int tamanhoVet){
    int* array = new int[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++){
        array[i] = tamanhoVet - i - 1;
    }

    FILE* entrada = fopen(("output\\HeapSort\\ArquivosdeEntrada\\Decrescente\\entradaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = heapSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\HeapSort\\ArquivosdeTempo\\Decrescente\\tempoDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\HeapSort\\ArquivosdeSaida\\Decrescente\\saidaDecrescente" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}

void hsRandomico(int tamanhoVet){
    int* array = new int[tamanhoVet];

    srand(static_cast<unsigned>(time(nullptr)));
    for(int i = 0; i < tamanhoVet; i++){
        array[i] = (rand() % 1000000);
    }

    FILE* entrada = fopen(("output\\HeapSort\\ArquivosdeEntrada\\Randomico\\entradaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(entrada, "%d\n", tamanhoVet);
    for (int i = 0; i < tamanhoVet; i++) {
        fprintf(entrada, "%d\n", array[i]);
    }
    fclose(entrada);

    double duracao = heapSort(array, tamanhoVet);

    FILE* tempo = fopen(("output\\HeapSort\\ArquivosdeTempo\\Randomico\\tempoRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    fprintf(tempo, "%.5f\n", duracao);
    fclose(tempo);

    FILE* saida = fopen(("output\\HeapSort\\ArquivosdeSaida\\Randomico\\saidaRandomico" + to_string(tamanhoVet) + ".txt").c_str(), "w");
    for (int i = 0; i < tamanhoVet; i++){
        fprintf(saida, "%d\n", array[i]);
    }
    fclose(saida);

    delete[] array;
}


#endif
