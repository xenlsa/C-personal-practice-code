#include <iostream>
using namespace std;
int main()
{
    // 1,单精度float
    // 2,双精度double
    // 输出一个小数默认显示六位有效数字
    float fl = 3.14f; // 默认是双精度加一个f表示单精度
    cout << fl << "占用内存" << sizeof(float) << endl;

    double dou = 3.14;
    cout << dou << "占用内存为" << sizeof(double) << endl;

    // 科学计数法
    float f1 = 3e2; // 3*10^2
    cout << "fl=" << f1 << endl;
    float f2 = 3e-2; // 3*10-2
    cout << "f2=" << f2 << endl;

    system("pause");
    return 0;
}