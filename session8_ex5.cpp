#include <stdio.h>

int main() {
    int n, m; 
    
  
    printf("Nh?p s? h�ng (n): ");
    scanf("%d", &n);
    printf("Nh?p s? c?t (m): ");
    scanf("%d", &m);

    int matrix[n][m]; 
    int sum_boundary = 0; 
    
    printf("Nh?p c�c ph?n t? c?a ma tr?n:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                sum_boundary += matrix[i][j];
            }
        }
    }

    
    printf("T?ng c�c ph?n t? tr�n du?ng bi�n c?a ma tr?n: %d\n", sum_boundary);

    return 0;
}

