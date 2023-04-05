#include <iostream>
using namespace std;
// 实现两个数字的交换
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap2(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    // 1,值传递
    int a = 1, b = 2;
    swap1(a, b);
    cout << "a=" << a << " "
         << "b=" << b << endl;
    // 2,地址传递
    swap2(&a, &b); // 注意要加取地址符
    // a,b的值发生改变
    cout << "a=" << a << " "
         << "b=" << b << endl;
    system("pause");
    return 0;
}