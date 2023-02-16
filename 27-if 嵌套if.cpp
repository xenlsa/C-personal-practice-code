#include <iostream>
using namespace std;
int main() {

    int a  = 0;
    cout << "请输入分数"<< endl;
    cin >> a;
    if (a>600)
        {cout << "恭喜进入600一本线"<<endl;
        if (a>700)
            {
                cout <<"国内容不下你"<<endl;
            }else if(a>650)
            {
                cout<<"恭喜进入清华"<<endl;
            }else if (a>625)
            {
                cout<<"恭喜进入北大"<<endl;
            }


        }
    else if(a>500)
        {
        cout << "500以上"<<endl;
    }
    else if(a>400)
    {
        cout << "400以上" <<endl;
    }else
    {
        cout<<"请回家种地"<<endl;

    }


    system("pause");
    return 0;
    }
