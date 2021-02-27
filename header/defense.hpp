#ifndef __DEFENSE_HPP__
#define __DEFENSE_HPP__

#include <string>
#include<iostream> 
#include <stdexcept>

class Defense{
    protected:
	int protectionLevel;
    public:
        Defense(){}

	void setProtectionLevel(int lvl){
		
		protectionLevel = lvl;

		if (lvl < 0) { 
        		std::invalid_argument ia = std::invalid_argument(std::to_string(lvl));
        		throw ia;
    		}
	}
	
	int getProtectionLevel(){
		return protectionLevel;
	}

	virtual void defend() = 0;
};

#endif //__DEFENSE_HPP__