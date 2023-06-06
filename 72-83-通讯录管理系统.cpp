#include <iostream>
#include <string>
#define MAX 100
using namespace std;
// 联系人结构体
struct person
{
    string name;
    int sex;
    int age;
    string phoneNember;
    string adress;
};
// 通讯录结构体
struct adressbooks
{
    struct person personArray[MAX];
    int size;
};
// 添加联系人
void addPerson(adressbooks *abs)
{
    if (abs->size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {

        cout << "请输入姓名" << endl;
        string name;
        cin >> name;
        abs->personArray[abs->size].name = name;

        while (true)
        {
            cout << "请输入性别 1,男 2,女 " << endl;
            int sex;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->size].sex = sex;
                break;
            }
            else
            {
                cout << "请输入正确的性别" << endl;
            }
        }

        while (true)
        {
            cout << "请输入年龄" << endl;
            int age;
            cin >> age;
            if (age > 0 && age <= 100)
            {
                abs->personArray[abs->size].age = age;
                break;
            }
            else
            {
                cout << "请输入0-100内的数字" << endl;
            }
        }

        cout << "请输入电话号码" << endl;
        string phoneNember;
        cin >> phoneNember;
        abs->personArray[abs->size].phoneNember = phoneNember;

        cout << "请输入地址" << endl;
        string adress;
        cin >> adress;
        abs->personArray[abs->size].adress = adress;
        abs->size++;
        cout << "添加成功" << endl;
        system("pause");
        system("cls");
    }
}
// 显示联系人
void showPersom(adressbooks *abs)
{
    if (abs->size == 0)
    {
        cout << "通讯录为空" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        for (int i = 0; i < abs->size; i++) // 注意是<不是<=
        {
            cout << "姓名:" << abs->personArray[i].name << "\t";
            cout << " 性别:" << (abs->personArray[i].sex == 1 ? "男" : "女") << "\t";
            cout << " 年龄:" << abs->personArray[i].age << "\t";
            cout << " 电话:" << abs->personArray[i].phoneNember << "\t";
            cout << " 地址:" << abs->personArray[i].adress << endl;
        }
        system("pause");
        system("cls");
    }
}
// 判断联系人是否存在
int isExist(adressbooks *abs, string name)
{
    for (int i = 0; i < abs->size; i++)
    {
        if (name == abs->personArray[i].name)
        {
            return i;
        }
    }
    return -1;
}
// 删除联系人
void deletePerson(adressbooks *abs)
{
    cout << "请输入要删除的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for (int i = ret; i < abs->size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->size--;
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}
// 查找联系人
void findPerson(adressbooks *abs)
{
    cout << "请输入要查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        cout << "姓名:" << abs->personArray[ret].name << "\t";
        cout << " 性别:" << (abs->personArray[ret].sex == 1 ? "男" : "女") << "\t";
        cout << " 年龄:" << abs->personArray[ret].age << "\t";
        cout << " 电话:" << abs->personArray[ret].phoneNember << "\t";
        cout << " 地址:" << abs->personArray[ret].adress << endl;
    }
    system("pause");
    system("cls");
}
// 修改联系人
void modifyPerson(adressbooks *abs)
{
    cout << "请输入要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        cout << "请输入姓名" << endl;
        string name1;
        cin >> name;
        abs->personArray[ret].name = name1;

        while (true)
        {
            cout << "请输入性别 1,男 2,女 " << endl;
            int sex;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ret].sex = sex;
                break;
            }
            else
            {
                cout << "请输入正确的性别" << endl;
            }
        }
        while (true)
        {
            cout << "请输入年龄" << endl;
            int age;
            cin >> age;
            if (age > 0 && age <= 100)
            {
                abs->personArray[ret].age = age;
                break;
            }
            else
            {
                cout << "请输入0-100内的数字" << endl;
            }
        }

        cout << "请输入电话号码" << endl;
        string phoneNember;
        cin >> phoneNember;
        abs->personArray[ret].phoneNember = phoneNember;

        cout << "请输入地址" << endl;
        string adress;
        cin >> adress;
        abs->personArray[ret].adress = adress;
    }
    cout << "修改成功" << endl;
    system("pause");
    system("cls");
}
void cleanPerson(adressbooks *abs)
{
    cout << "输入yes确认清空" << endl;
    string sure;
    cin >> sure;
    if (sure == "yes")
    {
        abs->size = 0;
        cout << "清空成功" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        cout << "取消清空" << endl;
        system("pause");
        system("cls");
    }
}
// 展示菜单
void showMenu()
{
    cout << "| 1,添加联系人 |" << endl;
    cout << "| 2,显示联系人 |" << endl;
    cout << "| 3,删除联系人 |" << endl;
    cout << "| 4,查找联系人 |" << endl;
    cout << "| 5,修改联系人 |" << endl;
    cout << "| 6,清空联系人 |" << endl;
    cout << "| 0,退出通讯录 |" << endl;
}
int main()
{
    struct adressbooks abs;
    abs.size = 0;
    while (true)
    {
        showMenu();
        int select = 0;
        cin >> select;
        switch (select)
        {
        case 1: // 添加联系人
            addPerson(&abs);
            break;
        case 2: // 显示联系人
            showPersom(&abs);
            break;
        case 3: // 删除联系人
        {
            // cout << "请输入要删除的联系人姓名:" << endl;
            // string name;
            // cin >> name;
            // if (isExist(&abs, name) == -1)
            // {
            //     cout << "查无此人" << endl;
            // }
            // else
            // {
            //     cout << "找到此人" << endl;
            // }
            deletePerson(&abs);
            break;
        }
        case 4: // 查找联系人
            findPerson(&abs);
            break;
        case 5: // 修改联系人
            modifyPerson(&abs);
            break;
        case 6: // 清空联系人
            cleanPerson(&abs);
            break;

        case 0: // 退出通讯录
            cout << "欢迎再次使用" << endl;
            system("pause");
            return 0;
            // break;
        default:
            cout << "输入有误,请重新输入" << endl;
            system("pause");
            system("cls"); // 清屏
            break;
        }
    }

    system("pause");
    return 0;
}