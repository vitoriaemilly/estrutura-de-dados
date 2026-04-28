#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

struct Stack {
    int size;
    int top;
    int elements[MAX_ELEMENTS];
};

Stack *Stack_alloc(){
    Stack *s = calloc(1, sizeof(Stack));

    if (s) {
        s->size = MAX_ELEMENTS;
        s->top  = -1;
    }

    return s;
}

void Stack_free(Stack *s){
    if (s)
        free(s);
}

bool Stack_isEmpty(Stack *s){
    if (s) {
        return s->top == -1;
    }

    return true;
}

bool Stack_isFull(Stack *s){ 
    if (s) {
        return s->top == (s->size - 1);
    }

    return false;
}

void Stack_push(Stack *s, int element){
    if (s) {
        if (!Stack_isFull(s)) {
            s->top++;
            s->elements[s->top] = element;
        }
    }
}

int Stack_pop(Stack *s){
    int top = 0;

    if (s) {
        if(!Stack_isEmpty(s)) {
            top = s->elements[s->top];
            s->top--;
        }
    }

    return top;
}

int Stack_top(Stack *s){
    if (s) {
        if(!Stack_isEmpty(s)) {
            return s->elements[s->top];
        }
    }
    
    return 0;
}

void Stack_print(Stack *s){
    if (s) {
        for (int i = s->top; i >= 0; i--) {
            printf("%d\n", s->elements[i]);
        }
    }
}