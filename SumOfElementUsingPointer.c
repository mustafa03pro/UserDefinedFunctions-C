#include<stdio.h>
int main(){
    int n1,n2,n3;
    
   // int n;
    
    scanf("%d %d",&n1,&n2);
    
    if(n1<0||n2<0){
        printf("Negative value not allowed.");
        return 0;
    }
    int *A=&n1;
    int *B=&n2;
    int sum=*A+*B;
    printf("%d",sum);
    
    
   

    
    return 0;

}