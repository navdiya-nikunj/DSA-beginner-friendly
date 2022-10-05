
#include <bits/stdc++.h>
using namespace std;

//Swap Function for Swaping Elements
void swap(int *xp, int *yp) 
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//Selection Sort
void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int min_idx = i;	//The Minimum Element
		for (int j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		if(min_idx!=i)
			swap(&arr[min_idx], &arr[i]); //Swapping Elements if it is less than minimum index
	}
}


int main()
{
	int arr[] = {102,6,74,50,64,98,47,63,112};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	for (int i=0; i < n; i++)
		cout << arr[i] << " "; //Printing the Array
	return 0;
}

