#include<iostream>
#include<string>
using namespace std;
class Hougong{
public:
    Hougong();//���캯��
    Hougong(string wife,string xiaosan);//�������Ĺ��캯��
    Hougong(const Hougong &other);//�������캯��
    string my_wife();//���������������
    string my_xiaosan();//���������ֳص�׷
    string getName();
private:

    string wife;
    string xiaosan;
};
Hougong::Hougong(){

    wife="���";
    xiaosan="���ֳ�";
}
string Hougong::my_wife(){
    return wife;
}
string Hougong::my_xiaosan(){
    return xiaosan;
}

Hougong::Hougong(string wife,string xiaosan){
    this->wife=wife;
    this->xiaosan=xiaosan;
}
Hougong::Hougong(const Hougong &other){
    wife=other.wife;
    xiaosan=other.xiaosan;//ǳ����,��ͬ��ַ��һ�𿽱���,��������ñ�����ֵ����ԭֵһ���,
    //Ҫ�����,Ҫ��������������һ��洢�ռ�

}
int main(void){
    Hougong h1;//���ù��캯��
    cout<<"�����ڵ�������"<<h1.my_wife()<<endl;
    Hougong *p;
    p=&h1;
    cout<<"�����ڱ�"<<p->my_xiaosan()<<"��׷"<<endl;;
    Hougong h2("�Ŭu","����");//���ô������Ĺ��캯��
    cout<<"�����ڵ�������"<<h2.my_wife()<<endl;
    cout<<"�����ڱ�"<<h2.my_xiaosan()<<"��׷"<<endl;
    Hougong h3;
    h3=h2;
    cout<<"�����ڵ�������"<<h3.my_wife()<<endl;
    cout<<"�����ڱ�"<<h3.my_xiaosan()<<"��׷"<<endl;
    return 0;
}