#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int check = 0;
    int phantu;

    printf("Nhap v�o mot phan tu: ");
    scanf("%d", &phantu);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == phantu) {
            printf("Vi tr� phan tu trong mang l�: %d\n", i + 1);
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("Phan tu kh�ng c� trong mang. Vui l�ng nh?p lai!\n");
    }

    return 0;
}

			

	 
