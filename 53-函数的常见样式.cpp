#include <iostream>
using namespace std;
//1,无参无返
void test1()
{
    cout <<"this is test1"<<endl;
}
//2,有参无返
void test2(int a)
{
    cout <<"this is test2 a="<<a<<endl;
}
//3,无参有返
int test3()
{
    cout << "this is test3"<< endl;
    return 100;

}

//4,有参有返
int test4(int a)
{
    cout <<"this is test3 a="<< a << endl;
    return a;//随你怎么返回a还是0还是10000
}

int main()
{
    //1,无参无返函数调用
    test1();
    //2,有参无返函数调用
    test2(1234);
    //3,无参有返函数调用
    int num3=test3( );
    cout << "num1="<< num3 <<endl;
    //4,有参有返函数调用
    int num4=test4(4);
    cout << "返回值是"<< num4<< endl;
    system("pause");
    return 0;
}