#include <iostream>
using namespace std;
#include"swap.h"
//1,创建一个.h结尾的头文件
//2,创建一个.cpp结尾的源文件
//3,在头文件中写函数声明和#include ,using ,
//3,在源文件中写函数定义和包含头头文件
//4,在代码中包含头文件
//注意包含头文件时应该改用""而不是继续使用<>

// void swap(int num1,int num2);

// void swap (int num1,int num2)
// {
//     int temp=num1;
//     num1=num2;
//     num2=temp;
// }

int main( )
{
    int a=10,b=20;
    swap(a,b);

    system("pause");
    return 0;
}