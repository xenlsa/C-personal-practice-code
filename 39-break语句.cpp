#include <iostream>
using namespace std;
int main(){
    //break使用时机
    //1,出现在switch语句中
    // cout << "请选择难度" << endl;
    // cout << "1,普通 2,中等 3,困难" << endl;
    // int select = 0;
    // cin >> select;

    // switch(select)
    // {
    //     case 1:
    //         cout << "您选择的是普通" << endl;
    //         break;
    //     case 2:
    //         cout << "您选择的是中等" << endl;
    //         break;
    //     case 3:
    //         cout << "您选择的是困难" << endl;
    //         break;
    //     default:
    //         break;
    // }
    //2,出现在循环语句中,会终止掉循环；
    // for(int i = 0; i < 10; i++)
    // {
    //      if (i == 5)
    //      {
    //         break;
    //      }
    //     cout << i << endl;
    // }
    //3，出现在嵌套循环语句中
    for(int i = 0; i < 10; i++)
    {
        cout << "* ";
        for(int j = 1; j <10; j++)
        {
            if(j == 5)
            {
                break;//退出当前内层循环,不会影响外层循环
            }
            cout << "* ";
        }
        cout << endl;
    }



    system("pause");
    return 0;
}
