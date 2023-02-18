#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, c = 0;
    c = (a > b ? a : b); // 括号不加也行
    cout << "c的值为" << c << endl;
    // 三目运算符返回的是变量，例如上式返回的为b，可以继续被赋值如下
    (a > b ? a : b) = 100; // 括号不加也行
    cout << "b的值为" << b << endl;
    system("pause");
    return 0;
}
