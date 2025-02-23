#include <stdio.h>

int main (){

    printf ("Desfio cartas trunfo \n");

    \\estrutura para montar os dados da carta//
    struct carta {
        char estado [4];
        char codigo [3];
        char cidade [30];
        int populacao;
        float area;
        float Pib;
        int turismo;
};

struct carta carta1 , carta2 ;

\\entrada dos dados da primeira carta//

printf ("Insira os dados da primeira carta :\n");

printf ("Estado (A-H): ");
scanf ("%s", carta1. estado);

printf ("Código da carta (ex: A01) : ");
scanf ("%s", carta1.codigo) ;

printf ("Nome da cidade : ");
scanf ("%s", carta1.cidade);

printf ("População : ");
scanf("%d", &carta1.populacao);

printf ("Area (em Km²): ");
scanf ("%f", &carta1.area);

printf ("Pib :");
scanf ("%f", &carta1.Pib);

printf ("Número de pontos turísticos :");
scanf ("%d", &carta1.turismo);

\\entrada dos dados da segunda carta//

printf ("Insira os dados da segunda carta : \n");
printf ("Estado (A-H) : ");
scanf ("%s", carta2.estado);

printf ("Código da carta (ex: A02): ");
scanf ("%s", carta2.codigo);

printf ("Nome da cidade : ");
scanf("%s", carta2.cidade);

printf ("População :");
scanf ("%d", &carta2.populacao);

printf ("Area (em Km²): ");
scanf ("%f", &carta2.area);

printf ("Pib :");
scanf ("%f", &carta2.Pib);

printf("Número de pontos turísticos :");
scanf("%d", &carta2.turismo);

\\Exibindo os dados das cartas//

printf ("\nDados da primeira carta : \n");

printf ("Estado : %s\n", carta1.estado);
printf("Código da carta : %s\n", carta1.codigo);
printf ("Nome da cidade : %s\n", carta1.cidade);
printf("População: %d\n", carta1.populacao);
printf("Area (em Km²): %.2f\n", carta1.area);
printf ("Pib : %.2f\n", carta1.Pib);
printf("Número de pontos turísticos :%d\n", carta1.turismo);

\\Divisão entre carta1 e carta2//

printf ("\nDados da segunda carta :\n");

printf ("Estado : %s\n", carta2.estado);
printf ("Código da carta : %s\n", carta2.codigo);
printf("Nome da cidade : %s\n", carta2.cidade);
printf("População : %d\n", carta2.cidade);
printf("Area (em Km²): %.2f\n",carta2.area);
printf("Pib : %.2f\n", carta2.Pib);
printf ("Número de pontos turísticos : %d\n", carta2.turismo);


return 0;



}
