#include <iostream>
using namespace std;
int main()
{
    // 1,前置递增
    int i = 1;
    ++i;
    cout << "i=" << i << endl;
    // 2,后置递增
    int j = 1;
    j++;
    cout << "i=" << j << endl;
    // 3,二者区别
    int a1 = 10, b1 = 10, a2 = 10;
    // 前置递增先+1再进行后续运算
    cout << ++a1 * b1 << endl;
    // 后置递增先运算最后+1
    cout << a2++ * b1 << endl;

    system("pause");
    return 0;
}