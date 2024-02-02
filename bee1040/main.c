#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float N1, float N2, float N3, float N4)
{
    float media;
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1)/10;
    return media;
}

int main()
{
    float N1, N2, N3, N4, media;
    scanf("%f %f %f %f", &N1, &N2,&N3, &N4);

    media = calculaMedia(N1, N2, N3, N4);

    printf("media: %.1f\n", media);

    if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(media >=5 && media <7)
    {
        printf("Aluno em exame.\n");
    }

    float notaExame, mediaFinal;
    scanf("%f", &notaExame);

    mediaFinal = (media + notaExame)/2;

    printf("nota do exame: %.1f\n", notaExame);

    if (mediaFinal >=5)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", mediaFinal);

    return 0;
}

#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, notaExame, mediaFinal;

    // Leitura das notas N1, N2, N3, N4
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Cálculo da média com pesos
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        // Leitura da nota do exame
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);

        // Cálculo da média final
        mediaFinal = (media + notaExame) / 2;

        if (mediaFinal >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", mediaFinal);
    }

    return 0;
}

