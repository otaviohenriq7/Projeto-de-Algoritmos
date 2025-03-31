#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <fstream>

#include "funcoes.h"
#include "criacaoArquivo.h"
#include "algoritmos.h"
#include "quickSort.h"
#include "heapSort.h"

using namespace std;

void menu(){

    cout << "\t\t ===== ALGORITMOS DE ORDENACAO =====" << endl;
    cout << "Selecione uma opcao: " << endl;
    cout << "" << endl;
    cout << "Fechar programa - Digite 0" << endl;
    cout << "Insertion Sort - Digite 1" << endl;
    cout << "Bubble Sort - Digite 2" << endl;
    cout << "Selection Sort - Digite 3" << endl;
    cout << "Shell Sort - Digite 4" << endl;
    cout << "Merge Sort - Digite 5" << endl;
    cout << "Quick Sort [VERSAO 1] - Digite 6" << endl;
    cout << "Quick Sort [VERSAO 2] - Digite 7" << endl;
    cout << "Quick Sort [VERSAO 3] - Digite 8" << endl;
    cout << "Heap Sort - Digite 9" << endl;
    cout << "Heap Minimo - Digite 10" << endl;
    cout << "Heap Extract Min - Digite 11" << endl;
    cout << "Heap Increase Key - Digite 12" << endl;
    cout << "Max Heap Insert - Digite 13" << endl;
    cout << "\nOperacao Desejada: ";
}

void tipoEntrada(){
    system("cls");

    cout << "\t\t ===== TIPO DE ENTRADA =====" << endl;
    cout << "Selecione uma opcao: " << endl;
    cout << "Fechar programa - Digite 0" << endl;
    cout << "Crescente - Digite c" << endl;
    cout << "Decrescente - Digite d" << endl;
    cout << "Randomico - Digite r" << endl;

    cout << "\nTipo de entrada Desejada: ";
}

void TamanhoEntrada(){
    system("cls");

    cout << "\t\t ===== TAMANHO DO VETOR =====" << endl;
    cout << "Selecione o tamanho do vetor: " << endl;
    cout << "Tamanho 10 - Digite 10" << endl;
    cout << "Tamanho 100 - Digite 100" << endl;
    cout << "Tamanho 1000 - Digite 1000" << endl;
    cout << "Tamanho 10000 - Digite 10000" << endl;
    cout << "Tamanho 100000 - Digite 100000" << endl;
    cout << "Tamanho 1000000 - Digite 1000000" << endl;

    cout << "\nQual o tamanho do vetor que deseja?: ";
}

void executarISCrescente(int tamanho);
void executarISDecrescente(int tamanho);
void executarISRandomico(int tamanho);
void executarBSCrescente(int tamanho);
void executarBSDecrescente(int tamanho);
void executarBSRandomico(int tamanho);
void executarSSCrescente(int tamanho);
void executarSSDecrescente(int tamanho);
void executarSSRandomico(int tamanho);
void executarSHSCrescente(int tamanho);
void executarSHSDecrescente(int tamanho);
void executarSHSRandomico(int tamanho);
void executarMSCrescente(int tamanho);
void executarMSDecrescente(int tamanho);
void executarMSRandomico(int tamanho);
void executarQS1Crescente(int tamanho);
void executarQS1Decrescente(int tamanho);
void executarQS1Randomico(int tamanho);
void executarQS2Crescente(int tamanho);
void executarQS2Decrescente(int tamanho);
void executarQS2Randomico(int tamanho);
void executarQS3Crescente(int tamanho);
void executarQS3Decrescente(int tamanho);
void executarQS3Randomico(int tamanho);
void executarHSCrescente(int tamanho);
void executarHSDecrescente(int tamanho);
void executarHSRandomico(int tamanho);

#endif
