/*
#include<stdio.h>

int main()
{
    int arr[11] = {2,4,0,3,0,0,1,0,6,5,0};
    int n=11, index = 0;
    int ans_arr[n];
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
   // move zero to end of the array..
    for(int i=0; i<n; i++)
    {
        if (arr[i]!=0){
            ans_arr[index]= arr[i];
            index++;
        }
    }
    for(int i=index; i<n; i++){
        ans_arr[index] = 0;
        index++; 
    }
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", ans_arr[i]);
    }
    return 0;
}
*/

// second version:

#include<stdio.h>

int main()
{
    int arr[11] = {2,4,0,3,0,0,1,0,6,5,0};
    int n=11;
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
   // move zero to end of the array..
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if(arr[j]==0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
   
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}