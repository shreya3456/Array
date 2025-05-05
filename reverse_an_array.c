#include <stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void reverseArray(int arr[],int n){
    int t=n;
    for(int i=0;i<n/2;i++){
        swap(&arr[i],&arr[n-1]);
        n--;
    }
    for(int i=0;i<t;i++){
        printf("\n%d",arr[i]);
    }
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
    printf("\nReversed array:\n.");
    reverseArray(arr,n);
    
    return 0;
}
