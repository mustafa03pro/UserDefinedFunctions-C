#include<stdio.h>
#include<string.h>

int largestNum(int arr[],int n){
    int len=strlen(arr);
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    return max;
    
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
   printf("Largest element of array is : %d",largestNum(arr,n));
   

    

    return 0;
}