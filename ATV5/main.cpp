/*A pesquisa binária é um algoritmo eficiente para encontrar um elemento específico em um vetor ordenado. O algoritmo trabalha dividindo o vetor em duas partes e descartando metade dos elementos a cada iteração, até encontrar o elemento desejado ou determinar que ele não está no vetor. É um exemplo clássico de algoritmo de busca que opera em tempo O(log n), onde n é o número de elementos no vetor.

Passos do Algoritmo de Pesquisa Binária
Inicialização:

Defina os índices de início (esquerda) e fim (direita) do vetor.
Divisão:

Calcule o índice do meio (meio), que é a média entre esquerda e direita.
Comparação:

Compare o valor no índice meio com o valor procurado.
Se forem iguais, retorne o índice meio.
Se o valor procurado for menor que o valor no índice meio, ajuste direita para meio - 1.
Se o valor procurado for maior, ajuste esquerda para meio + 1.
Repetição:

Repita o processo até esquerda ser maior que direita.
Conclusão:

Se o valor não for encontrado, retorne -1.*/


//isso foi o que encontrei na internet sobre busca binária


#include <iostream>
using namespace std;

int pesquisaBinaria(int vetor[], int tamanho, int valor) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == valor) {
            return meio; // caso o valor seja encontrado
        }
        if (vetor[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1; // caso o valor não seja encontrado
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int valoresParaBuscar[] = {75, 22, 90};
    for (int i = 0; i < 3; ++i) {
        int resultado = pesquisaBinaria(vetor, tamanho, valoresParaBuscar[i]);
        if (resultado != -1) {
            cout << "Valor " << valoresParaBuscar[i] << " encontrado no indice " << resultado << "." << endl;
        } else {
            cout << "Valor " << valoresParaBuscar[i] << " nao encontrado no vetor." << endl;
        }
    }

    return 0;
}
