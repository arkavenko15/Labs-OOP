#include "CTVVideo.h" 
#include <iostream> 

int main() {
	CTVVideo a; 
	a.Set_videotime(45.45);
	a.Set_namevideo("Narodnuy");
	a.Set_Videoformat(); 
	a.Get();


	a.Set_Ñhannel_list(); 
	a.Select_Channel();
	a.Get_channel_now();
	a.Get_Ñhannel_list();


	a.Set_current_time(24.5); 
	a.rewind_forward(); 
	a.To_throw_back(); 
	a.Get_flowing_browsing_time();

	Cdevice b;
	b.On_Off_Device();
	b.Set_sound_level(); 
	b.Get_sound_level();
	b.Restart_divace();   
	return 0;
}

