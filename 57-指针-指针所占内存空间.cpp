#include <iostream>
using namespace std;
int main()
{
    // 指针32位操作系统占4个字节,64位占8个字节
    // 指针也可看作一种数据类型
    int a = 100000000;
    int* p = &a;
    cout << "指针p所占内存为" << sizeof(int *) << endl;
    cout << "指针p所占内存为" << sizeof(p) << endl;
    cout << "指针p所占内存为" << sizeof(float *) << endl;
    cout << "指针p所占内存为" << sizeof(double *) << endl;
    cout << "指针p所占内存为" << sizeof(char *) << endl;
    system("pause");
    return 0;
}