#include "iostream"
#include "vector"
#include "ASpell.hpp"
#include "ATarget.hpp"

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

class SpellBook {
public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);

private:
    SpellBook(const SpellBook &other);
    SpellBook &operator=(const SpellBook &other);

    std::vector<ASpell*> arr;
};

#endif
