#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int v, c1=0, c2=0, vn=0, vb=0;
    char s,n;

    printf("BEM VINDOS, INICIE AS VOTAÇÕES!");

    do{

        printf("\n\n 1 - Candidato 1\n 2 - Candidato 2\n 3 - Voto Nulo\n 4 - Voto em Branco");
        printf("\nDigite o número corespondente ao seu voto e aperte ENTER: ");
        scanf("%i",&v);

        switch (v)
        {
        case 0:
            system("clear");
            printf("\nVotação enrecerrada! ");
            break;
        case 1:
            c1=c1+1;
            system("clear");
            printf(" Candidato 1 - Voto registrado com sucesso!");
            break;
        case 2:
            c2=c2+1;
            system("clear");
            printf(" Candidato 2 - Voto registrado com sucesso!");
            break;
        case 3:
            vn=vn+1;
            system("clear");
            printf(" Voto Nulo - Voto registrado com sucesso!");
            break;
        case 4:
            vb=vb+1;
            system("clear");
            printf(" Voto em Branco - Voto registrado com sucesso!");
            break;

        default:
            system("clear");
            printf("OPS - Opção INVALIDA!\n\n");
            printf("Digite um opção valida!");
            break;
        }
        
    }while (v != 0);

    printf("Resultados:\n   Candidato 1\t %i\n   Candidato 2\t %i\n   Votos Nulos\t %i\n   Votos Brancos %i\n\n", c1,c2,vn,vb);
    printf("Deseja continuar a votação? Pressione (s)sim ou (n)não: ");
    scanf("%u", &s,&n);


    return 0;
}