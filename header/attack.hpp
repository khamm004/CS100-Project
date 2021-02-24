#ifndef __ATTACK_HPP__
#define __ATTACK_HPP__

#include <cstring>

class Attack
{
public:
    virtual ~Attack() = default;
    virtual std::string attack() const = 0;
};

#endif //__ATTACK_HPP__
