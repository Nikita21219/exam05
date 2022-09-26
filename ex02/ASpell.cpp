#include "ATarget.hpp"
#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects) {}

ASpell::~ASpell() {}

std::string ASpell::getName() const {return name;}

std::string ASpell::getEffects() const {return effects;}

void ASpell::launch(const ATarget &target) const {
    target.getHitBySpell(*this);
}
