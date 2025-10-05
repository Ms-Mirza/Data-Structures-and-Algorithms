 // "header guard" in c programming

// sorting technique
// 1. Bubble sort...

// for n element in the array we need maximum n-1 pass
// coding implimentation of bubble short

/*
#include<stdio.h>
int main()
{
    int arr[5] = {4,5,3,1,2};
    int n=5;
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    // bubble sort:
    for (int i=0; i<n-1; i++)
    {
        bool flag = true; // array is not sorted yet.
        for (int j=0;j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
            if(flag== true) break;
        }
    }
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
    */

// in bubble sort the best time complexity O(n)

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[6] = {2,4,3,1,6,5};
    int n=6;
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i=0; i<n-1; i++)
    {
        bool flag = true;
        for(int j=0; j<n-1-i; j++)
        {   
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        } 
        if(flag==true) break;
    }
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}