#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
//���������
#define N 20//����Ĳ���
int main(void )
{
    int a[N][N]={0};//��ʼ������ȫΪ0
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            if(i==j||j==0){
                a[i][j]=1;//�Խ��ߺ�ÿ�е�һ��Ԫ����1
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];//�Ȳ������������ʽ,�������β�ȫΪһ��������,�ɵ�����Ԫ�� a[i][j]=a[i-1][j-1]+a[i-1][j]��
            }
            
        }
    }
    for(int i=0;i<N;i++){
        cout<<setw(4*(N-i))<<a[i][0];//setw(n):����������ŵ�����ֶγ���С�� n ��ʱ���ڸ��ֶ�ǰ���ÿո��룬������ֶγ��ȴ��� n ʱ��ȫ�����������
        for(int j=1;j<=i;j++){
            cout<<setw(8)<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
