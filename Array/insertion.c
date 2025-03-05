#include <stdio.h>

void insertion(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter number to insert at %d position: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int main() {
    int maxsize;
    printf("Enter the size of the array: ");
    scanf("%d", &maxsize);

    int a[maxsize];  
    insertion(a, maxsize);

    printf("The inserted elements are: ");
    for (int i = 0; i < maxsize; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
