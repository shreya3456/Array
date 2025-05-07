#include <stdio.h>
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
}
//here complexity is O(n^2)
int moveZeros(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            for(j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(&arr[i],&arr[j]);
                    break;
                }
            }
        }
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
    moveZeros(arr,n);
    displayArray(arr,n);
    
    return 0;
}
