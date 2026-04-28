//estudos de pilha e ponteiros em c ED

#include <stdio.h>
typedef struct Gen
{
  char tipo;
  void *valor;
}Gen;

int main(){
    Gen g[3];

    int n=4;
    float m=7.000;
    char o='B';

    g[0].valor= &n;
    g[0].tipo='i';


    g[1].valor= &m;
    g[1].tipo='f';


    g[2].valor= &o;
    g[2].tipo='c';

    for(int i=0;i<3;i++){
      (g[i].tipo)
        {
            case 'i': 
                printf("%d\n", *(void *)g[i].valor); 
                break;
            
            case 'f': 
                printf("%f\n", *(float *)g[i].valor); 
                break;
                
            case 'c': 
                printf("%c\n", *(char *)g[i].valor); 
                break;
        }
    }
}