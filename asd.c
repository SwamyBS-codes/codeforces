#include <stdio.h>

void fun(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    //printf("\n");
}

int main() {
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];  // Define the array with size n
    
    printf("array elements are ");
    fun(arr, n);
    }
    
    return 0;
}
