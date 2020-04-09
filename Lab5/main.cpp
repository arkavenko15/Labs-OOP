
#include <iostream>
#include <conio.h>
using namespace std; 

class CBox {
private:
	double m_dblLength = 10, m_dblW³dth = 10, m_dblHeight = 10;
public:
	void Print() {
		cout << "Length = " << m_dblLength << endl << "Width = " << m_dblW³dth << endl << "Height = " << m_dblHeight << endl; 
	}  void Record() {

	double L, W, H; 
	cout << "Enter Length = ";
	cin >> L;
	cout << "Enter Width = ";   
	cin >> W;   cout << "Enter Height = ";
	cin >> H; 
	if (L > 0.0) {
		if (L <= 50.0)  
			m_dblLength = L; 
	}

	if (W > 0) {
		if (W <= 50.0)     
			m_dblW³dth = W; 
	}   
	if (H > 0)
	{
		if (H <= 50.0)
			m_dblHeight = H;
	}
}

		  double Volume(bool a) { 
			  double boxV;
			  boxV = m_dblLength * m_dblW³dth * m_dblHeight;
			  if (a == true) cout << "volume of boxes = " << boxV << endl;  
			  return boxV;
		  }
		  double Surface_area(bool a) {
			  double boxS;
			  boxS = (m_dblLength * m_dblW³dth + m_dblLength * m_dblHeight + m_dblW³dth * m_dblHeight) * 2;   
			  if (a == true)  
				  cout << "Box surface area" << boxS << endl; 
			  return boxS;
		  }  
		  double girth_L_W(bool a) { 
			  double girth;
			  girth = (m_dblLength + m_dblW³dth) * 2; 
			  if (a == true) 
				  cout << "Box cover LW = " << girth << endl; 
			  return girth;
		  }
		  double girth_L_H(bool a) {
			  double girth;
			  girth = (m_dblLength + m_dblHeight) * 2;
			  if (a == true)   
				  cout << "Box cover LH = " << girth << endl;
			  return girth;
		  }
		  double girth_W_H(bool a) { 
			  double girth;
			  girth = (m_dblW³dth + m_dblHeight) * 2;
			  if (a == true)    
				  cout << "Box cover WH = " << girth << endl;
			  return girth;
		  } 
		  CBox operator = (const CBox& x) {
			  this->m_dblHeight = x.m_dblHeight; 
			  this->m_dblLength = x.m_dblLength;  
			  this->m_dblW³dth = x.m_dblW³dth;
			  return *this; 
		  } 
		  const CBox operator + (CBox& x) {
			  CBox a;
			  a.m_dblHeight = this->m_dblHeight + x.m_dblHeight; 
			  a.m_dblLength = this->m_dblLength + x.m_dblLength;
			  a.m_dblW³dth = this->m_dblW³dth + x.m_dblW³dth;
			  return *new CBox(a); 
		  }
		  const CBox operator - (CBox& x) {
			  if (this->m_dblHeight > x.m_dblHeight && this->m_dblLength > x.m_dblLength && this->m_dblW³dth > x.m_dblW³dth) { 
				  CBox a; 
				  a.m_dblHeight = this->m_dblHeight - x.m_dblHeight; 
				  a.m_dblLength = this->m_dblLength - x.m_dblLength;
				  a.m_dblW³dth = this->m_dblW³dth - x.m_dblW³dth;
				  return *new CBox(a);
			  }
			  else { 
				  cout << "Subtraction error!!!" << endl;  
			  system("pause"); } 
		  }
		  bool operator > (CBox& x) {
			  if (this->m_dblHeight *this -> m_dblLength*this->m_dblW³dth > x.m_dblHeight*x.m_dblLength*x.m_dblW³dth && x.m_dblHeight)   
				  return true;  
			  else  
				  return false; 
		  } 
		  bool operator < (CBox& x) { 
			  if (this->m_dblHeight *this -> m_dblLength*this->m_dblW³dth < x.m_dblHeight*x.m_dblLength *x.m_dblW³dth && x.m_dblHeight)   
				  return true;
			  else    
				  return false;
		  }
};

int main() {
	CBox a, b, c; 
	cout << "Enter the size of the box A" << endl; 
	a.Record();
	cout << "Enter the size of the box B" << endl;
	b.Record();
	cout << "Demonstration of the operator of the addition (C=A+B)" << endl;  
	c = a + b;
	c.Print();
	cout << "Demonstration of subtraction operator (C=A-B)" << endl;
	c = a - b;
	c.Print();
	cout << "Demonstration of the operator > (A>B)" << endl;
	if (a > b)  cout << "(a > b) = true" << endl;  
	else  cout << "(a > b) = false" << endl;
	cout << "Demonstration of the operator > (A<B)" << endl;
	if (a < b)  cout << "(a < b) = true" << endl;
	else  cout << "(a < b) = false" << endl;
	cout << "Demonstration of the assignment operator = (C=A; C.Print())" << endl;
	c = a; 
	c.Print();
	_getch();
	return 0;
}

