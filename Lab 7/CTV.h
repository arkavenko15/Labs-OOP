#pragma once
#ifndef b 
#include "Cdevice.h"
#include <iostream>
#include <string>
using namespace std; 

class CTV : public Cdevice  {

	int *number_of_channels = new int;
	string channel_name[50]; 
	int channels_now = 0;

public:

	CTV(int namber) {
		*number_of_channels = namber;
	}

	CTV() {
		channels_now = 0;
		*number_of_channels = 2;  
		channel_name[0] = "Pershuy";
		channel_name[1] = "1+1";
	}

	~CTV()
	{
		delete number_of_channels; 
		delete[] channel_name;
	}

	void Set_Сhannel_list() 
		// встановленн всіх каналів вибірково
	{
		if (*number_of_channels == 2)  { 
			string *vubir = new string;
			cout << "If you want to change the standard number of channels, enter 1: ";   
			cin >> *vubir; 
			if (*vubir == "1")   {   
				cout << "Enter number of channels: ";
				cin >> *number_of_channels;
			}  
			delete vubir;
		}
	A: cout << "Enter the channel number you want to record (maximum channal " << *number_of_channels << "): ";
		int i; 
		cin >> i;
		if (i > *number_of_channels) 
			goto A; 
		cout << "If you do not want to install a channel on this number then enter 'N'" << endl;
		cout << "Enter name channel number " << i << ": ";  
		cin >> channel_name[i - 1];
		if (channel_name[i - 1] == "N") { 
			channel_name[i - 1] = "//Сhannel not installed\\";
		}

	cout << "If you want to continue installing channels then enter 1: ";
	cin >> i;
	if (i == 1)  
		goto A;
	else   cout << "Installation of canals is complete!" << endl;
}

void Get_channel_now() 
// демонстрація обраного каналу 
{
	cout << "Now the plugged in channel: " << channel_name[channels_now] << endl; 
	cout << "By order: " << channels_now + 1;
} 

void Get_Сhannel_list() 
// демонстрація всіх каналів 
{  
	for (int i = 0;	i < *number_of_channels;i++) 
		if (channels_now == i)    
			cout << i + 1 << ": " << channel_name[i] << "   " << "-Now turned on-" << endl;   
		else    cout << i + 1 << ": " << channel_name[i] << endl; 
} 

void Select_Channel() 
// становлення поточного каналу
{  
	cout << "Choose a channel: ";
	cin >> channels_now; 
channels_now--;
}
};
#endif