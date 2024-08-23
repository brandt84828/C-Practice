// Online C compiler to run C program online
#include <stdio.h>

int binarysearch(int search_value, int arr[], int len);

int main(void) {
    int arr[] = {2, 4, 6, 7, 9, 29, 45, 46, 49, 50, 51};
    printf("%d", binarysearch(9, arr, 10));
    
    return 0;
}

int binarysearch(int search_value, int arr[], int len) {
    int l = 0;
    int h = len - 1;
    int mid = (l + h) / 2;
    
    while(l < h && search_value != arr[mid]) {
        if (search_value > arr[mid])
            l = mid + 1;
        else
            h = mid - 1;
        
        mid = (l + h) / 2;
    }
    
    if (arr[mid] == search_value)
        return mid;
    else
        return -1;
}
