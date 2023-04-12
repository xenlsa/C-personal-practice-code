#include <iostream>
#include <string>
using namespace std;
int main()
{
    // 结构体属于用户自定义的数据类型,允许用户储存不同的数据类型
    // 1,创建学生的数据类型
    // 自定义数据类型-一些一些类型集合组成的一个类型
    // 语法 struct 类型名称 {成员列表};
    struct Student
    {
        string name;
        int age;
        int score;
    } s3; // 注意需要加分号

    // 2,通过学生类型创建具体学生

    // 2.1 steuct Student s1
    // 创建成员的时候struct可以省略,但在定义时不可以省略
    struct Student s1;
    // 给s1赋值
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "姓名:" << s1.name << "年龄:" << s1.age << "分数:" << s1.score << endl;

    // 2.2 struct Student s2={}
    struct Student s2 = {"李四", 19, 99};
    cout << "姓名:" << s2.name << "年龄:" << s2.age << "分数:" << s2.score << endl;

    // 2.3 在定义结构体是顺便创建结构体变量
    s3.name = "王五";
    s3.age = 18;
    s3.score = 98;
    cout << "姓名:" << s3.name << "年龄:" << s3.age << "分数:" << s3.score << endl;
    system("pause");
    return 0;
}