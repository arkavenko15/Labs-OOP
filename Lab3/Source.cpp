#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


void fill_array_one(int**, size_t);
void fill_array_scheme(int**, size_t);
void print_array(int**, size_t);


int main() {
	size_t dimm;
	int **my_arr;

	cout << "Enter the size of matrix:" << endl;
	cin >> dimm;

	my_arr = new int *[dimm];

	for (size_t i = 0; i < dimm; i++)
		my_arr[i] = new int[dimm];

	cout << "Your matrix is filled with 1: " << endl;
	fill_array_one(my_arr, dimm);
	print_array(my_arr, dimm);

	cout << "Your matrix is filled according to the scheme:" << endl;
	fill_array_scheme(my_arr, dimm);
	print_array(my_arr, dimm);

	for (size_t i = 0; i < dimm; i++)
		delete[] my_arr[i];

	delete[] my_arr;
	_getch();

	return 0;
}

void fill_array_one(int** arr, size_t n) {
	for (size_t i = 0; i < n; ++i)
		for (size_t j = 0; j < n; ++j)
			arr[i][j] = 0;
}

void fill_array_scheme(int** arr, size_t n) {
	for (size_t i = 0; i < n; ++i)
		for (size_t j = 0; j < n; ++j)
			if (i <= j)
				arr[i][j] = 1;
}

void print_array(int** array, size_t n) {
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j)
			cout << setw(2) << array[i][j];
		cout << endl;
		_getch();
	}
}