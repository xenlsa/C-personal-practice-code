#include <iostream>
using namespace std;
int main(){
    //引用的作用：给变量重新起别名
    //引用的语法: 原数据类型 &别名 = 原名
    int a=10;
    int &b =a;
    b=20;
    cout << b << endl;

    system("pause");
    return 0;
}