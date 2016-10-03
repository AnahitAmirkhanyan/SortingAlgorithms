#include <iostream>

using namespace std;

/*
	This is a group work by 
	Ani Gevorgyan &
	Anahit Amirkhanyan
*/


//Selection Sort 

void SelectionSort(int a[], int n)
{
	// ascending
	

	for (int i = 0; i < n; i++)
	{
		int smallest = a[i];
		int smallest_i = i;

		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < smallest)
			{
				smallest = a[j];
				smallest_i = j;
			}

		}

		swap(a[i], a[smallest_i]);
	}
}

//Bubble Sort
void Bubble_Sort(int a[], int n)
{
	//ascending 
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < n-1; j++)
		{
			if (a[j] > a[j+1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

//Insertion Sort
void InsertionSort(int a[], int n) {
	
	int j;

	for (int i = 0; i < n; i++) {
		j = i;

		while (j > 0 && a[j] < a[j - 1]) {
			swap(a[j], a[j - 1]);
			j--;
		}
	}

	
}

// Merge Sort

void Merge(int a[], int n, int low, int mid, int high)
{
	int tmp[10];
	int i = low;
	int j = mid+1;
	int k = low;

	for (i = low; i < high; i++)
	{
		tmp[i] = a[i];
	}

	while (i <= mid && j <= high)
	{
		if (tmp[i] <= tmp[j])
		{
			a[k] = tmp[i];
			++i;
		}
		else
		{
			a[k] = tmp[j];
			++j;
		}
		++k;

	}

	while (i <= mid)
	{
		a[k] = tmp[i];
		++i;
		++k;
	}
	
}
void MergeSort(int a[], int n, int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		MergeSort(a, n, low, mid);
		MergeSort(a, n, mid+1, high);
		Merge(a, n, low, mid, high);
	}
}

void QuickSort(int a[], int left, int right)
{
	int i = left, j = right;
	int tmp;
	int pivot = a[(left + right) / 2];

	
	while (i <= j) {
		while (a[i] < pivot)
			i++;
		while (a[j] > pivot)
			j--;
		if (i <= j) {
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	
	if (left < j)
		QuickSort(a, left, j);
	if (i < right)
		QuickSort(a, i, right);
}



int main()
{
	const int n = 10;
	int a[10];
	cout << "please enter " << n << " numbers" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	//SelectionSort(a,n);
	//Bubble_Sort(a,n);
	//InsertionSort(a, n);
	//MergeSort(a, n, 0, n - 1);
	//QuickSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}


	system("pause");
	return 0;
}
