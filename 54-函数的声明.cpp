#include <iostream>
using namespace std;
// 函数声明的作用
// 告诉编译器函数名称以及如何调用函数.函数的实际主体可以单独定义;
// 函数的定义只有一次,声明可以有多次;
// 声明方法 int name (int a);
void swap(int num1, int num2);//提前明swap可以将函数定义在main函数后面

int main()
{
    int a = 10, b = 20;
    cout << "交换前a,b"
         << "  " << a << " " << b << endl;
    swap(a, b);

    system("pause");
    return 0;
}

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后a,b"
         << "  " << num1 << " " << num2 << endl;
}