#include <iostream>
using namespace std;
int main()
{
    // 指针和数组
    // 利用指针访问数组中的元素
    int arr[3] = {1, 2, 3};
    cout << "第一个元素为" << arr[0] << endl;
    int *p = arr; // 指针指向数组首地址,arr为数组名数组名就是数组首地址
    cout << " 利用指针访问数组中第一个元素" << *p << endl;
    p++; // 只需要将指针向后偏移一位即可
    cout << "指针访问数组中的第二个元素" << *p << endl;
    int *p2 = arr;
    // 利用指针和for循环来遍历数组
    for (int i = 0; i < 3; i++)
    {
        cout << *p2 << endl;
        p2++;
    }
    system("pause");
    return 0;
}