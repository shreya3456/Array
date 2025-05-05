#include <stdio.h>
int secondLargestElement(int arr[],int n){
    int max1,max2;
    if(arr[0]>=arr[1]){
        max1=arr[0];
        max2=arr[1];    
    }
    else{
        max1=arr[1];
        max2=arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>=max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>=max2){
           max2=arr[i]; 
        }
    }
    return max2;
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
    result=secondLargestElement(arr,n);
    printf("Second largest element in the array is %d",result);
    return 0;
}
