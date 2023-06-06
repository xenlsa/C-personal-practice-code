#include <iostream>
#include <string>
using namespace std;
struct students
{
    string Sname;
    int age;
    int score;
};
struct teachers
{
    string Tname;
    struct students t1[5];
};
// 赋值函数
void fuzhi(struct teachers Tarray[3], int len)
{
    // 给老师赋值
    string nameSeed = "ABCDE" ;
    for (int i = 0; i < len; i++)
    {
        Tarray[i].Tname = "Teacher_";
        Tarray[i].Tname += nameSeed[i];

        //给学生赋值
        for (int j=0;j<5;j++)
        {
            Tarray[i].t1[j].Sname="Student_";
            Tarray[i].t1[j].Sname+=nameSeed[j];
            Tarray[i].t1[j].age=18+j;
            Tarray[i].t1[j].score=60;
        }
    }
}
//打印函数
void printInfo(struct teachers Tarray[],int len)
{
     for(int i=0;i<len;i++)
     {
        cout << "老师姓名"<< Tarray[i].Tname<< endl;
        for(int j=0;j<5;j++)
        {
            cout << "学生姓名"<< Tarray[i].t1[j].Sname << endl;
            cout << "学生年龄"<< Tarray[i].t1[j].age << endl;
            cout << "学生分数"<< Tarray[i].t1[j].score << endl;
        }
     }
}
int main()
{
    struct teachers Tarray[3];
    //赋值
    int len = sizeof(Tarray) / sizeof(Tarray[0]);
    fuzhi(Tarray, len);
    // 打印
    printInfo(Tarray,len);
    system("pause");
    return 0;
}