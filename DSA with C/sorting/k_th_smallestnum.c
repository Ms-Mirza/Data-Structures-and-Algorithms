// find the kth smallest element in the array.......... 

// solve with bubble sort..
/*
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[6] = {2,5,1,3,0,4};
    int n=6, k=3;
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        bool flag = true; // track sorted array;
        for(int j=0; j<n-1-i; j++){
            if (arr[j]> arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
                flag = false; // if loop is run that means array is not sorted. 
            }
        }
        if (flag==true) break;
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe kth smallest element is: %d", arr[k-1]);
    return 0;
}
*/
/*
// using selection sort...

#include<stdio.h>
int main()
{
    int arr[6] = {2,5,1,3,0,4};
    int n=6, k=3;
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        int min_index = i;
        
        for(int j=i; j<n; j++){
            if (arr[j]<arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe kth smallest element is: %d", arr[k-1]);
    return 0;
}*/

// solve using insertion sort

#include<stdio.h>
int main()
{
    int arr[6] = {2,5,1,3,0,4};
    int n=6, k=3;
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=1; i<n; i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
           int temp = arr[j];
           arr[j]= arr[j-1];
           arr[j-1] = temp;
           j--;
        }
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe kth smallest element is: %d", arr[k-1]);
    return 0;
}