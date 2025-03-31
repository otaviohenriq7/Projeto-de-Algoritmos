#include <iostream>
#include <cstdlib>
#include <chrono>
#include <fstream>

#include "funcoes.h"
#include "criacaoArquivo.h"
#include "main.h"
#include "algoritmos.h"
#include "quickSort.h"
#include "heapSort.h"

using namespace std;

void executarISCrescente(int tamanho){
    criacaoPasta();
    isCrescente(tamanho);
}

void executarISDecrescente(int tamanho){
    criacaoPasta();
    isDecrescente(tamanho);
}

void executarISRandomico(int tamanho){
    criacaoPasta();
    isRandomico(tamanho);
}

void executarBSCrescente(int tamanho){
    criacaoPasta();
    bsCrescente(tamanho);
}

void executarBSDecrescente(int tamanho){
    criacaoPasta();
    bsDecrescente(tamanho);
}

void executarBSRandomico(int tamanho){
    criacaoPasta();
    bsRandomico(tamanho);
}

void executarSSCrescente(int tamanho){
    criacaoPasta();
    ssCrescente(tamanho);
}

void executarSSDecrescente(int tamanho){
    criacaoPasta();
    ssDecrescente(tamanho);
}

void executarSSRandomico(int tamanho){
    criacaoPasta();
    ssRandomico(tamanho);
}

void executarSHSCrescente(int tamanho){
    criacaoPasta();
    shsCrescente(tamanho);
}

void executarSHSDecrescente(int tamanho){
    criacaoPasta();
    shsDecrescente(tamanho);
}

void executarSHSRandomico(int tamanho){
    criacaoPasta();
    shsRandomico(tamanho);
}

void executarMSCrescente(int tamanho){
    criacaoPasta();
    msCrescente(tamanho);
}

void executarMSDecrescente(int tamanho){
    criacaoPasta();
    msDecrescente(tamanho);
}

void executarMSRandomico(int tamanho){
    criacaoPasta();
    msRandomico(tamanho);
}

void executarQS1Crescente(int tamanho){
    criacaoPasta();
    qs1Crescente(tamanho);
}

void executarQS1Decrescente(int tamanho){
    criacaoPasta();
    qs1Decrescente(tamanho);
}

void executarQS1Randomico(int tamanho){
    criacaoPasta();
    qs1Randomico(tamanho);
}

void executarQS2Crescente(int tamanho){
    criacaoPasta();
    qs2Crescente(tamanho);
}

void executarQS2Decrescente(int tamanho){
    criacaoPasta();
    qs2Decrescente(tamanho);
}

void executarQS2Randomico(int tamanho){
    criacaoPasta();
    qs2Randomico(tamanho);
}

void executarQS3Crescente(int tamanho){
    criacaoPasta();
    qs3Crescente(tamanho);
}

void executarQS3Decrescente(int tamanho){
    criacaoPasta();
    qs3Decrescente(tamanho);
}

void executarQS3Randomico(int tamanho){
    criacaoPasta();
    qs3Randomico(tamanho);
}

void executarHSCrescente(int tamanho){
    criacaoPasta();
    hsCrescente(tamanho);
}

void executarHSDecrescente(int tamanho){
    criacaoPasta();
    hsDecrescente(tamanho);
}

void executarHSRandomico(int tamanho){
    criacaoPasta();
    hsRandomico(tamanho);
}

using namespace std;

int main(){
    int algoritmo;
    char opcao;
    int tamanho;

    do{
        menu();
        cin >> algoritmo;
        cin.ignore();

        if(algoritmo == 0){
            cout << "O programa foi finalizado... ADEUS!" << endl;
            exit(0);

        }else if (algoritmo != 10 && algoritmo != 11 && algoritmo != 12 && algoritmo != 13){
            tipoEntrada();
            cin >> opcao;

            TamanhoEntrada();
            cin >> tamanho;

            if(algoritmo == 1){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarISCrescente(tamanho);
                        break;
                    case 'd':
                        executarISDecrescente(tamanho);
                        break;
                    case 'r':
                        executarISRandomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 2){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                    break;
                    case 'c':
                        executarBSCrescente(tamanho);
                        break;
                    case 'd':
                        executarBSDecrescente(tamanho);
                        break;
                    case 'r':
                        executarBSRandomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 3){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarSSCrescente(tamanho);
                        break;
                    case 'd':
                        executarSSDecrescente(tamanho);
                        break;
                    case 'r':
                        executarSSRandomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 4){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarSHSCrescente(tamanho);
                        break;
                    case 'd':
                        executarSHSDecrescente(tamanho);
                        break;
                    case 'r':
                        executarSHSRandomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 5){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarMSCrescente(tamanho);
                        break;
                    case 'd':
                        executarMSDecrescente(tamanho);
                        break;
                    case 'r':
                        executarMSRandomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 6){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarQS1Crescente(tamanho);
                        break;
                    case 'd':
                        executarQS1Decrescente(tamanho);
                        break;
                    case 'r':
                        executarQS1Randomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 7){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarQS2Crescente(tamanho);
                        break;
                    case 'd':
                        executarQS2Decrescente(tamanho);
                        break;
                    case 'r':
                        executarQS2Randomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 8){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarQS3Crescente(tamanho);
                        break;
                    case 'd':
                        executarQS3Decrescente(tamanho);
                        break;
                    case 'r':
                        executarQS3Randomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }else if (algoritmo == 9){
                switch(opcao){
                    case 0:
                        cout << "O programa foi finalizado... ADEUS!" << endl;
                        exit(0);
                        break;
                    case 'c':
                        executarHSCrescente(tamanho);
                        break;
                    case 'd':
                        executarHSDecrescente(tamanho);
                        break;
                    case 'r':
                        executarHSRandomico(tamanho);
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
            }

            system("cls");
            cout << "Processo concluido. Arquivos gerados nas pastas correspondentes." << endl;

        }else{
            tipoEntrada();
            cin >> opcao;

            TamanhoEntrada();
            cin >> tamanho;

            int *vet = new int[tamanho];

            for(int i = 0; i < tamanho; i++){
                vet[i] = i;
            }

            cout << "Vetor Original: " << endl;
            printHeap(vet, tamanho);

            build_min_heap(vet, tamanho);
            cout << "Vetor depois do Build: " << endl;
            printHeap(vet, tamanho);

            if(algoritmo == 10){
                cout << "\nElemento Minimo do Vetor: " << heapMinimum(vet) << endl;

            }else if(algoritmo == 11){
                cout << "\nMenor Elemento: " << heap_extract_min(vet, tamanho) << endl;
                cout << endl << "\nVetor depois da remocao: " << endl;
                printHeap(vet, tamanho);

            }else if(algoritmo == 12){
                int indice;

                cout << "Digite a posicao que queira inserir o elemento 1000: (0 a " << tamanho - 1 << "): " << endl;
                cin >> indice;

                heap_increase_key(vet, indice, 1000);
                cout << "Vetor apos a modificacao: " << endl;
                printHeap(vet, tamanho);

            }else if(algoritmo == 13){
                tamanho = tamanho + 1;
                int *aux = new int[tamanho];

                for(int i = 0; i < tamanho - 1; i++){
                    aux[i] = vet[i];
                }

                max_heap_insert(aux, tamanho, 1000);

                cout << "Vetor depois da modificacao: " << endl;
                printHeap(aux, tamanho);
            }

            system("pause");
        }



    }while(true);

    return 0;
}
