#include <iostream>

using namespace std;

void converterSegundos(int segundosTotais, int &horas, int &minutos, int &segundos) {
    horas = segundosTotais / 3600;        // 1 hora = 3600 segundos
    segundosTotais %= 3600;               // Calculo do Resto dos segundos após calcular as horas

    minutos = segundosTotais / 60;        // 1 minuto = 60 segundos
    segundos = segundosTotais % 60;      // Calculo do resto dos segundos após calcular os minutos
}

int main() {
    int segundosEntrada;
    int horas, minutos, segundos;

    cout << "Digite o tempo de duração em segundos: ";
    cin >> segundosEntrada;

    converterSegundos(segundosEntrada, horas, minutos, segundos);

    cout << "Tempo: " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << endl;

    return 0;
}
