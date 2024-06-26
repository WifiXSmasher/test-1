#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int n;
  
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key = n / 2;
    int result = binary_search(arr, 0, n - 1, key);
    if (result != -1)
    {
        printf("Element %d  at index %d\n", key, result);
    }
    else
    {
        printf("Element %d not found\n", key);
    }

   
}
