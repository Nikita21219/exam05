#include "iostream"
#include "string"
#include "ASpell.hpp"

#ifndef ATARGET_HPP
#define ATARGET_HPP

// class ASpell;

class ATarget {
public:
    ATarget(std::string type);
    virtual ~ATarget();
    const std::string &getType() const;
    void getHitBySpell(const ASpell &spell) const;
    virtual ATarget *clone() const = 0;

private:
    std::string type;
};

#endif
