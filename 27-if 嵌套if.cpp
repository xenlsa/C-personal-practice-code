#include <iostream>
using namespace std;
int main()
{
    int score = 0;
    cout << "请输入您的分数:" << endl;
    cin >> score;
    cout << "您的分数为" << score << endl;
    if (score > 600)
    {
        cout << "恭喜你考入一本大学" << endl;
        if (score > 680)
        {
            cout << "恭喜你考入清华" << endl;
        }
        else if (score > 640)
        {
            cout << "恭喜你考入北大" << endl;
        }
    }
    else if (score > 500)
    {
        cout << "恭喜你考入二本大学" << endl;
        if (score > 580)
        {
            cout << "恭喜你考入郑州大学" << endl;
        }
        else if (score > 540)
        {
            cout << "恭喜你考入河南大学" << endl;
        }
        else if (score > 510)
        {
            cout << "恭喜你考入河南理工大学" << endl;
        }
    }
    else if (score > 400)
    {
        cout << "恭喜你考入三本大学" << endl;
    }
    else
    {
        cout << "恭喜你考入大专" << endl;
    }
    system("pause");
    return 0;
}