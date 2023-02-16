#include <iostream>
using namespace std;
int main() {
    int num=99;
    int a=0,b=0,c=0;

    do{
        num++;
        a=num%10;
        b=(num/10)%10;
        c=num/100;
        if(num==a*a*a+b*b*b+c*c*c)
        {
            cout<<num<<endl;
        }
    }
    while(num<999);

    system("pause");
    return 0;
    }