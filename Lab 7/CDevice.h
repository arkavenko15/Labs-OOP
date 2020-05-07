

#include <string>
#include <iostream>
#ifndef a
using namespace std; 


class Cdevice {
int *sound_level = new int;
bool on = false;
public:  Cdevice() {
	*sound_level = 50;
}

Cdevice(int level) { 
	*sound_level = level;
}

~Cdevice() {
	delete sound_level;   on = false;
}

 void Set_sound_level() // встановлення рівеня звуку 
{
	int *level = new int; 
	cout << "Enter sound level: ";
	cin >> *level;
	if (*level >= 0 && *level <= 100)   
		*sound_level = *level;   
	if (*level < 0)  
		*sound_level = 0;  
	if (*level > 100)  
		*sound_level = 100;
} 

void Get_sound_level() //демонстрація рівня звуку  
{
	cout << "Now the sound level is: " << *sound_level << endl; 
} 

void On_Off_Device() // вкл / викл девайсу 
{
	if (on == false)
	{
		on = true;
		cout << "Devic is on!" << endl;
	}  
	else  
	{
		on = false;
		cout << "Devic is off!" << endl;
	}
} 

void Restart_divace() { 
	delete sound_level;
	on = false;
}



}; 
#endif