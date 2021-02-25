#ifndef __MAGICRUBY_HPP__
#define __MAGICRUBY_HPP__

#include "defense.hpp"

class MagicRuby: public Defense{
    public:
   	 MagicRuby(): Defense(){
  		protectionLevel = 15;
   	 }
    
    	void defend(){
        	std::cout << "I will protect myself with my Magic Ruby!" << std::endl;
    	}
};

#endif //__MAGICRUBY_HPP__
