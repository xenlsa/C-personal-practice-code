#include <iostream>
using namespace std;
int main()
{
    // 1,可以统计整个数组在内存中的长度
    // 2,可以获取数组在内存中的首地址
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "总共占用" << sizeof(arr) << endl; // 一个int占4
    cout << "每个占用" << sizeof(arr[0]) << endl;
    cout << "元素个数" << sizeof(arr) / sizeof(arr[0]) << endl;

    // 通过数组名查看数组首地址,直接输出数组名
    cout << "数组首地址为" << (long long)arr << endl;         // 强制类型转换,用int京都不够故使用long long
    cout << "第一个元素地址为" << (long long)&arr[0] << endl; //&为取地址符
    cout << "第二个元素地址为" << (long long)&arr[1] << endl;
    // 注意数组名是常量,不可以被进行赋值操作
    system("pause");
    return 0;
}