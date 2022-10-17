#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
    
    srand(time(NULL));


    int n1,n2,n3;

    while(n1 > 5){

        int r = (rand() % 5) + (1);
        printf("Faca sua escolha 1.Pedra 2.Papel 3.Tesoura 4.Lagarto 5.Spock\n");
        scanf("%d", &n2);
        while(n2 != 1 && n2 != 2 && n2 != 3 && n2!= 4 && n2 != 5){
        printf("Faca uma escolha valida 1.Pedra 2.Papel 3.Tesoura 4.Lagarto 5.Spock\n");
        scanf("%d", &n2);
        }
        if(n2 == 1 && r == 2){
            printf("Voce perdeu");
        }else if(n2 == 1 && r == 3){
            printf("Voce ganhou");
        }else if(n2 == 1 && r == 1){
            printf("Deu empate");
        }else if(n2 == 1 && r == 4){
            printf("Voce ganhou");
        }else if(n2 == 1 && r == 5){
            printf("Voce perdeu");
        }

        if(n2 == 2 && r == 1){
            printf("Voce ganhou");
        }else if(n2 == 2 && r == 2){
            printf("Deu empate");
        }else if(n2 == 2 && r == 3){
            printf("Voce perdeu");
        }else if(n2 == 2 && r == 4){
            printf("Voce perdeu");
        }else if(n2 == 2 && r == 5){
            printf("Voce ganhou");
        }

        if(n2 == 3 && r == 1){
            printf("Voce perdeu");
        }else if(n2 == 3 && r == 2){
            printf("Voce ganhou");
        }else if(n2 == 3 && r == 3){
            printf("Deu empate");
        }else if(n2 == 3 && r == 4){
            printf("Voce veceu");
        }else if(n2 == 3 && r == 5){
            printf("Voce perdeu");
        }

        if(n2 ==  4 && r == 1){
            printf("Voce Perdeu");
        }else if(n2 == 4 && r == 2){
            printf("Voce venceu");
        }else if(n2 == 4 && r == 3){
            printf("Voce perdeu");
        }else if(n2 == 4 && r == 4){
            printf("Deu empate");
        }else if(n2 == 4 && r == 5){
            printf("Voce venceu");
        }

        if(n2 == 5 && r == 1){
            printf("Voce venceu");
        }else if(n2 == 5 && r == 2){
            printf("Voce perdeu");
        }else if(n2 == 5 && r == 3){
            printf("Voce venceu");
        }else if(n2 == 5 && r == 4){
            printf("Voce perdeu");
        }else if (n2 == 5 && r == 5){
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
