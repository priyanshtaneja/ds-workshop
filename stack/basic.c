#include <stdio.h>

const int size = 5;
int A[5];
int top;

void printStack() {
    int i;
    for(i = top; i >= 0; i--) {
        printf("%d\n", A[i]);
    }
}

void push() {
    if (top == size - 1) {
        printf("Stack overflow\n");
        return;
    }

    int el;
    printf("Enter element to push: ");
    scanf("%d", &A[++top]);
    printStack();
}

void pop() {
    if (top == -1) {
        printf("stack underflow\n");
        return;
    }
    
    top--;
    printStack();
}

void printMenu() {
    printf("\n");
    printf("1. push element\n");
    printf("2. pop element\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
}


int main()
{
    top = -1;
    int choice;
    do
    {
        printMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
        case 3:
        default:
            break;
        }
    } while (choice != 3);

    return 0;
}