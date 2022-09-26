#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {book.clear();}

void SpellBook::learnSpell(ASpell *spell) {book.push_back(spell);}

void SpellBook::forgetSpell(std::string const &name) {
    for (std::vector<ASpell *>::iterator i = book.begin(); i != book.end(); i++) {
        if (i.operator*()->getName() == name) {
            delete *i;
            book.erase(i);
            return;
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &name) {
    for (std::vector<ASpell *>::iterator i = book.begin(); i != book.end(); i++)
        if (i.operator*()->getName() == name)
            return *i;
    return NULL;
}
