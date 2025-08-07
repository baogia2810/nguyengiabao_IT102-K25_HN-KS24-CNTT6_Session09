#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0, i, j, result = arr[0];

    for (i = 0; i < size; i++) {
        int count = 0;
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount || (count == maxCount && arr[i] < result)) {
            maxCount = count;
            result = arr[i];
        }
    }

    printf("%d\n", result);

    return 0;
}
