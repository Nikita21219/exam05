#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* spell) {arr.push_back(spell);}

void SpellBook::forgetSpell(std::string const &name) {
    for (std::vector<ASpell*>::iterator i = arr.begin(); i != arr.end(); i++) {
        if (name == (*i)->getName()) {
            arr.erase(i);
            return;
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &name) {
    for (std::vector<ASpell*>::iterator i = arr.begin(); i != arr.end(); i++)
        if (name == (*i)->getName())
            return *i;
    return NULL;
}

