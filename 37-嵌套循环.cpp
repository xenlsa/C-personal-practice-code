#include <iostream>
using namespace std;
int main (){
    //打印一行星图
    //外层执行一次内层执行一周
    //外层循环
    for (int a = 0; a < 10; a++)
    {
    //内层循环
    for(int i = 0; i < 10; i++)
    {
        cout << "* ";//endl应该写在循环外面

    }
    cout << endl;
    }
    system("pause");
    return 0;
}