#include <iostream>
using namespace std;
struct hero
{
    string name;
    int age;
    int score;
};
void bubbsort(struct  hero heros[],int len)
{
    for(int i=0 ; i < len - 1 ; i++)
    {
        for (int j=0;j<len-1-i ;j++)
        {
            if (heros[j].score<heros[j+1].score)
            {
                struct hero temp =heros[j];
                heros[j] = heros[j+1];
                heros[j+1] = temp;
            }
        }
    }
}
void printheros(struct hero heros[],int len)
{
        for (int i = 0; i < len; i++)
    {
        cout << "姓名:"<< heros[i].name << " 年龄:"<< heros[i].age << " 分数:"<< heros[i].score << endl;
    }
}
int main()
{
    struct hero heros[5]
    {
        {"关羽", 23, 78},
        {"张飞", 20, 48},
        {"刘备", 25, 98},
        {"貂蝉", 24, 58},
        {"曹操", 28, 68}
    };
    int len = sizeof(heros) / sizeof(heros[0]);
    //for循环打印
    // for (int i = 0; i < len; i++)
    // {
    //     cout << "姓名:"<< heros[i].name << " 年龄:"<< heros[i].age << " 分数:"<< heros[i].score << endl;
    // }
    bubbsort(heros,len);
    printheros(heros,len);

    system("pause");
    return 0;
}