#include <stdio.h>
void insert(int arr[],int *n,int pos,int e){
    if(pos<1||pos>*n+1){
        printf("\nInvalid position");
        return;
    }
    int i=*n;
    while(i>=pos){
        arr[i]=arr[i-1];
        i--;
    }
    arr[pos-1]=e;
    *n++;
}

void display(int arr[],int *n){
    int i;
    for(i=0;i<=*n;i++)
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
    int e,pos;
    printf("Enter the position you want to insert a new element");
    scanf("%d",&pos);
    printf("Enter the element you want to insert");
    scanf("%d",&e);
    insert(arr,&n,pos,e);
    display(arr,&n);
    return 0;
}
