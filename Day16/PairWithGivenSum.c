#include <stdio.h>
int main() {
    int arr[] = {2, 7, 11, 15, 3, 6};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair Found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No Pair Found\n");
    }
    return 0;
}