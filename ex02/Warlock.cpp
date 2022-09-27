#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): name(name), title(title) {
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

void Warlock::learnSpell(ASpell *spell) {
    spells.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string name) {
    for (std::vector<ASpell*>::iterator i = spells.begin(); i != spells.end(); i++) {
        if ((*i)->getName() == name)
            delete *i;
            spells.erase(i);
            return;
    }
}

void Warlock::launchSpell(std::string name, const ATarget &target) {
    for (std::vector<ASpell*>::iterator i = spells.begin(); i != spells.end(); i++) {
        if ((*i)->getName() == name) {
            (*i)->launch(target);
            return;
        }
    }
}
