#include <iostream>
using namespace std;

int somatorioIterativo(int N) {
    if (N <= 0) {
        cerr << "Erro: N deve ser maior que zero." << endl;
        return -1;
    }

    int soma = 0;
    for (int i = 1; i <= N; ++i) {
        soma += i;
    }

    return soma;
}

int somatorioRecursivo(int N) {
    if (N <= 0) {
        cerr << "Erro: N deve ser maior que zero." << endl;
        return -1;
    }

    if (N == 1) {
        return 1;
    } else {
        return N + somatorioRecursivo(N - 1);
    }
}

int main() {
    int N, escolha;

    cout << "Digite o valor de N: ";
    cin >> N;

    if (N <= 0) {
        cerr << "Erro: N deve ser maior que zero." << endl;
        return 1;
    }

    cout << "Escolha o metodo (1 para Iterativo, 2 para Recursivo): ";
    cin >> escolha;

    int resultado;

    if (escolha == 1) {
        resultado = somatorioIterativo(N);
    } else if (escolha == 2) {
        resultado = somatorioRecursivo(N);
    } else {
        cerr << "Escolha invalida." << endl;
        return 1;
    }

    if (resultado != -1) {
        cout << "O somatorio de 1 a " << N << " é: " << resultado << endl;
    }

    return 0;
}
