#include <iostream>
using namespace std;
int main()
{
   // 二位数组的几种定义方式
   // 1, 数据类型 数组名[行数][列数] = { {1,2,3,4,5} , {1,2,3,4,5} };
   // 2, 数据类型 数组名[行数][列数];
   // 3, 数据类型 数组名[行数][列数] = {1,2,3,4,5};
   // 4, 数据类型 数组名[   ] [列数] ={1,2,3,4,5};

   // 1,
   // int arr[2][3] =
   //     {
   //         {1, 2, 3},
   //         {4, 5, 6}};
   //for循环打印,外循环打印行数,内循环打印列数
   // for (int i = 0; i < 2; i++)
   // {
   //    for (int j = 0; j < 3; j++)
   //    {
   //       cout << arr[i][j] << " ";
   //    }
   //    cout << endl;
   // }

   //2,
   // int arr[2][3];
   // arr[0][0]=1;
   // arr[0][1]=2;
   // arr[0][2]=3;
   // arr[1][0]=4;
   // arr[1][1]=5;
   // arr[1][2]=6;
   // for(int i=0;i<2;i++)
   // {
   //    for(int j=0;j<3;j++)
   //    {
   //       cout << arr[i][j] << " " ;
   //    }
   //    cout << endl;
   // }

   //3,
   // int arr[2][3]={1,2,3,4,5,6};
   // for(int i=0;i<2;i++)
   // {
   //    for(int j=0;j<3;j++)
   //    {
   //       cout << arr[i][j]<< " ";
   //    }
   //    cout << endl;
   // }

   //4,
   int arr[][3]={1,2,3,4,5,6};
   for(int i=0;i<2;i++)
   {
      for(int j=0;j<3;j++)
      {
         cout << arr[i][j] <<" ";
      }
      cout <<endl;
   }
   
   system("pause");
   return 0;
}