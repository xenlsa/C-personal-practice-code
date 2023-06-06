#include <iostream>
#include <string>
using namespace std;
struct students
{
    string name;
    int age;
    int score;
};
// 使用const避免操作对数据误修改
void printfStudent(const students *s)
{
    // s->age=99;
    cout << "姓名 " << s->name << " 年龄 " << s->age << " 分数 " << s->score << endl;
}

int main()
{
    struct students s1 = {"张三", 32, 99};
    // 传函数参数时使用指针可以减少内存占用,应为值传递要将全部的值传输进去,而地址传递只要将地址进行传递即可
    printfStudent(&s1);
    system("pause");
    return 0;
}