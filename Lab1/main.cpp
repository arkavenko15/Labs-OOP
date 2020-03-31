	#include<iostream>
	#include <conio.h>
	using namespace std;
	int max(int* arr, float size)
	{
			int max = arr[0];
			for (int i = 1; i < size; i++)
					if (arr[i] > max)
						max = arr[i];
			return max;
		}
	double max(double*arr, double size)
	{
		double max = arr[0];
		for (int i = 0; i < size; i++)
				if (arr[i] > max)
					max = arr[i];
		return max;
		}
	int main()
	{
			const int s = 5;
			int arr[s];
			double arr1[s];
			cout << "Enter int array:\n";
			for (int i = 1; i < s; i++)
					cin >> arr[i];
			cout << "Enter double array:\n";
		for (int i = 1; i < s; i++)
					cin >> arr1[i];
			cout << "Max of int:" << max(arr, s) << endl;
			cout << "Max of double:" << max(arr1, s) << endl;
			cout << endl;
			system("pause"); }
