#include "ATarget.hpp"
#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects) {}

ASpell::~ASpell() {}

std::string ASpell::getName() const {return name;}

std::string ASpell::getEffects() const {return effects;}

void ASpell::launch(const ATarget &spell) const {
    spell.getHitBySpell(*this);
}
