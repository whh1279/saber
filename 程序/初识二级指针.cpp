#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
//初识二级指针
int main(void){
    string zhaoqun="海安城南实验小学";//海安城南实验小学英语教师
    string *zhangyang=&zhaoqun;//赵群和章阳是好闺蜜,章阳知道赵群的工作单位,即地址
    string **wangxin=&zhangyang;//王欣通过章阳的地址可以得知赵群工作的单位.*wangxin=zhangyang的地址,*zhangyang=zhaoqun
    string *temp=*wangxin;//temp拿到的是章阳的地址,章阳在海安明道小学教英语
    cout<<"通过章阳得到赵群的工作单位是"<<*temp<<endl;
    cout<<"王欣直接得到赵群的工作单位是"<<*(*wangxin);
    return 0;
}
