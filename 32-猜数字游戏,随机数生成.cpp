#include <iostream>
#include <stdlib.h>//随机数
#include <time.h>//随机数种子
using namespace std;
int main() {
    //生成随机数
    //玩家猜测
    //判断随机数
    //进行提示猜对退出，猜错提示过大或者过小重新返回第二步
    int num,gus;
    srand((unsigned)time(NULL));//提供随机数种子
    num = rand()%100+1;
    cout <<num <<endl;

    while(1)//为什么括号里写1 因为括号里条件满足的话返回值就是1也就是代表真，循环需要一直进行下去除非遇到break
    {
        cout <<"请输入猜测数据0-100："<<endl;
        cin>>gus;
    if(gus>num)
    {
        cout << "太大了"<<endl;
    }else if(gus<num)
    {
        cout<<"太小了"<<endl;
    }else
    {
        cout<<"恭喜您猜对了"<<endl;
        break;
    }
    }
    system("pause");
    return 0;
    }
