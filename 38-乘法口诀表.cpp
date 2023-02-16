#include <iostream>
using namespace std;
int main (){
    for(int i = 1; i <= 9; i++)
    {
        //cout << i << endl;
        for(int j = 1; j <= 9; j++)
        {
            if(i>=j)
            {
                cout << "\t" << j << "*" << i << "=" << j*i <<" "; 
            }

            
        }
        cout << endl;
    }
    system("pause");
    return 0;
}