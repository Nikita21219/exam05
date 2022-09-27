#include "iostream"
#include "string"

#ifndef ATARGET_HPP
#define ATARGET_HPP

class ASpell;

class ATarget {
public:
    ATarget(std::string type);
    virtual ~ATarget();
    const std::string &getType() const;
    void getHitBySpell(const ASpell &spell) const;

    virtual ATarget *clone() const = 0;

private:
    ATarget();
    ATarget(const ATarget &other);
    ATarget *operator =(const ATarget &other);

    std::string type;
};

#endif
