#include <iostream>
using namespace std;
int main() {
    cout<<"请给电影打分"<<endl;
    int score;
    cin>>score;
    cout<<"您打出的分数为"<<score<<"分"<<endl;
    switch(score)
    {
    case 10:
    case 9:
        cout<<"您的评价是影视经典"<<endl;
        break;
    case 8:
    case 7:
        cout<<"您的评价是非常好"<<endl;
        break;
    case 6:
    case 5:
        cout<<"您的评价是一般"<<endl;
        break;
    default:
        cout<<"您的评价是烂片"<<endl;
        break;
    }
    //switch和if的区别
    //switch仅可用于整型或者字符型判断，不可用于区间比较判断
    //switch优点结构清晰，效率高
    //注意要写break;

    system("pause");
    return 0;
    }
