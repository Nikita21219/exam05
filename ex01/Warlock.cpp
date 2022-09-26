#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title) {
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!\n";
    for (size_t i = 0; i < arr.size(); i++)
        delete arr[i];
    arr.clear();
}

std::string Warlock::getTitle() const {return title;}

std::string Warlock::getName() const {return name;}

void Warlock::setTitle(const std::string &title) {this->title = title;}

void Warlock::setName(const std::string &name) {this->name = name;}

void Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
    arr.push_back(spell->clone());
}
void Warlock::forgetSpell(std::string name) {
    for (std::vector<ASpell *>::iterator it = arr.begin(); it != arr.end(); it++) {
        if (it.operator*()->getName() == name) {
            delete *it;
            arr.erase(it);
            break;
        }
    }
}

void Warlock::launchSpell(std::string name, ATarget &target) {
    for (size_t i = 0; i < arr.size(); i++)
        if (arr[i]->getName() == name)
            arr[i]->launch(target);
}
