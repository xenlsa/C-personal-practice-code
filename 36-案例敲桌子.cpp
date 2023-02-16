#include <iostream>
using namespace std;
int main(){
    int i=1;
    for( ; i<=100; i++)
    {
        if( i%7==0 || i%10==7 || i/10==7 )//是特殊数字
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << i <<endl;
        }

    }
    system("pause");
    return 0;
}