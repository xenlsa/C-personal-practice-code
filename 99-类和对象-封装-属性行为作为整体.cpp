#include <iostream>
using namespace std;
const double pai=3.14;
class Circle
{
    public:
    int r;
    double zhouchang ()
    {
        return 2*pai*r ;
    }
};
int main()
{
    Circle c1;
    c1.r=1;
    cout << "周长"<< c1.zhouchang ()<< endl;
    system("pause");
    return 0;
}