#include <iostream>
#include <string>
using namespace std;
// 结构体指针
struct student
{
    string name;
    int age;
    int score;
};
int main()
{
    // 利用操作符->可以通过结构体指针访问结构体属性
    // 1,创建学生结构体变量
    struct student s = {"张三", 16, 100};

    // 2,通过指针指向结构体变量
    student *p = &s;

    // 3,通过指针访问结构体变量中的数据
    cout << p->name << p->age  << " "<< p->score << endl;
    system("pause");
    return 0;
}