#include <iostream>

using namespace std;

// 堆区
// 由程序员进行管理和释放,若不释放则由操作系统进行回收
// 利用new关键字在堆区中开辟内存

int *func()
{
    // 开辟完内存后会将地址返回,用指针进行接收
    //  指针是局部变量,放在栈区,指针指向的数据保存在堆区
    int *p = new int(10);
    return p;
}
int main()
{
    // 在堆区开辟数据
    // 为什么函数中p为局部变量,应该被释放,而输出多次均正常输出呢
    // 调用函数执行后已经将地址传给了主函数中的p,主函数没有执行完毕所以没有被释放
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;

    system("pause");
    return 0;
}
