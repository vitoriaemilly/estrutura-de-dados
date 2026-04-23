//Tad para  a implementação do usuario fixo
#define LOGIN_MAX 20
#define PASSWORD_MAX 20

typedef struct user {
    char login[LOGIN_MAX];
    char password[PASSWORD_MAX];
}user;