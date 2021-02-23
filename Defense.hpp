#ifndef __DEFENSE_HPP__
#define __DEFENSE_HPP__

#include <string>
#include<iostream> 

class Defense{
    private:
	int protectionLevel;
    private:
	void setProtecttionLevel(int lvl){
		protectionLevel = lvl;
	}
	
	void getProtectionLevel(){
		return protectionLevel;
	}

	virtual void defend() = 0;
};

#endif //__DEFENSE_HPP__
