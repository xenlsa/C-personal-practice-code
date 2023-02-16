#include <iostream>
using namespace std;
int main()
{
    // 逻辑运算符 与 &&
    // 同真为真,有假则假
    int a = 10;
    int b = 0;
    cout << (a && b) << endl;
     
    a = 10;
    b = 10;
    cout << (a && b) << endl;

    a = 0;
    b = 0;
    cout << (a && b) << endl;

    system("pause");
    return 0;
}