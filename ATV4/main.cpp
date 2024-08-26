#include <iostream>
#include <iomanip>

//fiz alguns comentários nas funções para me lembrar o que cada uma delas faz várias funções assim fica bem confuso.

using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

// Função para ler uma matriz MxN
void lerMatriz(int matriz[MAX_M][MAX_N], int m, int n) {
    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }
}

// Função para imprimir uma matriz MxN
void imprimirMatriz(int matriz[MAX_M][MAX_N], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }
}

// Função para calcular a matriz transposta
void calcularTransposta(int matriz[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

// Função para multiplicar a matriz por um fator
void multiplicarPorFator(int matriz[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int m, int n, int fator) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz[i][j] * fator;
        }
    }
}

// Função para adicionar duas matrizes
void adicionarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int m, n;
    cout << "Digite o número de linhas e colunas da matriz: ";
    cin >> m >> n;

    if (m > MAX_M || n > MAX_N) {
        cout << "Dimensões da matriz fora dos limites permitidos." << endl;
        return 1;
    }

    int matriz[MAX_M][MAX_N];
    int matrizTransposta[MAX_N][MAX_M];
    int matrizMultiplicada[MAX_M][MAX_N];
    int matrizAdicionada[MAX_M][MAX_N];
    int fator;

    cout << "Leitura da matriz:" << endl;
    lerMatriz(matriz, m, n);

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz, m, n);

    calcularTransposta(matriz, matrizTransposta, m, n);
    cout << "Matriz transposta:" << endl;
    imprimirMatriz(matrizTransposta, n, m);

    cout << "Digite o fator para multiplicação: ";
    cin >> fator;
    multiplicarPorFator(matriz, matrizMultiplicada, m, n, fator);
    cout << "Matriz multiplicada por " << fator << ":" << endl;
    imprimirMatriz(matrizMultiplicada, m, n);

    int outraMatriz[MAX_M][MAX_N];
    cout << "Digite a segunda matriz (deve ter as mesmas dimensões que a primeira):" << endl;
    lerMatriz(outraMatriz, m, n);

    adicionarMatrizes(matriz, outraMatriz, matrizAdicionada, m, n);
    cout << "Matriz resultante da adição:" << endl;
    imprimirMatriz(matrizAdicionada, m, n);

    return 0;
}
