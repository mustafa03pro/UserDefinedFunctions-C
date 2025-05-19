#include<stdio.h>
int main(){
    int n;
    int sum=0;
    
   // int n;
    
    scanf("%d",&n);
    
    if(n<0){
        printf("Array size cannot be negative.");
        return 0;
    }
    int arr[n];
   // printf("%d ",n);
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int *p=arr;
     //printf("%d ",n);
    for(int i=0;i<n;i++){
         sum=sum+p[i];
        //printf("%d ",p[i]);
        
    }printf("The sum of array is : %d ",sum);
     
    return 0;

}