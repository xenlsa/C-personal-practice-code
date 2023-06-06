#include <iostream>
using namespace std;
int main(){
    //引用必须要初始化
    // int &b  错误写法
    //引用一旦初始化就不可以更改

    int a=10;
    // int &b ;

    int &b =a;
    int c=20;
    //引用一旦初始化就不可以更改
    // int &b=c;
    cout << b << endl;

    system("pause");
    return 0;
}