#include <iostream>
using namespace std;

int fibonacciRecursivo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
    }
}

int fibonacciIterativo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int posicao;
    cout << "Informe a posicao desejada na sequencia de Fibonacci: ";
    cin >> posicao;

    int resultadoRecursivo = fibonacciRecursivo(posicao);
    int resultadoIterativo = fibonacciIterativo(posicao);

    cout << "Fibonacci Recursivo na posicao " << posicao << ": " << resultadoRecursivo << endl;
    cout << "Fibonacci Iterativo na posicao " << posicao << ": " << resultadoIterativo << endl;

    return 0;
}
