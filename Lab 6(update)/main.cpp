#include <iostream>
using namespace std; 

class Shop {
protected:  char *name = new char[30]; 
double worktime;
double opentime,closetime; 
public:
	Shop() {
		opentime = 8; 
		closetime = 22;
		worktime = closetime - opentime;
	}
	Shop(double opentime, double closetime) {
		this->closetime = closetime;
		this->opentime = opentime;
	}
	virtual ~Shop() {
		delete[] name;
	}
			virtual void set() {
				cout << "Enter name shop: ";
				cin >> name;
					}

			virtual void get() {
				cout << "Name shop: " << name << endl;
				cout << "Time open: " << opentime << endl;
				cout << "Time close: " << closetime << endl;
				cout << "Work time: " << worktime << endl;
			}

			void Worktime() {
				worktime = closetime - opentime; 
			} 
			Shop operator = (const Shop &a) {
				this->name = a.name;
			}
};

class Supermarket :
	public Shop {
private:  
	double vuruchka, prubutok;  
int cass; 
public:  Supermarket() {
	vuruchka = 100;
	prubutok = vuruchka / 10;
	cass = 1; 
}
		  Supermarket(int cass) { 
			  this->cass = cass;
		  }

		  void set()
		  {
			  cout << "Enter number cass: ";  
			  cin >> cass;
		  } 
		  void get() 
			  override {
			  cout << "Profit today: " << prubutok << endl;
			  cout << "Revenue for today: " << vuruchka << endl;

		  }  
		  void Prubutoc() {
			  prubutok = vuruchka / 10; 
		  }  
		  void salary() {
			  double salary;
			  salary = prubutok / cass;
		  }
};


int main() {
	Shop a(9.45, 18.00);
	Supermarket s;
	a.set();
	a.get(); 
	s.set();
	s.get();
	a.Worktime();
	s.Prubutoc();
	s.salary();
	s.Worktime();
	system("pause");
}
