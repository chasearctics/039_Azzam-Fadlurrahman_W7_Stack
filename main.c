#include "stack.h"

void decimalToBinary(int num) {
    Stack s;
    initStack(&s);
    
    if (num == 0) {
        printf("Biner: 0\n");
        return;
    }
    
    while (num > 0) {
        push(&s, num % 2);
        num /= 2;
    }
    
    printf("Biner: ");
    while (!isEmpty(&s)) {
        printf("%d", pop(&s));
    }
    printf("\n");
}

int main() {
    int num;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}