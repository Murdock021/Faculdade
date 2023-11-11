/* Algoritmo: para o segundo algoritmo você deverá apresentar o resultado da potenciação, lembrando que a 
estrutura da potenciação é a seguinte:

Você deverá atentar-se para a lógica entre o número de repetições e a variável b (Dica: observe que a variável b é 
quem irá controlar a quantidade de repetições)
Escreva o algoritmo:
*/

#include <stdio.h>

int main() {
   
    int a, b, resultado = 1;

   
    printf("Informe a base (a): ");
    scanf("%d", &a);

    printf("Informe o expoente (b): ");
    scanf("%d", &b);

    
    for (int i = 0; i < b; i++) {
        resultado *= a;
    }

   
    printf("O resultado de %d elevado a %d e: %d\n", a, b, resultado);

    return 0;
}
