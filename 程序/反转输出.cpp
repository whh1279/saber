#include<iostream>
#include<stdlib.h>
#include<string.h>
//����һ���ַ���,������ת�����
int main(void){
    char input[128];
    int len;//�ַ�������
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
