#include "iostream"
#include "string"
#include "vector"
#include "ASpell.hpp"

class SpellBook {
public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);

private:
    std::vector<ASpell *> book;
};
