#include "iostream"
#include "string"
#include "ASpell.hpp"

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

class Polymorph : public ASpell {
public:
    Polymorph();
    ~Polymorph();

    virtual ASpell *clone() const;
};

#endif
