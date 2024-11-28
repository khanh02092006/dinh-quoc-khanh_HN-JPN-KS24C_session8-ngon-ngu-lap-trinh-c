#include <stdio.h>

int main() {
    int m, n;

    
    printf("Nh?p s? h�ng (m): ");
    scanf("%d", &m);
    printf("Nh?p s? c?t (n): ");
    scanf("%d", &n);

    int mang[m][n]; 

    
    printf("Nh?p c�c ph?n t? cho m?ng:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nh?p ph?n t? [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

   
    int max = mang[0][0]; 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j]; 
            }
        }
    }

   
    printf("Ph?n t? l?n nh?t trong m?ng l�: %d\n", max);

    return 0;
}
