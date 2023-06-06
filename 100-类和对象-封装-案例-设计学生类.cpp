#include<iostream>
#include<string>
using namespace std;
class students
{
    public:
    string name;
    string sex;
    int age;
    void prin()
    {
        cout << "姓名:"<<name << " 性别:"<< sex << " 年龄:"<< age << endl;
    }
    void setName(string names)
    {
        name=names;
    }
};
int main()
{
    students s1;
    s1.name="张三";
    s1.sex="男";
    s1.age=19;
    s1.setName("德玛西亚"); 
    s1.prin();
    system("pause");
    return 0;
}