#include <stdio.h>
#include <stdlib.h>
int main(void){
//declaraçao de variaveis
float n1,n2,n3,media=0;
printf("Entre com a primeira nota:");
scanf("%f",&n1);

printf("Entre com a segunda nota:");
scanf("%f",&n2);

printf("Entre com a terceira nota:");
scanf("%f",&n3);

//processamento e saida de dados
media= (n1+n2+n3)/3;
printf("A media e: %.2f\n",media);
return 0;
}

