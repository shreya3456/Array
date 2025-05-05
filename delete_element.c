#include <stdio.h>
void delete(int arr[],int n,int d){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==d){
            break;
        }
        else{
            printf("Element not present");
        }
    }
    while(i<n){
        arr[i]=arr[i+1];
        i++;
    }
}

void display(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++)
        printf("\n%d",arr[i]);
}

int main(){
    int n;
    printf("Enter the no. of elements in the array");
    scanf("%d",&n);
    int i;
    int arr[100];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
    int d;
    printf("Enter the element you want to remove");
    scanf("%d",&d);
    delete(arr,n,d);
    display(arr,n);
    return 0;
}
