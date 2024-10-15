#include <iostream>
using namespace std;
template < typename T>
void sorting(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "\nSorted array : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	const int n = 5;
	int arr1[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter elements of array to sort  :";
		cin >> arr1[i];
	}
	cout << "\n UN-Sorted array : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] << " ";
	}
	sorting(arr1, n);
	cout << endl;
	string arr2[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter elements of array to sort  :";
		cin >> arr2[i];
	}
	cout << "\n UN-Sorted array : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}
	sorting(arr2, n);
	
	return 0;
}