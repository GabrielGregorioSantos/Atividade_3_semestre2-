#include <iostream>

using namespace std;

void idadeEmAnosMesesDias(int diasTotais, int &anos, int &meses, int &dias) {
    const int DIAS_EM_UM_ANO = 365;
    const int DIAS_EM_UM_MES = 30;


    anos = diasTotais / DIAS_EM_UM_ANO;

    diasTotais %= DIAS_EM_UM_ANO;

    meses = diasTotais / DIAS_EM_UM_MES;

    dias = diasTotais % DIAS_EM_UM_MES;
}

int main() {
    int idadeEmDias;
    int anos, meses, dias;

    cout << "Digite a idade em dias: ";
    cin >> idadeEmDias;

    idadeEmAnosMesesDias(idadeEmDias, anos, meses, dias);

    cout << "Idade: " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl;

    return 0;
}
