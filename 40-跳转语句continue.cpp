#include <iostream>
using namespace std;
int main(){
    //continue可以筛选条件,执行到本行,不执行后面的代码,再开始新一轮循环
    // for(int i = 1; i < 100; i++)
    // {
    //     //如果是奇数输出偶数不输出
    //     if(i % 2 == 0)
    //     {
    //         continue;//break会退出循环,而continue不会
    //     }
    //     cout << i << endl; 
    // }
    //还可以这样输出
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}