#ifndef CRIACAOARQUIVO
#define CRIACAOARQUIVO

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <string>
#include <ctime>

#include "main.h"
#include "funcoes.h"
#include "algoritmos.h"
#include "quickSort.h"
#include "heapSort.h"

using namespace std;

void criarDiretorio(const string& path) {
    DWORD ftyp = GetFileAttributesA(path.c_str());
    if (ftyp == INVALID_FILE_ATTRIBUTES){
        if(!CreateDirectoryA(path.c_str(), NULL) && GetLastError() != ERROR_ALREADY_EXISTS){
            cout << "Erro ao criar o diretório: " << path << endl;
        }
    }
}

void criacaoPasta(){
    criarDiretorio("output");
    criarDiretorio("output/InsertionSort");
    criarDiretorio("output/BubbleSort");
    criarDiretorio("output/SelectionSort");
    criarDiretorio("output/ShellSort");
    criarDiretorio("output/MergeSort");
    criarDiretorio("output/QuickSort1");
    criarDiretorio("output/QuickSort2");
    criarDiretorio("output/QuickSort3");
    criarDiretorio("output/HeapSort");

    criarDiretorio("output/InsertionSort/ArquivosdeEntrada");
    criarDiretorio("output/InsertionSort/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/InsertionSort/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/InsertionSort/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/InsertionSort/ArquivosdeSaida");
    criarDiretorio("output/InsertionSort/ArquivosdeSaida/Crescente");
    criarDiretorio("output/InsertionSort/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/InsertionSort/ArquivosdeSaida/Randomico");

    criarDiretorio("output/InsertionSort/ArquivosdeTempo");
    criarDiretorio("output/InsertionSort/ArquivosdeTempo/Crescente");
    criarDiretorio("output/InsertionSort/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/InsertionSort/ArquivosdeTempo/Randomico");

    criarDiretorio("output/BubbleSort/ArquivosdeEntrada");
    criarDiretorio("output/BubbleSort/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/BubbleSort/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/BubbleSort/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/BubbleSort/ArquivosdeSaida");
    criarDiretorio("output/BubbleSort/ArquivosdeSaida/Crescente");
    criarDiretorio("output/BubbleSort/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/BubbleSort/ArquivosdeSaida/Randomico");

    criarDiretorio("output/BubbleSort/ArquivosdeTempo");
    criarDiretorio("output/BubbleSort/ArquivosdeTempo/Crescente");
    criarDiretorio("output/BubbleSort/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/BubbleSort/ArquivosdeTempo/Randomico");

    criarDiretorio("output/SelectionSort/ArquivosdeEntrada");
    criarDiretorio("output/SelectionSort/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/SelectionSort/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/SelectionSort/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/SelectionSort/ArquivosdeSaida");
    criarDiretorio("output/SelectionSort/ArquivosdeSaida/Crescente");
    criarDiretorio("output/SelectionSort/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/SelectionSort/ArquivosdeSaida/Randomico");

    criarDiretorio("output/SelectionSort/ArquivosdeTempo");
    criarDiretorio("output/SelectionSort/ArquivosdeTempo/Crescente");
    criarDiretorio("output/SelectionSort/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/SelectionSort/ArquivosdeTempo/Randomico");

    criarDiretorio("output/ShellSort/ArquivosdeEntrada");
    criarDiretorio("output/ShellSort/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/ShellSort/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/ShellSort/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/ShellSort/ArquivosdeSaida");
    criarDiretorio("output/ShellSort/ArquivosdeSaida/Crescente");
    criarDiretorio("output/ShellSort/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/ShellSort/ArquivosdeSaida/Randomico");

    criarDiretorio("output/ShellSort/ArquivosdeTempo");
    criarDiretorio("output/ShellSort/ArquivosdeTempo/Crescente");
    criarDiretorio("output/ShellSort/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/ShellSort/ArquivosdeTempo/Randomico");

    criarDiretorio("output/MergeSort/ArquivosdeEntrada");
    criarDiretorio("output/MergeSort/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/MergeSort/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/MergeSort/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/MergeSort/ArquivosdeSaida");
    criarDiretorio("output/MergeSort/ArquivosdeSaida/Crescente");
    criarDiretorio("output/MergeSort/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/MergeSort/ArquivosdeSaida/Randomico");

    criarDiretorio("output/MergeSort/ArquivosdeTempo");
    criarDiretorio("output/MergeSort/ArquivosdeTempo/Crescente");
    criarDiretorio("output/MergeSort/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/MergeSort/ArquivosdeTempo/Randomico");

    criarDiretorio("output/QuickSort1/ArquivosdeEntrada");
    criarDiretorio("output/QuickSort1/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/QuickSort1/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/QuickSort1/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/QuickSort1/ArquivosdeSaida");
    criarDiretorio("output/QuickSort1/ArquivosdeSaida/Crescente");
    criarDiretorio("output/QuickSort1/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/QuickSort1/ArquivosdeSaida/Randomico");

    criarDiretorio("output/QuickSort1/ArquivosdeTempo");
    criarDiretorio("output/QuickSort1/ArquivosdeTempo/Crescente");
    criarDiretorio("output/QuickSort1/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/QuickSort1/ArquivosdeTempo/Randomico");

    criarDiretorio("output/QuickSort2/ArquivosdeEntrada");
    criarDiretorio("output/QuickSort2/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/QuickSort2/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/QuickSort2/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/QuickSort2/ArquivosdeSaida");
    criarDiretorio("output/QuickSort2/ArquivosdeSaida/Crescente");
    criarDiretorio("output/QuickSort2/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/QuickSort2/ArquivosdeSaida/Randomico");

    criarDiretorio("output/QuickSort2/ArquivosdeTempo");
    criarDiretorio("output/QuickSort2/ArquivosdeTempo/Crescente");
    criarDiretorio("output/QuickSort2/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/QuickSort2/ArquivosdeTempo/Randomico");

    criarDiretorio("output/QuickSort3/ArquivosdeEntrada");
    criarDiretorio("output/QuickSort3/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/QuickSort3/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/QuickSort3/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/QuickSort3/ArquivosdeSaida");
    criarDiretorio("output/QuickSort3/ArquivosdeSaida/Crescente");
    criarDiretorio("output/QuickSort3/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/QuickSort3/ArquivosdeSaida/Randomico");

    criarDiretorio("output/QuickSort3/ArquivosdeTempo");
    criarDiretorio("output/QuickSort3/ArquivosdeTempo/Crescente");
    criarDiretorio("output/QuickSort3/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/QuickSort3/ArquivosdeTempo/Randomico");

    criarDiretorio("output/HeapSort/ArquivosdeEntrada");
    criarDiretorio("output/HeapSort/ArquivosdeEntrada/Crescente");
    criarDiretorio("output/HeapSort/ArquivosdeEntrada/Decrescente");
    criarDiretorio("output/HeapSort/ArquivosdeEntrada/Randomico");

    criarDiretorio("output/HeapSort/ArquivosdeSaida");
    criarDiretorio("output/HeapSort/ArquivosdeSaida/Crescente");
    criarDiretorio("output/HeapSort/ArquivosdeSaida/Decrescente");
    criarDiretorio("output/HeapSort/ArquivosdeSaida/Randomico");

    criarDiretorio("output/HeapSort/ArquivosdeTempo");
    criarDiretorio("output/HeapSort/ArquivosdeTempo/Crescente");
    criarDiretorio("output/HeapSort/ArquivosdeTempo/Decrescente");
    criarDiretorio("output/HeapSort/ArquivosdeTempo/Randomico");
}

#endif
