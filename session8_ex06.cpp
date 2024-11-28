#include <stdio.h>

int main() {
    int n;

    
    printf("Nh?p kích thu?c c?a ma tr?n vuông (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];  
    int sum_diagonal = 0;

    
    printf("Nh?p các ph?n t? c?a ma tr?n:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nh?p ph?n t? [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Các ph?n t? trên du?ng chéo chính:\n");
    for (int i = 0; i < n; i++) {
        int element = matrix[i][i];  
        printf("%d\n", element);
        sum_diagonal += element;  
    }

    
    printf("T?ng c?a các ph?n t? trên du?ng chéo chính: %d\n", sum_diagonal);

    return 0;
}
