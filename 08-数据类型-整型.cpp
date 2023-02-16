#include <iostream>
using namespace std;
int main()
{
    // 为什么要有数据类型
    // 答;在创建变量时分配一块合理的内存空间

    // 整型
    // 1,短整型占2个字节(-32768~32767)
    short num1 = 1;

    // 2,整型占4个字节
    int num2 = 2;

    // 3,长整型占4个字节
    long num3 = 3;

    // 4,长长整型占8个字节
    long long num4 = 4;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    system("pause");
    return 0;
}