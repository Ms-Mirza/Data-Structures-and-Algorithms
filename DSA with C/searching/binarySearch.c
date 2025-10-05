// Binary search:


#include<stdio.h>
int main(){
    int n, target, flag = 0, index, start, mid, end;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array: ");

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // for(int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }
    printf("Enter the target: ");
    scanf("%d", &target);

    start = 0;
    end = n-1;

    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==target){
            flag = 1;
            index = mid;
            break;
        }
        else if(arr[mid]> target){
            end = mid - 1;
        }
        else{
            start = mid +1;
        }
    }
    if(flag) printf("The target is found at the position: %d", index+1);
    else printf("The target is not found.");
    return 0;

}