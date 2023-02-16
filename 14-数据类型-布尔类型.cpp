#include <iostream>
using namespace std;
int main()
{
    // 创建布尔类型
    bool bl = true;  // 代表真,本质是1
    bool bo = false; // 代表假,本质为0

    cout << bl << endl;
    cout << bo << endl;
    // 查看所占内存
    cout << "bool类型所占内存为"<<  sizeof (bool) << endl;
    cout << "hello world" << endl;
    system("pause");
    return 0;
}