#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[1001]; // Assuming n <= 1000

    // Read n
    scanf("%d", &n);

    // Read n integers
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read pos and x
    scanf("%d", &pos);
    scanf("%d", &x);

    // Shift elements to the right from pos to n
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert x at position pos-1 (0-based)
    arr[pos-1] = x;

    // Print the updated array
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
