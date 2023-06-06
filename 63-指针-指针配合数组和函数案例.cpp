#include <iostream>
using namespace std;
void bubbleSort(int *arr, int leng)//冒泡排序
{
    for (int i = 0; i < leng - 1; i++)
    {
        for (int j = 0; j < leng - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArr(int *arr, int leng)//打印数组
{
    for (int i = 0; i < leng; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int leng = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, leng);
    printArr(arr, leng);
    system("pause");
    return 0;
}