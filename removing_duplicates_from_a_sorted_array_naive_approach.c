#include <stdio.h>
void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
}
int duplicate(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        arr[i]=temp[i];
    }
    return res;
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
    int result=duplicate(arr,n);
    printf("\nNo. of elements after deletion of duplicates: %d\n.",result);
    displayArray(arr,result);
    
    return 0;
}
