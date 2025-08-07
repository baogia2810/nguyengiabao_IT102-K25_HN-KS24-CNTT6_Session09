#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count[100] = {0};
    int i, j, max = 0;

    for (i = 0; i < size; i++) {
        int c = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                c++;
            }
        }
        if (c > count[i]) {
            count[i] = c;
        }
        if (c > max) {
            max = c;
        }
    }

    int printed[100] = {0};
    for (i = 0; i < size; i++) {
        if (count[i] == max && !printed[arr[i]]) {
            printf("%d", arr[i]);
            printed[arr[i]] = 1;
            for (j = i + 1; j < size; j++) {
                if (count[j] == max && arr[j] == arr[i]) {
                    printed[arr[j]] = 1;
                }
            }
            if (i < size - 1) printf(", ");
        }
    }

    printf("\n");
    return 0;
}
