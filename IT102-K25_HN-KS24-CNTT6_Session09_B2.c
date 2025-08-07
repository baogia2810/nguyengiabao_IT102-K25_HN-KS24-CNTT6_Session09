#include <stdio.h>

int main() {
    int arr[] = {3, 7, 9, 12, 18};
    int x, i, found = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Nhap gia tri: ");
    scanf("%d", &x);

    for (i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
