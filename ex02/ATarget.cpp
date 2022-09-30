#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(const std::string type): type(type) {}

ATarget::~ATarget() {}

std::string ATarget::getType() const {return type;}

void ATarget::getHitBySpell(const ASpell &spell) const {
    std::cout << type << " has been " << spell.getEffects() << "!\n";
}

