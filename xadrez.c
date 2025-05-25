#include <stdio.h>

//Coloca as peças pedidas em funções e compacta o codigo 
void movimento_rainha(){

    printf("rainha:\n");
    printf("esquerda\nesquerda\nesquerda\nesquerda\nesquerda\nesquerda\nesquerda\nesquerda\n");
            printf("-----------------------------------\n");
}


//Cria um laço aninhado com condição pra evitar desordem
void movimento_bispo() {
    printf("bispo:\n");
    for (int linha = 1; linha <= 5; linha++) {
        for (int coluna = 1; coluna <= 2; coluna++) {
            printf(coluna == 1 ? "direita  " : "cima  ");
        }
        printf("\n"); 
    }
    printf("-----------------------------------\n");
}


void movimento_torre(){
    
    printf("torre:\n");
            printf("esquerda\nesquerda\nesquerda\nesquerda\nesquerda\n");
            printf("-----------------------------------\n");
}



int main()
{
    //invoca ambas funções
    movimento_bispo();
    movimento_rainha();
    movimento_torre();

        
            printf("Cavalo:\n");
            for (int cavalov = 1; cavalov <= 2; cavalov++) {
                printf("Baixo\n");
                    if (cavalov == 2) { 
                for (int cavaloh = 1; cavaloh <= 1; cavaloh++) {
                    printf("Esquerda\n");
                }
            }
        }
                printf("-----------------------------------\n");
    
    return 0;
}