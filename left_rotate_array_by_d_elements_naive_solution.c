#include <stdio.h>
void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
}

void leftRotate(int arr[],int n){
    int i;
    int temp=arr[0];
    for(i=0;i<n;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
}

void leftRotateByD(int arr[],int n,int d){
    for (int i=0;i<d;i++)
        leftRotate(arr,n);
}


int main(){
    int n;
    printf("Enter the no. of elements in the array");
    scanf("%d",&n);
    int i;
    int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
    int d;
    printf("Enter the value by which you want to left rotate array");
    scanf("%d",&d);
    leftRotateByD(arr,n,d);
    printf("Updated array:");
    displayArray(arr,n);
    return 0;
}
