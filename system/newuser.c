//criar a função pra definir meus novos usuarios
#include "user.h"
#include <stdio.h>


void new_user(){
    user u;
    FILE *f= fopen(USERS_FILE, "a");
    if(f==NULL) {
        printf("Erro no arquivo, tente de novo");
    }else {
        printf("Digite o login que deseja:");
        scanf(f, " %s ", u.login);
         printf("Digite a sua senha:");
        scanf(f, " %s ", u.password);

         fprintf(f, " %s %s\n ", u.login, u.password);
         fclose(f);
    }
}

