#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    float num, s1 = 0, s2 = 0, bruto, cal, total;
    for(x = 1; x <= 4; x++){
        printf("Digite o %iº valor: ", x);
        scanf("%f", &num);
        if(x <= 2){
            s1 = s1 + num;
        }
        else{
            s2 = s2 + num;
        }
    }
    getchar();
    bruto = s1 + s2;
    cal = bruto * 0.2;
    printf("\nSoma dos 2 primeiros valores: R$%.2f \nSoma dos 2 últimos valores: R$%.2f \nValor bruto: R$%.2f", s1, s2, bruto);
    if(s1 > s2){
        total = bruto - cal;
        printf("\nDesconto: R$%.2f \nValor líquido: R$%.2f", cal, total);
    }
    else{
        total = bruto + cal;
        printf("\nAcréscimo: R$%.2f \nValor líquido: R$%.2f", cal, total);
    }
    getchar();
}
