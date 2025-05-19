#include<stdio.h>
int main(){
    int n1,n2,n3;
    
   // int n;
    
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if(n1<0||n2<0||n3<0){
        printf("Negative value not allowed.");
        return 0;
    }
    int *A=&n1;
    int *B=&n2;
    int *C=&n3;
    printf("The value before swapping are:\n");
    printf("a = %d\n",*A);
    printf("b = %d\n",*B);
    printf("c = %d\n",*C);
    int temp=*A;
      *A=*C;

    
    *C=*B;
    *B=temp;
    printf("The value after swapping are:\n");
    printf("a = %d\n",*A);
    printf("b = %d\n",*B);
    printf("c = %d\n",*C);


    
    return 0;

}