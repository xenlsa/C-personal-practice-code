#include <iostream>
using namespace std;
int main()
{
    // sizeof可以求出数据类型占的内存空间
    // 语法 sizeof(数据类型/变量)
    short num1 = 10;
    cout << "short所占内存空间为" << sizeof(num1) << endl;
    int num2 = 10;
    cout << "int所占内存空间为" << sizeof(num2) << endl;
    float num3 = 10;
    cout << "float所占内存空间为" << sizeof(num3) << endl;
    double num4 = 10;
    cout << "double所占内存空间为" << sizeof(num4) << endl;

    system("pause");
    return 0;
}