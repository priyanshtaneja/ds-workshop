#include <stdio.h>

int A[5];
int front, back;

void printQueue()
{
    int i;
    for(i = back; i <= front; i++)
        printf("%d ", A[i]);
}

void shift() {
    int i;
    for(i = front; i > 0; i--)
        A[i] = A[i - 1];
}

void enqueue()
{
    if(front < 4) {
        front++;
    }
    shift();
    printf("Enter element to insert: ");
    scanf("%d", &A[back]);

    printQueue();
}

void dequeue()
{
    if(front == -1) {
        printf("Queue is already empty.");
        return;
    }

    front--;
    printQueue();
}

void printMenu()
{
    printf("\n");
    printf("1. enqueue\n");
    printf("2. dequeue\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
}

int main()
{
    front = -1;
    back = 0;
    int choice;
    do
    {
        printMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
        case 3:
        default:
            break;
        }
    } while (choice != 3);

    return 0;
}