// In insertion sort the best time complexity is O(n);
#include<stdio.h>

int main()
{
    int arr[6] = {2,4,3,1,6,5};
    int n=6;
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    // insertion short
    for(int i=1; i<n; i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}