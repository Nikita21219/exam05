#include "iostream"
#include "string"
#include "ASpell.hpp"

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

class Fireball : public ASpell {
public:
    Fireball();
    ~Fireball();

    virtual ASpell *clone() const;
};

#endif
