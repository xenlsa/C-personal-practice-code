#include <iostream>
using namespace std;
#include <string>
// 结构体数组
// 结构体数组本质是数组,结构体是一种自定义的数据类型,
// 定义数组时数据类型为结构体
// 1,定义结构体
struct Student
{
    string name;
    int age;
    int score;
};
int main()
{
    // 2,创建结构体数组
    struct Student stuArry[3] =
        {
            {"张三", 18, 99},
            {"李四", 19, 98},
            {"王五", 20, 95}};
    // 3,修改结构体数组中的数据/给结构体数组中的元素赋值
    stuArry[2].name = "赵六";
    stuArry[2].age = 88;
    stuArry[2].score = 100;
    // 4, 遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << stuArry[i].name << stuArry[i].age << " " << stuArry[i].score << endl;
    }
    system("pause");
    return 0;
}