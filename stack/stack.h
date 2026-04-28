#include <stdbool.h>
#define MAX_ELEMENTS 1000

typedef struct Stack Stack;

Stack *Stack_alloc();
void   Stack_free(Stack *s);

bool Stack_isEmpty(Stack *s);
bool Stack_isFull(Stack *s);
void Stack_push(Stack *s, int element);
void  Stack_pop(Stack *s);
void  Stack_top(Stack *s);

void Stack_print(Stack *s);