#include <stdio.h>
#include<stdbool.h>
bool sortOrNot(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}

int main(){
    int n;
    printf("Enter the no. of elements in the array");
    scanf("%d",&n);
    int i;
    int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
    int result;
    result=sortOrNot(arr,n);
    if(result==true)
        printf("Yes this is a sorted array.");
    else
        printf("No this is not an array.");
    return 0;
}
