#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title) {
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!\n";
}

std::string Warlock::getTitle() const {return title;}

std::string Warlock::getName() const {return name;}

void Warlock::setTitle(const std::string &title) {this->title = title;}

void Warlock::setName(const std::string &name) {this->name = name;}

void Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}
