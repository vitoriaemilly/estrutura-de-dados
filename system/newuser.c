//criar a função pra definir meus novos usuarios
#include "user.h"
#include <stdio.h>


void new_user(){
    user u;
    FILE *f= fopen(USERS_FILE, "a");
    if(f==NULL) printf("Erro no arquivo, tente de novo");
    else {
        fprint(f, "%s %s\n", u.login, u.password);
    }
}

