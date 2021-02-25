#ifndef __DEFENSE_HPP__
#define __DEFENSE_HPP__

#include <string>
#include<iostream> 

class Defense{
    protected:
	int protectionLevel;
    public:
        Defense(){}

	void setProtectionLevel(int lvl){
		protectionLevel = lvl;
	}
	
	int getProtectionLevel(){
		return protectionLevel;
	}

	virtual void defend() = 0;
};

#endif //__DEFENSE_HPP__
