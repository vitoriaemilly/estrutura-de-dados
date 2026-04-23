// função para aparecer a escolha principal do usuário e depois checagem se ele vai escolher login ou cadastro
#include <stdio.h>

void choice_user(int *choice){
    printf("Olá, seja bem-vindo!\n Escolha uma opção para prosseguir\n");
    printf("1-Login\n 2-Cadastro\n 3-Sair\n");
    *choice= 0;
    do{
        scanf("%d", choice);
    }while(*choice < 1 || *choice > 3);
}
