#include <stdio.h>


int main() {
    int impar[100]; 
    int par[100];  
    int impar_count = 0;
    int par_count = 0;

    while (1) {
        int x;
        printf("Digite um número: ");
        scanf("%d", &x);

        int found = 0;
        for (int i = 0; i < impar_count; i++) {
            if (impar[i] == x) {
                printf("O número %d já existe na lista.\n", x);
                found = 1;
                break;
            }
        }

        if (!found) {
            for (int i = 0; i < par_count; i++) {
                if (par[i] == x) {
                    printf("O número %d já existe na lista.\n", x);
                    found = 1;
                    break;
                }
            }
        }

        if (!found) {
            if (x % 2 == 0) {
                par[par_count++] = x;
                printf("Número %d adicionado à lista de pares: [", x);
                for (int i = 0; i < par_count; i++) {
                    printf("%d", par[i]);
                    if (i < par_count - 1) {
                        printf(", ");
                    }
                }
                printf("]\n");
            } else {
                impar[impar_count++] = x;
                printf("Número %d adicionado à lista de ímpares: [", x);
                for (int i = 0; i < impar_count; i++) {
                    printf("%d", impar[i]);
                    if (i < impar_count - 1) {
                        printf(", ");
                    }
                }
                printf("]\n");
            }
        }

        char continuar;
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);
        if (continuar != 's' && continuar != 'S') {
            break;
        }
    }

    return 0;
}