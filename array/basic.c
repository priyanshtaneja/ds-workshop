#include <stdio.h>

void oneDee() {
    int M, i;
    printf("Enter length of array: ");
    scanf("%d", &M);

    int A[M];

    printf("Enter values:\n");
    for(i = 0; i < M; i++)
        scanf("%d", &A[i]);

    printf("\nprinting array:\n\n");
    for(i = 0; i < M; i++) {
        printf("A[%d] = Memory[%p] = %d\n", i, (int*)&A[i], A[i]);
    }
}

void twoDee() {
    int M, N, i, j;
    scanf("%d %d", &M, &N);
    int A[M][N];

    printf("Enter values of array: \n");
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
            scanf("%d", &A[i][j]);

    printf("Indices of array\n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }

    // print
    printf("printing array:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // transpose
    printf("transpose:\n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}

void printMenu() {
    printf("\n\n");
    printf("1. 1D array\n");
    printf("2. 2D array\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice;
    do {
        printMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: oneDee();
                    break;
            case 2: twoDee();
                    
            case 3: 

            default: break;
        }
    } while(choice != 3);

    return 0;
}