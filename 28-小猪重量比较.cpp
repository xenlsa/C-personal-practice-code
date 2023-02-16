#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3;
    cout << "请输入三只猪的体重"<<endl;
    cin  >> num1;
    cin  >> num2;
    cin  >> num3;
    cout<<"小猪一"<< num1<<endl;
    cout<<"小猪二"<< num2<<endl;
    cout<<"小猪三"<< num3<<endl;
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout <<"小猪一最重"<<endl;

        }else{cout <<"小猪三最重"<<endl;}
    }else if(num2>num3){cout <<"小猪二最重"<<endl;}
    else{cout <<"小猪三最重"<<endl;}

    system("pause");
    return 0;
    }
