#include <stdio.h>

#define MAX_STACK_SIZE 100

typedef struct {
    long long data[MAX_STACK_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

void push(Stack *s, long long value) {
    if (s->top < MAX_STACK_SIZE - 1) {
        s->data[++s->top] = value;
    } else {
        printf("Stack overflow!\n");
    }
}

long long pop(Stack *s) {
    if (s->top >= 0) {
        return s->data[s->top--];
    } else {
        printf("Stack underflow!\n");
        return -1;
    }
}

int is_empty(Stack *s) {
    return s->top == -1;
}

void edgePrinter(long long grp) {
    Stack stack;
    initialize(&stack);
    
    while (1) {
        if (grp == 0) {
            printf("A11 Edges Printed.\n");
            break;
        }
        if (grp % 3 == 0) {
            printf("%lld and %lld are connected\n", (grp / 100) % 10, grp % 10);
        } else {
            printf("%lld and %lld are connected\n", (grp / 100) % 10, (grp / 1000) % 10);
        }
        push(&stack, grp);
        grp /= 10;
    }
    
    while (!is_empty(&stack)) {
        grp = pop(&stack);
    }
}

int main(void) {
    long long code;
    
    printf("Enter your student code: "); 
    scanf("%lld", &code); 
    
    edgePrinter(code);
    
    return 0;
}
