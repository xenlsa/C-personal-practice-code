#include <iostream>

using namespace std;

// 1,new的基本用法
int *func()
{
    // new返回的是地址用指针进行接受
    int *p = new int(10);
    return p;
}
// 2,在堆区用new开辟数组
void func1()
{
    int *arr = new int[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=i+100;

    }
    for(int j=0;j<10;j++)
    {
        cout << arr[j] << endl;
    }
}
int main()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    // 使用delete释放
    delete p;
    cout << *p << endl;
    cout << *p << endl;

    func1();
    system("pause");
    return 0;
}
