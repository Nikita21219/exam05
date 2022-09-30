#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title) {
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!\n";
    arr.clear();
}

const std::string &Warlock::getName() const {return name;}

const std::string &Warlock::getTitle() const {return title;}

void Warlock::setTitle(const std::string &title) {this->title = title;}

void Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {arr.push_back(spell->clone());}

void Warlock::forgetSpell(std::string name) {
    for (std::vector<ASpell*>::iterator i = arr.begin(); i != arr.end(); i++) {
        if (name == (*i)->getName()) {
            delete *i;
            arr.erase(i);
            return;
        }
    }
}

void Warlock::launchSpell(std::string name, const ATarget &target) {
    for (std::vector<ASpell*>::iterator i = arr.begin(); i != arr.end(); i++) {
        if (name == (*i)->getName()) {
            (*i)->launch(target);
            return;
        }
    }
}
