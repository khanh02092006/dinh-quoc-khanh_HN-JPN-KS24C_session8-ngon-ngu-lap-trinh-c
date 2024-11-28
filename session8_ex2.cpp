#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int check = 0;
    int phantu;

    printf("Nhap vào mot phan tu: ");
    scanf("%d", &phantu);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == phantu) {
            printf("Vi trí phan tu trong mang là: %d\n", i + 1);
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("Phan tu không có trong mang. Vui lòng nh?p lai!\n");
    }

    return 0;
}

			

	 
