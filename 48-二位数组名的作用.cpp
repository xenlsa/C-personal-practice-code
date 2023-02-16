#include <iostream>
using namespace std;
int main()
{   //作用1,获取内存占用
    // int arr[2][3]=
    // {
    //     {1,2,3},
    //     {4,5,6}
    // };
    // cout << "数组arr所占内存为" <<  sizeof(arr) << endl;
    // cout << "每个所占内存为" << sizeof (arr[0][0]) << endl;
    // cout << "每一行占用内存" << sizeof(arr[0]) <<endl;
    // cout << "二维数组列数" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;
    // cout << "二维数组行数" << sizeof(arr)/sizeof(arr[0]) << endl;

    //作用2,获取首地址
    int arr[2][3]{
        {1,2,3}
        ,{4,5,6}
    };
    cout << "数组首地址为" << (long long )&arr << endl;
    cout << "数组第一个元素首地址为"<< (long long)&arr[0][0] <<endl;
    cout << "数组第一行元素首地址为"<< (long long)&arr[0] <<endl;
    cout << "数组第二个元素首地址为"<< (long long)&arr[0][1] <<endl;
    cout << "数组第二行元素首地址为"<< (long long)&arr[1] <<endl;
    cout << "数组第二行第一个元素首地址为"<< (long long)&arr[1][0] <<endl;

system("pause");
return 0;
}

