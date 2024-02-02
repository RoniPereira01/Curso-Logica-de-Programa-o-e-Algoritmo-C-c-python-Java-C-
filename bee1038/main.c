#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;

    scanf("%d", &codigo);
    scanf("%d", &quantidade);

    float total = 0;

    switch (codigo) {
  case 1:
    total += 4.00 * quantidade;
    printf("Total: R$ %.2f\n", total);
    break;
  case 2:
    total += 4.50 * quantidade;
    printf("Total: R$ %.2f\n", total);
    break;
  case 3:
    total += 5.00 * quantidade;
    printf("Total: R$ %.2f\n", total);
    break;
  case 4:
    total += 2.00 * quantidade;
    printf("Total: R$ %.2f\n", total);
    break;
  case 5:
    total += 1.50 * quantidade;
    printf("Total: R$ %.2f\n", total);
    break;

  default:
    printf("Codigo invalido!\n");
    break;
}
    return 0;
}
