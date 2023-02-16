#include <iostream>
#include <string>
using namespace std;
int main()
{
    // 1,c风格字符串
    // 注意:字符串名字后面加中括号,字符串要用双引号
    char str1[] = "hello world";
    cout << str1 << endl;

    // 2,C++风格字符串
    // 注意使用改方式时应该包含头文件#include<string>
    string str2 = "hello c++";
    cout << str2 << endl;

    system("pause");
    return 0;
}