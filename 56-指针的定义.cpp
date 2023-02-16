#include <iostream>
using namespace std;
// 个人理解指针p代表内存地址,*p代表内存中的数据
int main()
{
    int a = 10;
    // 定义指针
    int *p;
    // 让指针记录a的地址
    p = &a;
    cout << "a的地址为" << &a << endl;
    cout << "指针记录的地址请为" << p << endl;

    // 指针使用
    // 通过解引用的方式来找到指针指向的内存
    // 指针前加*代表解引用,找到指针指向的内存数据
    *p = 1000;
    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;
    system("pause");

    return 0;
}