#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
    
    srand(time(NULL));


    int n1,n2,n3;

    while(n1 > 5){

        int r = (rand() % 3) + (1);
        printf("Faca sua escolha 1.Pedra 2.Papel 3.Tesoura\n");
        scanf("%d", &n2);
        while(n2 != 1 && n2 != 2 && n2 != 3){
        printf("Faca uma escolha valida 1.Pedra 2.Papel 3.Tesoura\n");
        scanf("%d", &n2);
        }
        if(n2 == 1 && r == 2){
            printf("Voce perdeu");
        }else if(n2 == 1 && r == 3){
            printf("Voce ganhou");
        }else if(n2 == 1 && r == 1){
            printf("Deu empate");
        }

        if(n2 == 2 && r == 1){
            printf("Voce ganhou");
        }else if(n2 == 2 && r == 2){
            printf("Deu empate");
        }else if(n2 == 2 && r == 3){
            printf("Voce perdeu");
        }

        if(n2 == 3 && r == 1){
            printf("Voce perdeu");
        }else if(n2 == 3 && r == 2){
            printf("Voce ganhou");
        }else if(n2 == 3 && r == 3){
            printf("Deu empate");
        }
        printf("\nVoce deseja jogar novamente? 1.Sim 2.Nao\n");
        scanf("%d", &n3);
        while(n3 != 1 && n3 != 2){
        printf("Insira um numero valido 1.Sim 2.Nao\n");
        scanf("%d", &n3);
        }

        if(n3 == 1){
            n1 = 7;
        }else{
            n1 = 2;
        }
    }






}