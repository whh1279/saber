#include<iostream>
#include<string>
using namespace std;
class Hougong{
public:
    Hougong();//构造函数
    Hougong(string wife,string xiaosan);//带参数的构造函数
    Hougong(const Hougong &other);//拷贝构造函数
    string my_wife();//王欣的妻子是田多
    string my_xiaosan();//王欣被俞乐池倒追
    string getName();
private:

    string wife;
    string xiaosan;
};
Hougong::Hougong(){

    wife="田多";
    xiaosan="俞乐池";
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
    xiaosan=other.xiaosan;//浅拷贝,连同地址都一起拷贝了,如果不想让被拷贝值跟着原值一起变,
    //要用深拷贝,要给变量单独开辟一块存储空间

}
int main(void){
    Hougong h1;//调用构造函数
    cout<<"我现在的妻子是"<<h1.my_wife()<<endl;
    Hougong *p;
    p=&h1;
    cout<<"我现在被"<<p->my_xiaosan()<<"倒追"<<endl;;
    Hougong h2("张瑄","周沁");//调用带参数的构造函数
    cout<<"我现在的老婆是"<<h2.my_wife()<<endl;
    cout<<"我现在被"<<h2.my_xiaosan()<<"倒追"<<endl;
    Hougong h3;
    h3=h2;
    cout<<"我现在的老婆是"<<h3.my_wife()<<endl;
    cout<<"我现在被"<<h3.my_xiaosan()<<"倒追"<<endl;
    return 0;
}