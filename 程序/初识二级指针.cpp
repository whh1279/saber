#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
//��ʶ����ָ��
int main(void){
    string zhaoqun="��������ʵ��Сѧ";//��������ʵ��СѧӢ���ʦ
    string *zhangyang=&zhaoqun;//��Ⱥ�������Ǻù���,����֪����Ⱥ�Ĺ�����λ,����ַ
    string **wangxin=&zhangyang;//����ͨ�������ĵ�ַ���Ե�֪��Ⱥ�����ĵ�λ.*wangxin=zhangyang�ĵ�ַ,*zhangyang=zhaoqun
    string *temp=*wangxin;//temp�õ����������ĵ�ַ,�����ں�������Сѧ��Ӣ��
    cout<<"ͨ�������õ���Ⱥ�Ĺ�����λ��"<<*temp<<endl;
    cout<<"����ֱ�ӵõ���Ⱥ�Ĺ�����λ��"<<*(*wangxin);
    return 0;
}
