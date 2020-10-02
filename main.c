#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int x,y;
    printf("Digite as coordenadas do seu dardo (x,y)\n");
    printf("Digite a coordenada x: ");
    scanf("%d",&x);
    printf("Digite a coordenada y: ");
    scanf("%d",&y);
    if ((x>10 || x<-10) || (y>10 ||  x<-10)){
        printf("Que pena! Você errou o alvo =(");
    }else if ((x>=-10 && x<=10) && (y>=-10 && y<=10)){
        printf("Parabéns Você ganhou 1 ponto!");
    }else if ((x>=-5 && x<=5) && (y>=-5 && y<=5)){
        printf("Parabéns Você ganhou 5 ponto!");
    }else if ((x>=-1 && x<=1)&& (y>=-1 && y<=1)){
        printf("Parabéns Você ganhou 10 ponto!");
    }
    system("pause");
    return 0;
}
