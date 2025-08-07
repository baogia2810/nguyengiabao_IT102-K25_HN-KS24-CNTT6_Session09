#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (i = size - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
