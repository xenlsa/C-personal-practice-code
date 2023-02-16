#include <iostream>
using namespace std;
int main(){
    int arr[ 5 ] = {10,20,35,45,5};
    int max = 0;//先认定一个最大值

    // for(int i = 0; i < 5; i++)//for循环变量数组
    // {
    //     //cout << arr [ i ] << endl;
    //     if(arr [ i ] > max)//比较
    //     {
    //         max = arr [ i ];//将数值大的赋值给max更新最大值
    //     }

    // }
    // cout << max << endl;
    
    //以下用三目运算解决
    for(int i = 0; i < 5; i++)
    {
        max = (max < arr [ i ] ? arr[i]: max );
        
    }
    cout << max << endl;

system("pause");
return 0;
}
