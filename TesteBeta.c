#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "structures.h"

int main(){
    struct mesa restaurante[25];
    struct item cardapio[3];
    int contCardapio =0, contRestaurante = 0, opcao=0, numeroMesa=0;

    do{
    opcao = menu();

    switch(opcao){
    case 1:{
    cadastrarItens(&cardapio[contCardapio]);
    contCardapio++;
    break;
    }
    case 2:{
        if(contCardapio==0)
            printf("Nenhum item cadastrado no cardapio. \n");
        else{
    incluirItens(cardapio, &restaurante[contRestaurante]);
    contRestaurante++;
        }
    break;
    }
    case 3:{
    int tal = 0;
    printf("Digite qual mesa deseja fechar: ");
    scanf("%d", &tal);
    somaItensMesa(&restaurante[tal]);
    printf("Valor total: R$ %f",restaurante[tal].total );
    break;
    default:{
    printf("Opcao invalida. \n");
        }
    }
    }
    }
    while (opcao > 0);

}
