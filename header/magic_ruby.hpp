#ifndef __MAGIC_RUBY_HPP__
#define __MAGIC_RUBY_HPP__

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

#endif //__MAGIC_RUBY_HPP__