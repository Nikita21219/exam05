#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title) {
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!\n";
}

const std::string &Warlock::getName() const {return name;}

const std::string &Warlock::getTitle() const {return title;}

void Warlock::setTitle(const std::string &title) {this->title = title;}

void Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {book.learnSpell(spell);}

void Warlock::forgetSpell(std::string name) {book.forgetSpell(name);}

void Warlock::launchSpell(std::string name, const ATarget &target) {
    const ATarget *test = NULL;
    if (&target == test)
        return;
    ASpell *spell = book.createSpell(name);
    if (spell)
        spell->launch(target);
}
