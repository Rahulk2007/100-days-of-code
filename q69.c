#include <stdio.h>
#include <limits.h>  

int main() {
    int n, i;
    int largest, secondLargest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 1;
    }

    int arr[n];

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    largest = secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element (all elements may be equal).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
