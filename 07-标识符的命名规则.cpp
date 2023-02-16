#include <iostream>
using namespace std;
int main()
{
    // 标识符不可以是关键字
    // 标识符由字母数字下划线组成
    // 标识符第一个字符只能是字母或者下划线
    // 标识符区分大小写

    // int int=10; 错误
    int abc = 10;
    int _abc = 10;
    int _123abc = 10;
    // int 123abc =10; 错误
    // 建议：给标识符命名时，争取做到见名知意的效果，方便自己和他人的阅读

    system("pause");
    return 0;
}