#include<iostream>
#include<stdlib.h>
#include<string.h>
//输入一个字符串,将其逆转后输出
int main(void){
    char input[128];
    int len;//字符串长度
    scanf("%s",input);
    len=strlen(input);
    char *p;
    p=&input[len-1];
    for(int i=0;i<len;i++){
        printf("%c",*p);
        p--;
    }
    return 0;
}
