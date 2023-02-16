#include <iostream>
using namespace std;
int main()
{
    // 取模运算(求余数)
    // 一个数不能对零取模,因为除数不能为0
    // 两个小数之间不能做取模运算
    int a = 10, b = 3;
    cout << a % b << endl;

    // cout << 3.14%1.2 << endl;

    system("pause");
    return 0;
}