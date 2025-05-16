#include<stdio.h>
#include<string.h>

int sumArray(int arr[],int n){
    int len=strlen(arr);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
    
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid array size");
        return 0;
    }
   int arr[n];

   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("Sum of all elements in the array: %d",sumArray(arr,n));
   

    

    return 0;
}