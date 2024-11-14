#include <stdio.h>

int main()
{
    float metros;
    
    printf("Digite um valor em metros: ");
    scanf("%f",&metros);
    
    float decimetros = metros*10;
    float centimetros = metros*100;
    float milimetros = metros*1000;
    
    printf("\nValor em decimetros: %.2f dm\n",decimetros);
    printf("\nValor em decimetros: %.2f cm\n",centimetros);
    printf("\nValor em decimetros: %.2f mm\n",milimetros);
    
    
 

    return 0;
}
