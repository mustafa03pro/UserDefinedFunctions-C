#include<stdio.h>
#include<stdbool.h>
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    return rev;
}
int main(){

}