#include <stdio.h>

int main() {
    int N, i;
    printf("Enter length of array: ");
    scanf("%d", &N);

    int A[N], B[N];
    printf("Enter elements of array: ");
    for(i = 0; i < N; i++)
        scanf("%d", &A[i]);

    // reversing
    for(i = 0; i < N; i++)
        B[i] = A[N - 1 - i];

    printf("Reversed array: \n");
    for(i = 0; i < N; i++)
        printf("%d ", B[i]);

    return 0;
}