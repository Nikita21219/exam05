#include "string"
#include "iostream"
#include "vector"

#ifndef ATARGET
#define ATARGET

class ASpell;

class ATarget {
public:
    ATarget(const std::string type);
    virtual ~ATarget();
    std::string getType() const;
    void getHitBySpell(const ASpell &spell) const;

    virtual ATarget *clone() const = 0;

protected:
    ATarget();
    ATarget(const ATarget &other);
    ATarget &operator=(const ATarget &other);

    std::string type;
};

#endif
