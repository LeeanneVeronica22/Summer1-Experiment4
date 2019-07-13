#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int n, arr[30], i, j, temp;
	
	cout << "Array size: ";
	cin >> n;
	cout << "\nEnter the " << n << " elements: \n";
		
	for(i=0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nData: " << endl;
	
	for(i=0; i < n; i++)
	{
	cout << arr[i] << " ";
	}
	
	
	
	for(i=0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{	
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
	}
	
	cout << "\n\nAfter sorting: "<< endl;
	
	for(i=0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	getch();
	return 0;
}
