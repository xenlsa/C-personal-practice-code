#include <iostream>
#include <string>
using namespace std;
// 定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};
// 打印学生信息的函数
//  值传递
void printStudent1(struct student s)
{
    s.age = 999;
    cout << "值传递打印 姓名 " << s.name << " 年龄 " << s.age << " 分数 " << s.score << endl;
}
// 地址传递
void printStudent2(struct student *p)
{
    p->age = 100000;
    cout << "地址传递打印 姓名 " << p->name << " 年龄 " << p->age << " 分数 " << p->score << endl;
}
int main()
{
    // 结构体做函数参数
    // 将学生传入一个参数中，打印学生身上所有信息
    // 创建结构体变量
    struct student s1 = {
        "张三", 44, 99};
    // s1.name = "王五";
    cout << "主函数打印 姓名 " << s1.name << " 年龄 " << s1.age << " 分数 " << s1.score << endl;
    printStudent1(s1);
    printStudent2(&s1);
    cout << "主函数再打印 姓名 " << s1.name << " 年龄 " << s1.age << " 分数 " << s1.score << endl;
    // 值传递不会改变变量的值,地址传递改变变量的值
    system("pause");
    return 0;
}