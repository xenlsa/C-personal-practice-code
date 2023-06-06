#include <iostream>

using namespace std;

// 栈区数据注意事项
// 栈区数据由编译器开辟和释放

int *func() // 形参数据也会放在栈区
{
    int a = 10; // 局部变量,放在栈区,程序执行完后自动释放
    return &a;
}
int main()
{
    int *p = func();
    // 输出会出问题
    // cout << *p<<endl;
    // cout << *p<<endl;
    system("pause");
    return 0;
}
