#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char str[] = "Hello World";
    int i , len;
    len = strlen(str);

    for(i = 0 ; i < len ; i++){
        printf("%c" , str[i] & 127);
    }
    printf("\n");
    for(i = 0 ; i<len ; i ++)
    {
        printf("%c" , str[i] ^ 127);
    }
    printf("\n");
}