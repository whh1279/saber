#include<iostream>
#include<string.h>
using namespace std;
//const��ָ��
int main(void){
    //�ܽ᣺ �� const ������(string)����������ָ�������������˭����������˭��˭�Ͳ��ܱ�
    string wife="����";//�����Լ�������������
    string xiaosan="�°���";//�����������Ƕ°���
    //��һ�� ������
    string *zhanan=&wife;
    *zhanan="�ܰ���";
    zhanan=&xiaosan;
    *zhanan="�ܺ�";
    cout<<"���е����ź�С���ֱ���"<<wife<<"��"<<xiaosan<<endl;//����ָ��Ķ�����������޸�
    //�ڶ��� ֱ����
    wife="����";
    xiaosan="�°���";
    const string *zhinan=&wife;//��һ��д��
    //string const *zhinan=&wife;�ڶ���д��
    cout<<"ֱ�е�������"<<*zhinan<<endl;
    zhinan=&xiaosan;
    cout<<"ֱ�е�С����"<<*zhinan<<endl;//ֱ�е�ָ��Ķ�������޸�,����ָ���������ݲ����޸�
    //������ ů����
    wife="����";
    xiaosan="�°���";
    string * const nuannan=&wife;
    *nuannan="���";
    cout<<"ů�е�������"<<*nuannan<<endl;//ů�е�ָ��������޸�,����ָ���������ݿ����޸�
    //������ ����ů����
    wife="����";
    const string * const super_nuannan=&wife;
    cout<<"����ů�е�������"<<*super_nuannan<<endl;//����ů�е�ָ������ָ���������ݶ������޸�
    return 0;
}
