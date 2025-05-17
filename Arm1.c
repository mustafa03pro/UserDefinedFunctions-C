#include<stdio.h>
#include<stdbool.h>
int countDigits(int n){
    int count=0;
    while (n>0)
    {
        count++;
        n/=10;
    }
    return count;
    
}
int power(int base,int exp){
    int result=1;
    for (int i = 0; i < exp; i++)
    {
        result*=base;
    }
    return result;
    
}
bool isArmstriong(int n){
    int numDigits=countDigits(n);
    int temp=n,sum=0;
    while (temp>0)
    {
        int digit=temp%10;
        sum+=power(digit,numDigits);
        temp/=10;
    }
    return sum==n;
    

}
int main(){
    int n1,n2;
    scanf("%d", &n1);
    scanf("%d", &n1);
    printf("Armstrong number between %d and %d are:\n",n1,n2);
    for (int i=n1;i<=n2;i++){
        if(i>=100 && i<=n2 && isArmstriong(i)){
            printf("%d\n",i);
        }
    }
    return 0;

}