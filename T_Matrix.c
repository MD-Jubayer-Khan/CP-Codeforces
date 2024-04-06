#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int matrix[N][N];

    // Read the matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sums of the main diagonal and secondary diagonal
    for (int i = 0; i < N; i++) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][N - 1 - i];
    }

    // Calculate the absolute difference
    int absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum);

    // Print the result
    printf("%d\n", absoluteDifference);

    return 0;
}
