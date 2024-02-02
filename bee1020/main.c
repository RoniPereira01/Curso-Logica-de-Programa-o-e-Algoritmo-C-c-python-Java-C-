#include <stdio.h>

int main() {
    double valor;

    // Leitura do valor em ponto flutuante
    scanf("%lf", &valor);

    // Transformar o valor em centavos (multiplicar por 100)
    int centavos = (int)(valor * 100);

    // Array de valores das notas e moedas em centavos
    int notas_moedas[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    char *notas_moedas_nome[] = {"NOTAS:", "MOEDAS:"};

    printf("%s\n", notas_moedas_nome[0]);

    // Contagem das notas e moedas
    for (int i = 0; i < 12; i++) {
        int quantidade = centavos / notas_moedas[i];
        centavos = centavos % notas_moedas[i];

        if (i == 6) {
            printf("%s\n", notas_moedas_nome[1]);
        }

        if (notas_moedas[i] >= 100) {
            printf("%d nota(s) de R$ %.2lf\n", quantidade, notas_moedas[i] / 100.0);
        } else {
            printf("%d moeda(s) de R$ %.2lf\n", quantidade, notas_moedas[i] / 100.0);
        }
    }

    return 0;
}


