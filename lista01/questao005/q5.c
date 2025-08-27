#include <stdio.h>
#include <stdlib.h>
int main(void){
//declaraçao de variaveis
float n1,p1,n2,p2,media=0;
    printf("coloque a primeira nota: ");
    scanf("%f",&n1);
    printf("coloque o peso da primeira nota: ");
    scanf("%f",&p1);
    printf("coloque a segunda nota: ");
    scanf("%f",&n2);
    printf("coloque o peso da segunda nota: ");
    scanf("%f",&p2);
    //processamento e saida
    media=((n1*p1)+(n2*p2))/(p1+p2);
 printf("a media e: %.2f",media);
return 0;
}

