#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>




typedef struct lista {
    int numero_conta;
    char nome_cliente[40];
    float saldo;
    struct lista* prox;
} Lista;

//Declara��o de fun��es.
Lista* inserir_cadastros(Lista* primeiro);
void listar_cadastros(Lista* primeiro);
Lista* excluir_cadastros(Lista* primeiro);
void alterar_cadastros(Lista* primeiro);
void limpa_linha(void); // fun��o para limpar a sujeira no buffer

void limpa_linha() {
    scanf("%*[^\n]");
    scanf("%*c");
}

Lista* inserir_cadastros(Lista* primeiro) {

    Lista cliente;
    Lista *atual = primeiro;
    char identificador = 'F';

    //Lendo as informa��es do cliente.
    printf("  Numero da Conta: ");
    scanf("%d", &cliente.numero_conta);
    limpa_linha();
    printf ("\n");
    printf("  Nome: ");
    fgets(cliente.nome_cliente, 40, stdin);
    printf ("\n");
    printf("  Saldo: ");
    scanf("%f", &cliente.saldo);
    limpa_linha();

    printf ("\n");

    //Verificando se o cadastro j� existe.
    for (atual = primeiro; atual != NULL; atual = atual->prox) {
        if (atual->numero_conta == cliente.numero_conta) {
            identificador = 'V';
            break;
        }
    }

    if ( identificador != 'V' && (strlen(cliente.nome_cliente) != 1)) {

        //Alocando os espa�os e guardando as informa��es do cliente.
        Lista* NovoCliente = malloc (sizeof(Lista));
        strcpy(NovoCliente->nome_cliente, cliente.nome_cliente);
        NovoCliente->saldo = cliente.saldo;
        NovoCliente->numero_conta = cliente.numero_conta;
        NovoCliente->prox = primeiro;
        printf("  Cadastro realizado com sucesso.");
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
        return NovoCliente;
    } else {
        printf("  Cadastro invalido!");
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
        return primeiro;
    }
}


void listar_cadastros(Lista* primeiro) {

    Lista* atual;//Ponteiro para percorrer a lista sem perder a refer�ncia do primeiro elemento da lista.

    //Imprimindo os restaurantes da lista, e suas repectivas informa��es.
    for (atual = primeiro ; atual != NULL; atual = atual->prox) {
        printf("\n  Conta: ");
        printf("%d", atual->numero_conta);
        printf("\n  Nome: ");
        printf("%s", atual->nome_cliente);
        printf("  Saldo: ");
        printf("%.2f", atual->saldo);
        printf("\n\n");
    }
    if ( primeiro == NULL)
        printf("  Nenhum Cliente Cadastrado.");
    printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
}

Lista* excluir_cadastros(Lista* primeiro) {

    Lista *anterior = NULL;//Ponteiro para saber o elemento anterior ao elemento atual da lista.
    Lista *atual = primeiro;//Ponteiro para percorrer a lista sem perder o primeiro elemento da lista.
    int numero_conta = 0;

//Requisitando e lendo o c�digo do cliente a ser exclu�do.
    printf("  Codigo do cliente a ser excluido: ");
    scanf("%d",&numero_conta);
    limpa_linha();

//Procurando o cliente na lista.
    while( atual != NULL && atual->numero_conta != numero_conta) {
        anterior = atual;
        atual = atual->prox;
    }

//Mensagem caso o cliente n�o seja encontrado.
    if (atual == NULL) {
        printf("\n  Cliente nao encontrado.");
        printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
        return primeiro;
    }

//Excluindo o primeiro cliente da lista.
    if (anterior == NULL) {
        printf("\n  Conteudo excluido com sucesso.");
        primeiro= atual->prox;
//Excluindo um cliente do meio da lista.
    } else {
        printf("\n  Conteudo excluido com sucesso.");
        anterior->prox= atual->prox;
    }

//Desalocando o espa�o da mem�ria.
    free(atual);
    printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
    return primeiro;
}

//Fun��o para alterar cadastros.
void alterar_cadastros(Lista *primeiro) {

    int numero_contasub;
    char nome_substituto[40];
    float saldo_sub;
    Lista *atual = primeiro;
    int encontrado;

    //Requisitando e lendo o c�digo do cliente a ser alterado.
    printf("  Codigo do cliente a ser alterado: ");
    scanf("%d", &numero_contasub);
    limpa_linha();

    encontrado = 0;
    // Busca pelo cadastro
    for (atual = primeiro; atual != NULL; atual = atual->prox) {
        if (atual->numero_conta == numero_contasub) {
            encontrado = 1;
            printf("\n  Novo nome: ");
            fgets(nome_substituto, 40, stdin);
            strcpy(atual->nome_cliente, nome_substituto);
            printf("\n  Novo Saldo: ");
            scanf("%f", &saldo_sub);
            limpa_linha();
            printf ("\n");
            atual->saldo = saldo_sub;
            printf("Dados alterados com sucesso!");
        }
    }
    if (!encontrado) {
        printf("\nCliente nao encontrado!");
    }

    printf("\n\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
}
