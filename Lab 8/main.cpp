#include <iostream> 
#include "Mas.h"
using namespace std; 


int main() { 
	double sum;
	MyClass <double>  a;
	a.Enter_mas();
	a.search();
	sum = a.calculation();
	cout << sum; 
	return sum;
}