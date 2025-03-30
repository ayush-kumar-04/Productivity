#include<iostream>
using namespace std;
void shift(int a[], int n)
{
    int temp = a[n-1];
    for (int i = n-1; i > 0; i--)
    {
        a[i] = a[i - 1];
        
    }
    a[0] = temp;
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    temp = a[0];
    for (int i =0; i< n; i++)
    {
        a[i] = a[i+1];
        
    }
    a[n-1] = temp;
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}
/*void PrintZeroOne(int a[], int n, int x, int y)
{
    int i = 0;
    while (x != 0)
    {
        a[i] = 0;
        i++;
        x--;
    }
    while(y!=0)
    {
        a[i] = 1;
        i++;
        y--;
    }
    cout << "The sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}*/
int main()
{
    /*int a[] = {10, 20, 30};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = a[i] + a[j];
            cout <<"("<<a[j] << "+" << a[i]<<")"<<"="<<sum<<"  ";
        }
        cout << endl;
    }*/
    
    int a[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    shift(a, n);
    /*cout << "Enter the size of an array:";
    cin >> n;
    int a[n];
    cout << "Enter elements of the array"<<endl;
    for (int i = 0; i < n; i++)
            {
                cout << "Enter element at" << i <<" index:";
                cin >> a[i];
                if(a[i]==0)
                    x++;
                else
                    y++;
            }
            cout << "The array is:" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            PrintZeroOne(a, n, x, y);
            */

            return 0;
}