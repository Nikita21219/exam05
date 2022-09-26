#include "ATarget.hpp"

ATarget::ATarget(std::string type): type(type) {}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const {return type;}

void ATarget::getHitBySpell(const ASpell &spell) const {
    std::cout << type << " has been " << spell.getEffects() << "!\n";
}
