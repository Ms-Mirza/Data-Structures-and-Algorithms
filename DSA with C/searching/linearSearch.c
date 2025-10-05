// linear Search:

#include<stdio.h>
int main(){
    int n, target, flag = 0, index;
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
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            flag = 1;
            index = i;
        }
    }
    if(flag) printf("The target is found at the position: %d", index+1);
    else printf("The target is not found.");
    return 0;

}