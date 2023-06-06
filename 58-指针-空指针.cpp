#include <iostream>
using namespace std;
int main()
{
    //空指针:指针变量指向内存地址编号为0的空间
    //用途:初始化指针变量
    //注意:空指针指向的内存不可访问
    int* p=NULL;
    //内存编号0-255为系统所占内存,不允许用户访问,可以访问到内存编号,不能访问到数据
    cout << p << endl;//如果输出*p会报错


    system("pause");
    return 0;
}