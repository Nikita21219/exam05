#include "iostream"
#include "string"
#include "vector"
#include "ASpell.hpp"
#include "ATarget.hpp"

#ifndef SPELL
#define SPELL

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
