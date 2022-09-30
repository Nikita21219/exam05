#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {arr.clear();}

void TargetGenerator::learnTargetType(ATarget* target) {arr.push_back(target->clone());}

void TargetGenerator::forgetTargetType(std::string const &type) {
    for (std::vector<ATarget*>::iterator i = arr.begin(); i != arr.end(); i++) {
        if ((*i)->getType() == type) {
            delete *i;
            arr.erase(i);
            return;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const &type) {
    for (std::vector<ATarget*>::iterator i = arr.begin(); i != arr.end(); i++) {
        if ((*i)->getType() == type) {
            return *i;
        }
    }
    return NULL;
}
