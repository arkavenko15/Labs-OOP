#pragma once
#ifndef d
#include <string>
#include "Cdevice.h" 
#include <iostream>
using namespace std; 


class CvideoPlayer : public Cdevice
{
double *flowing_browsing_time = new double;
public:

	CvideoPlayer() { 
		*flowing_browsing_time = 10; 
	}

	CvideoPlayer(double time) {
		*flowing_browsing_time = time; 
	}

	~CvideoPlayer() { 
		delete flowing_browsing_time;
	}

	void Set_current_time(double videotime) {
	C:   double time; 
		cout << "Rewind time: ";
		cin >> time;

		if (videotime > time) {
			*flowing_browsing_time = *flowing_browsing_time + time; 
		}
		else {
			cout << "The film continues: " << videotime << "You entered: " << time;   
			goto C;
		}
	}

	void Get_flowing_browsing_time() { 
		*flowing_browsing_time = 10; cout << "Current movie viewing time: " << *flowing_browsing_time << endl; 
	}

	void rewind_forward() {
		flowing_browsing_time = flowing_browsing_time + 1; 
	}

	void rewind_forward(double time) {
		*flowing_browsing_time = *flowing_browsing_time + time; 
	}


	void To_throw_back() { flowing_browsing_time = flowing_browsing_time - 1; }

	void To_throw_back(double time) { *flowing_browsing_time = *flowing_browsing_time + time; }

}; 
#endif