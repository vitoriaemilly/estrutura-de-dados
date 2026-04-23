//Tad para  a implementação do usuario fixo
#ifndef USER_H
#define USER_H

#define LOGIN_MAX 20
#define PASSWORD_MAX 20
#define USERS_FILE "users.txt"

typedef struct user {
    char login[LOGIN_MAX];
    char password[PASSWORD_MAX];
}user;

void choice_user(int *choice);

#endif