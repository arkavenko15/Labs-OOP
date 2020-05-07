

#pragma once

#ifndef c 
#include "CTV.h"
#include "CvideoPlayer.h"
#include <iostream> 
#include <string> 
using namespace std;

class  CTVVideo : public CTV, public CvideoPlayer {
private:
	string *namevideo = new string;
	string *videoformat = new string;
protected:
double *videotime = new double;
public:

	CTVVideo() {
		*videotime = 1; 
		*namevideo = "Kinkong"; 
		*videoformat = "MP4";
	}

	~CTVVideo()
	{
		delete videotime;
		delete namevideo;
		delete videoformat;
	}


	void Set_videotime(double time)   // встановлення тривалості відео 
	{ 
		*videotime = time; 
	} 

		void Set_namevideo(string name)   // встановлення імя відео
		{
			*namevideo = name;
		} 

		void Set_Videoformat()      // встановлення формату відео 
		{
			cout << "1. ASF" << endl;
			cout << "2. AVI" << endl;
			cout << "3. MP4" << endl;
			cout << "4. M4V" << endl; 
			cout << "5. MOV" << endl; 
			cout << "6. MPG/MPEG" << endl; 
			cout << "7. SWF" << endl; 
			cout << "8. WMV" << endl;
		vid:  cout << "Check out the video format: ";
  int sch;
  cin >> sch;
  switch (sch) 
  {  
  case '1':   *videoformat = "ASF";
  break;
  case '2':   *videoformat = "AVI"; 
  break;
  case '3':   *videoformat = "MP4"; 
  break; 
  case '4':   *videoformat = "M4V";   
  break;
  case '5':   *videoformat = "MOV"; 
  break;
  case '6':   *videoformat = "MPG/MPEG";   
  break; 
  case '7':   *videoformat = "SWF";   
  break; 
  case '8':   *videoformat = "WMV";   
  break;
  default:   break;
  }
}
void Get()    // демонстрація параметрів відео
{
	cout << "Video name: " << *namevideo << endl;
	cout << "Video duration: " << *videotime << endl; 
	cout << "Video format: " << *videoformat << endl; 
} 

}; 
#endif