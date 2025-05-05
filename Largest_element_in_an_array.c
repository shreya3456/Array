#include <stdio.h>
int largestElement(int arr[],int n){
    int temp;
    temp=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    return temp;
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
    result=largestElement(arr,n);
    printf("largest element in the array is %d",result);
    return 0;
}
