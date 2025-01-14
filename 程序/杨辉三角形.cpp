#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
//杨辉三角形
#define N 20//输出的层数
int main(void )
{
    int a[N][N]={0};//初始化数组全为0
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            if(i==j||j==0){
                a[i][j]=1;//对角线和每行第一个元素置1
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];//先不考虑输出的样式,将三角形补全为一个正方形,可得其余元素 a[i][j]=a[i-1][j-1]+a[i-1][j]；
            }
            
        }
    }
    for(int i=0;i<N;i++){
        cout<<setw(4*(N-i))<<a[i][0];//setw(n):当后面紧跟着的输出字段长度小于 n 的时候，在该字段前面用空格补齐，当输出字段长度大于 n 时，全部整体输出。
        for(int j=1;j<=i;j++){
            cout<<setw(8)<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
