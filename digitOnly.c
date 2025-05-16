#include<stdio.h>
#include<string.h>
#include<stdbool.h>

 bool isContainsDigits(char str[]) {
    int len=strlen(str);
  
    
    for(int i=0;i<len;i++){
        if(str[i]>='a'&&str[i]<='z'){

            return 0;
        }
        else if(str[i]>='A'&&str[i]<='Z'){

            return 0;
        }
        return 1;
        
    }
    
    
}
int main(){
   char str[20];
    scanf("%s",&str);
    if(isContainsDigits(str)){
        printf("The string contains only digits.");
    }
    else{
        printf("The string contains non-digit characters.");
    }
    
   

   
   
   

    

    return 0;
}