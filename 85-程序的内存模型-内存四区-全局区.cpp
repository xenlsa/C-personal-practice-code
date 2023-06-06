#include <iostream>

using namespace std;

// 全局变量
int g_a = 30;
int g_b = 40;

//const 修饰的全局常量
const int c_g_a=10;

int main()
{
    // 全局区
    // 全局变量,静态变量,常量

    // 创建普通局部变量
    int a = 10;
    int b = 20;
    cout << "局部变量a的地址为" << (long long)&a << endl;
    cout << "局部变量b的地址为" << (long long)&b << endl;
    cout << "全局变量g_a的地址为" << (long long)&g_a << endl;
    cout << "全局变量g_b的地址为" << (long long)&g_b << endl;

    // 静态变量 在普通变量前面加struct,属于静态变量
    static int s_a = 50;
    static int s_b = 60;
    cout << "静态变量s_a的地址为" << (long long)&s_a << endl;
    cout << "静态变量s_b的地址为" << (long long)&s_b << endl;

    //常量
    //字符串常量
    cout << "字符串常量的地址为" << (long long)&"hollo world" << endl;
    //const 修饰的变量
    cout << "const修饰的全局常量地址为"<< (long long)&c_g_a << endl;
    const int c_a=70;
    cout << "const修饰的局部常量地址为"<< (long long)&c_a << endl;

    // 只要是含有局部的都在栈区,其他都在全局区
    system("pause");
    return 0;
}
