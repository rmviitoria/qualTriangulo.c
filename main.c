/******************************************************************************

 Solicite ao usuário que informe 3 valores inteiros. 
 Depois disso, imprima uma das seguintes mensagens: 
 TRI NGULO EQUILÁTERO, TRI NGULO ESCALENO, TRI NGULO ISÓSCELES ou NÃO FORMA UM TRI NGULO. 
 Para a última mensagem, é importante notar que nem todo conjunto de 3 valores formam um triângulo, 
 pois os valores devem obedecer à Condição de Existência de um Triângulo: 
 um de seus lados deve ser maior que o valor absoluto (módulo) da diferença dos outros dois lados 
 e menor que a soma dos outros dois lados. Ou seja:
( | b - c | < a < b + c) e ( | a - c | < b < a + c) e ( | a - b | < c < a + b)
Exemplo de valores que formam um triângulo: 16, 20 e 30
Exemplo de valores que não formam um triângulo: 20, 15 e 5



*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite três valores inteiros separados por espaço: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < b + c) && (b < a + c) && (c < a + b)) {

        if (a == b && b == c) {
            printf("TRI NGULO EQUILÁTERO\n");
        } else if (a != b && b != c && a != c) {
            printf("TRI NGULO ESCALENO\n");
        } else {
            printf("TRI NGULO ISÓSCELES\n");
        }
    } else {
        printf("NÃO FORMA UM TRI NGULO\n");
    }

    return 0; 
}
