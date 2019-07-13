#include<iostream>
#include<conio.h>

using namespace std;

void sort()
{
    int i, j, n, temp, arr[30];
    for(i=0;i<n;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << "\nAfter sorting: " << endl;
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    int i, n, arr[30];
    cout << "Array size: ";
    cin >> n;
    
    cout << "Values: " << endl;
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Data: " << endl;
    for(i=0; i<n; i++)
    {
        cout << arr[i]<< " ";
    }
    
    sort();
    
    getch();
    return 0;
}
