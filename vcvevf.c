#include<stdio.h>
int main()
{
    int a, i=0;
    float vc, ve[100], vf, soma, mve ;

    printf("********************Saiba o quanto voce precisa na VF********************\n\n");
    printf("Insira a quantidade de notas de VE's feitas e pressione enter:\n");
    scanf("%d", &a);
    printf("Agora, insira as notas de VE's feitas (pressione enter apos cada nota):\n");

    for(i=0;i<a;i++)    scanf("%f",&ve[i]);

    for(i=0;i<a;i++)    soma = soma + ve[i];

    mve = soma/a ;

    printf("Agora, insira a VC e pressione enter:\n");
    scanf("%f",&vc);

    vf = (20.0 - vc - mve)/2.0;

    if(vf<=4){
        vf = 4.0;
    }

    printf("%.2f", vf);

    return 0;
}
