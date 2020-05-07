#pragma once
#include <iostream>
 using namespace std; 
#ifndef Myc_ls 
#define Myc_ls 
template <typename T>
 class MyClass {
 private:  int size;
 T *arr = new T[size]; 
 int pos = 0, neg = 0, sch = 0; 
 T sum = 0;
 public:  ~MyClass()  { 

 }
 MyClass() 
 {
	 this->Enter_long_mas();
 }

 MyClass(int size) {
	 this->size = size + 1;
 }

 void Enter_long_mas() { 
	 cout << "Enter the size of the array: "; 
	 cin >> size;
	 size++;
 }

 void Enter_mas() { 
	 for (int i = 0; i < size; i++) 
	 {
		 cout << "Enter elemen number " << i+1 << ": ";
		 cin >> arr[i];
	 }
 }

 void search() {
	 int sch = 0;   
	 for (int i = 0; i < size; i++) {
		 if (neg == 0) { 
			 if (arr[i] < 0)
				 neg = i;
		 }
		 if (arr[i] > 0)
		 {
			 if (sch < 2) {
				 pos = i;  
				 sch = sch + 1; }
		 }
	 }
 }

 T calculation() {
	 if (neg < pos) {
		 sum = arr[neg + 1];
		 for (int i = neg + 2; i < pos; i++)
		 {
			 sum = sum - arr[i];
		 }
	 }
	 else {
		 sum = arr[pos + 1]; 
	 { 
		 for (int i = pos + 2; i < neg; i++) 
	 {
		 sum = sum - arr[i];
	 }
	 }
	 }  
	 return sum;
 }
 };


#endif 
