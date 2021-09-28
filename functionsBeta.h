#include <stdlib.h>
#include <stdio.h>
struct item{
    char nome[20];
    float preco;
};

struct mesa{
    int numMesa;
    struct item pedidos[5];
    float total;
};
int menu (){
    int opcao;

    printf (" \n CARDAPIO \n\n");
    printf ("1 - Incluir Itens do Cardapio \n");
    printf ("2 - Cadastrar itens na mesa \n");
    printf ("3 - Fechar Mesa.\n");
    printf ("Digite a opcao desejada: \n");
    scanf("%d", &opcao);




    return opcao;
}

void cadastrarItens (struct item *i) {

    printf ("Digite o nome do prato: ");
    scanf ("%s", &i->nome);
    printf ("Digite o valor do prato: ");
    scanf ("%f", &i->preco);
}

void incluirItens(struct item *itens, struct mesa *m){
    int j=0, tal=0, cont =0, qtitem=0;
    //estrutura de repeticao para incluir 5
    for(j=0;j<=3;j++){
        printf("%d - %s \n", j, itens[j].nome);
    }
    printf("Quantos itens deseja inserir? ");
    scanf("%d", &qtitem);

    while (cont < qtitem) {
    printf("Digite qual item deseja inserir na mesa: ");
    scanf("%d",&tal);
    m->pedidos[cont] = itens[tal];
    cont++;
    }

    //cont vai ate 5
}


void somaItensMesa(struct mesa *m){
    int j=0;

    for(j=0;j<5;j++){
            if (m->pedidos[j].preco != 0)
       m->total +=m->pedidos[j].preco;
    }


}
