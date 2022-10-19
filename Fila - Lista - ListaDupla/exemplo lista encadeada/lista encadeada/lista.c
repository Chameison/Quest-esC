
#include "head.h"

int main (void) {

//Declaração de variáveis
    Lista *primeiro= NULL;
    char opcao;

//Artifício para repetir o programa.
    while(opcao!='s')
    {

//Menu de opções
        printf(" %c----------------------------------------------------------------------------%c\n",201,187);
        printf(" | ");
        printf("\t\t\t     CADASTRO DE CLIENTES");
        printf("\t\t\t      |\n");
        printf(" %c----------------------------------------------------------------------------%c\n",200,188);
        printf("\t       %c----------%c\t\t\t\t       ",201,187);
        printf("\t\t\t               |   MENU   ");
        printf("|\t\t\t\t      \n");
        printf("   %c-----------%c----------%c------------%c \n",201,200,188,187);
        printf("   | <A>  Nova Conta                   |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <B>  Relatorio                    |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <C>  Excluir cadastro             |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <D>  Alterar cadastro             |\n");
        printf("   |-----------------------------------|\n");
        printf("   | <S>  Sair                         |\n");
        printf("   %c-----------------------------------%c",200,188);
        printf("\n\n\n\n");
//Lendo a opcao do menu
        opcao = getch();

//Menu de opções
        switch(opcao)
        {
        case 'A':
        case 'a':
//Inserindo a Conta.
            fflush(stdin);
            system("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t          NOVO CADASTRO     ");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            primeiro= inserir_cadastros(primeiro);
            getch();
            system("cls");
            break;
        case 'B':
        case 'b':
//Listando os Cadastros.
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t     CONTAS CADASTRADAS");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            listar_cadastros(primeiro);
            getch();
            system("cls");
            break;
        case 'C':
        case 'c':
//Excluindo contas do cadastro.
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t        EXCLUIR CADASTROS");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            primeiro= excluir_cadastros(primeiro);
            getch();
            system("cls");
            break;
        case 'D':
        case 'd':
//Alterando contas do cadastro.
            system ("cls");
            printf(" %c----------------------------------------------------------------------------%c\n",201,187);
            printf(" | ");
            printf("\t\t\t       ALTERAR CADASTRADOS");
            printf("\t\t\t      |\n");
            printf(" %c----------------------------------------------------------------------------%c\n",200,188);
            alterar_cadastros(primeiro);
            getch();
            system("cls");
            break;
        case 'S':
        case 's':
//Artifício para sair do programa.
            opcao='s';
            break;
        default:
//Artifício que previne a situação de um usuário qualquer, digitar uma opcão inexistente no menu.
            system("cls");
            break;
        }
    }
}


