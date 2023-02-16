#include <iostream>
using namespace std;
//打印数组用for循环

int main(){
    int arr [5] = {1,2,3,4,5};
    cout << "初始数组" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << arr[ i ] ;//打印初始数组
        cout << " " ;
    }
    int start = 0;//获取第一个元素下标
    int end = sizeof(arr)/sizeof(arr[0]) - 1;//获取最后一个元素下标
    while (start  < end )
    {
        int temp = 0;
    temp = arr [ start ];
    arr[ start ] = arr [ end  ];
    arr[ end ] = temp;
    start++;
    end--;
    }
    cout << endl; 
    cout << "逆置后的数组" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << arr [ j ] ;
        cout << " " ;

    }
    cout << endl;      
    system("pause");
    return 0;
}