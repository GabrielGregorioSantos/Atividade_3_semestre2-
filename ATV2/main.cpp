#include <iostream>

using namespace std;

void converterMinutosParaHora(int minutosTotais, int &hora, int &minuto) {
    hora = minutosTotais / 60;       //calculo das horas
    minuto = minutosTotais % 60;    //caluculo dos mnts que restaram
}

int main() {
    int minutosPassados;
    int horaAtual, minutoAtual;

    cout << "Digite o total de minutos passados desde meia-noite: ";
    cin >> minutosPassados;

    converterMinutosParaHora(minutosPassados, horaAtual, minutoAtual);


    cout << "Hora atual: " << horaAtual << " horas e " << minutoAtual << " minutos." << endl;

    return 0;
}
