#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 6, 9, 5, 1, 3, 0, 8, 7};
    cout << "排序前" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
        cout << " ";
    }

    cout << endl;

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "排序后" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
        cout << " ";
    }

    cout << endl;
    system("pause");
    return 0;
}