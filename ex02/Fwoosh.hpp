#include "iostream"
#include "string"
#include "ASpell.hpp"

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

class Fwoosh : public ASpell {
public:
    Fwoosh();
    ~Fwoosh();

    virtual ASpell *clone() const;
};

#endif
