#include <iostream>
using namespace std;
//值传递:函数在调用时将实参传递给形参
//函数做值传递时形参发生任何改变都不会影响实参

//定义一个交换函数
void swap(int num1,int num2)//如果函数不需要返回值声名时可以用void
{
    cout << "交换前" << num1<<" "<< num2 <<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout <<"交换后" << num1<<" "<< num2<<endl;
    return;//不需要返回值可以不写return也可以只写一个return；不加返回值
}
int main()
{
    int a=10,b=20;//实参,调用完a还是10，b还是20
    swap(a,b);
    
    system("pause");
    return 0;
}