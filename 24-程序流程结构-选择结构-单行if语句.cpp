#include <iostream>
using namespace std;
int main()
{
    // 选择结构 单行if语句
    int score = 0;
    cout << "请输入您的分数" << endl;
    cin >> score;
    cout << "您输入的分数是:" << score << endl;
    if (score > 600)
    {
        cout << "6" << endl;
    }
    system("pause");
    return 0;
}