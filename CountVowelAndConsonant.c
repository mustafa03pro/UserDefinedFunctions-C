#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char ch[100];
    int c=0;
    int b=0;
    
   // int n;
    
    scanf("%s", ch);
    
   char *a=ch;
    
   // printf("%d ",n);
    for (; *a != '\0'; a++){
        char a1=*a;
        if(a1=='a'||a1=='e'||a1=='i'||a1=='o'||a1=='u'){
            c++;
        }
        else if(a1=='A'||a1=='E'||a1=='I'||a1=='O'||a1=='U'){
            c++;
        }
        else {
            b++;
        }
    }
        
    printf("Number of vowels : %d\n",c);
    printf("Number of constant : %d",b);
     
    return 0;

}