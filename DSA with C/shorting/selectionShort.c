// In selection sort the best time complexity is O(n^2);
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[6] = {2,4,3,1,6,5};
    int n=6;
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    // selection short
    for(int i=0; i<n-1; i++)
    {
        int min = INT_MAX;
        int min_index = -1;
        for(int j=i; j<=n-1; j++)
        {
            if(arr[j]<min){
                min = arr[j];
                min_index = j;
            } 
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}