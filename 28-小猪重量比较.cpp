#include <iostream>
using namespace std;
int main()
{
    // 三只小猪重量比较
    int pig1 = 0, pig2 = 0, pig3 = 0;
    cout << "请输入三只小猪的体重" << endl;
    cin >> pig1 >> pig2 >> pig3;
    cout << "pig1=" << pig1 << endl;
    cout << "pig2=" << pig2 << endl;
    cout << "pig3=" << pig3 << endl;
    if (pig1 > pig2)
    {
        if (pig1 > pig3)
        {
            cout << "pig1最重" << endl;
        }
        else
        {
            cout << "pig3最重" << endl;
        }
    }
    else
    {
        if (pig2 > pig3)
        {
            cout << "pig2最重" << endl;
        }
        else
        {
            cout << "pig3最重" << endl;
        }
    }
    system("pause");
    return 0;
}