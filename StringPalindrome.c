#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isPalindromString(char str[]){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return 0;
        }
       return 1;
    }
}
int main(){
    char str[20];
    scanf("%s",&str[0]);
    if(isPalindromString(str)){
        printf("it is a palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}