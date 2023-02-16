#include <iostream>
using namespace std;
int add(int num1, int num2)//num1,num2为形参
{
    int sum = num1 + num2;
    return sum;
}

int main()
{   
    int a=1,b=3;
    int sum = add(1, 2);
    int sum2=add(a,b);//a,b为实参

    cout << sum << endl;
    cout << add(1, 2) << endl;
    cout << sum2 << endl;
    system("pause");
    return 0;
}