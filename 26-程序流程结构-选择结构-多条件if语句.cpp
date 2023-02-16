#include <iostream>
using namespace std;
int main()
{
    int score = 0;
    cout << "请输入您的分数:";
    cin >> score;
    cout << "您输入的分数为:" << score << endl;
    if (score > 600)
    {
        cout << "6" << endl;
    }
    else if (score > 500)
    {
        cout << "还行" << endl;
    }
    else if (score > 400)
    {
        cout << "凑合" << endl;
    }
    else
    {
        cout << "寄" << endl;
    }
    system("pause");
    return 0;
}