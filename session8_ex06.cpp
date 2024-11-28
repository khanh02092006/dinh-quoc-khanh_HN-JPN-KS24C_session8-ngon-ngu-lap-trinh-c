#include <stdio.h>

int main() {
    int n;

    
    printf("Nh?p k�ch thu?c c?a ma tr?n vu�ng (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];  
    int sum_diagonal = 0;

    
    printf("Nh?p c�c ph?n t? c?a ma tr?n:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nh?p ph?n t? [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("C�c ph?n t? tr�n du?ng ch�o ch�nh:\n");
    for (int i = 0; i < n; i++) {
        int element = matrix[i][i];  
        printf("%d\n", element);
        sum_diagonal += element;  
    }

    
    printf("T?ng c?a c�c ph?n t? tr�n du?ng ch�o ch�nh: %d\n", sum_diagonal);

    return 0;
}
