#include <iostream>
using namespace std;
int main(){
    //GO TO语句
    //代码过多尽量避免使用
    cout << "1" << endl;
    goto FLAG;//注意分号
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    FLAG://注意为冒号
    cout << "5" << endl;
    cout << "6" << endl;

    system("pause");
    return 0;
}