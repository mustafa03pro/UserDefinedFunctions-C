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
    if(*A>*B){
        printf("%d",*A);

    }
    else{
        printf("%d",*B);
    }
    
    
   

    
    return 0;

}