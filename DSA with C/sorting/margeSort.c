#include<stdio.h>
void marge(int arr[], int first, int mid, int last){
    int i = first, j= mid+1, index = 0;
    int temp [last - first+1];
    while(i<=mid && j<= last){
        if(arr[i] < arr[j]){
            temp[index] = arr[i];
            index++;
            i++;
        }
        else{
            temp[index] = arr[j];
            index++;
            j++;
        }
    }    
    while(i<=mid){
        temp[index] = arr[i];
        index++;
        i++;
    }
    while(j<=last){
        temp[index] = arr[j];
        index++;
        j++;
    }
    index = 0;
    while(first<=last){
        arr[first] = temp[index];
        first++;
        index++;
    }
}
void margesort(int arr[], int first, int last){
    
    if(first==last) return;
    
    int mid = first + (last - first)/2;

    margesort(arr, first, mid);
    margesort(arr, mid+1, last);

    marge(arr, first, mid, last);
}

int main(){
    int arr[] = {1, 5, 6, 10, 11, 4, 3, 2, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);/*sizeof(arr) → gives the total size in bytes of the whole array.

                                            Example: If int takes 4 bytes (on most systems), and the array has 10 elements:
                                                        sizeof(arr) = 10 × 4 = 40 bytes

                                            sizeof(arr[0]) → gives the size of the first element (an int).

                                                Usually, sizeof(arr[0]) = 4 bytes

                                            Division:
                                            sizeof(arr) / sizeof(arr[0]) = 40 / 4 = 10 */

    int first = 0, last = size - 1;

    margesort(arr, first, last);
    printf("The sorted array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}