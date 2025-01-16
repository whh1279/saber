#include<iostream>
#include<string.h>
using namespace std;
//const和指针
int main(void){
    //总结： 看 const 离类型(string)近，还是离指针变量名近，离谁近，就修饰谁，谁就不能变
    string wife="王荣";//定义自己的老婆是王荣
    string xiaosan="堵爱玲";//定义出轨对象是堵爱玲
    //第一种 渣男型
    string *zhanan=&wife;
    *zhanan="周爱琴";
    zhanan=&xiaosan;
    *zhanan="周宏";
    cout<<"渣男的老婆和小三分别是"<<wife<<"和"<<xiaosan<<endl;//渣男指向的对象可以随意修改
    //第二种 直男型
    wife="王荣";
    xiaosan="堵爱玲";
    const string *zhinan=&wife;//第一种写法
    //string const *zhinan=&wife;第二种写法
    cout<<"直男的老婆是"<<*zhinan<<endl;
    zhinan=&xiaosan;
    cout<<"直男的小三是"<<*zhinan<<endl;//直男的指向的对象可以修改,但是指向对象的内容不能修改
    //第三种 暖男型
    wife="王荣";
    xiaosan="堵爱玲";
    string * const nuannan=&wife;
    *nuannan="田多";
    cout<<"暖男的老婆是"<<*nuannan<<endl;//暖男的指向对象不能修改,但是指向对象的内容可以修改
    //第四种 究极暖男型
    wife="王荣";
    const string * const super_nuannan=&wife;
    cout<<"究极暖男的老婆是"<<*super_nuannan<<endl;//究极暖男的指向对象和指向对象的内容都不能修改
    return 0;
}
