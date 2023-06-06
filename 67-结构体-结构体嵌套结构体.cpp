#include <iostream>
using namespace std;
#include <string>
// 创建学生结构体
struct student
{
    string name;
    int age;
    int score;
};
// 创建老师结构体
struct teacher
{
    int id;
    string name;
    struct student stu;
};
int main()
{
    // 嵌套结构体
    // 创建老师
    struct teacher t1;
    t1.id = 10000;
    t1.name = "老王";
    t1.stu.age = 18;
    t1.stu.name = "小王";
    t1.stu.score = 96;
    cout << "教职工编号:" << t1.id << endl;
    cout << "教职工姓名:" << t1.name << endl;
    cout << "学生姓名:" << t1.stu.name << endl;
    cout << "学生年龄:" << t1.stu.age << endl;
    cout << "学生分数:" << t1.stu.score << endl;
    system("pause");
    return 0;
}