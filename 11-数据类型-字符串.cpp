#include <iostream>
using namespace std;
int main()
{
    // 字符型占用一个字节
    // 必须用单引号引起来且单引号中只能放一个字符
    // 字符型变量储存时将对应的ascii码存入内存
    char a = 'a';
    cout << "a=" << a << " a所占内存" << sizeof(a) << endl;
    cout << "a对应的ascii码值为" << (int)a << endl;

    char A = 'A';
    cout << "A=" << A << " A所占内存" << sizeof(A) << endl;
    cout << "A对应的ascii码值为" << (int)A << endl;

    system("pause");
    return 0;
}