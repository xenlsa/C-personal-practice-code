#include <iostream>
int main()
{
    // 野指针:指针变量指向非法的内存空间(不是程序所申请的内存空间)
    int *p = (int *)0x1100;
    // 访问指针报错
    //cout << *p << endl;
    system("pause");
    return 0;
}