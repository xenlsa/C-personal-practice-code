#include <iostream>
#include <string>
using namespace std;
int main()
{
    // 整型
    int a = 0;
    cout << "请给a赋值" << endl;
    cin >> a;
    cout << "a=" << a << endl;
    // 浮点型
    float b = 3.14f;
    cout << "请给b赋值" << endl;
    cin >> b;
    cout << "b=" << b << endl;

    // 字符型
    char c = 'c';
    cout << "请给c赋值" << endl;
    cin >> c;
    cout << "c=" << c << endl;

    // 字符串
    string d = "ddd";
    cout << "请给d赋值" << endl;
    cin >> d;
    cout << "d=" << d << endl;

    // 布尔型 只要是非0的数都是真
    bool e = true;
    cout << "请给e赋值" << endl;
    cin >> e;
    cout << "e=" << e << endl;

    system("pause");
    return 0;
}