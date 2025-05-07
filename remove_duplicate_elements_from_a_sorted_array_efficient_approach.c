#include <stdio.h>
void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
}
int duplicate(int arr[],int n){
    int res=1;
     for(int i=0;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
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
