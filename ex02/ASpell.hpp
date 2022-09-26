#include "iostream"
#include "string"
// #include "ATarget.hpp"

#ifndef ASPELL_HPP
#define ASPELL_HPP

class ATarget;

class ASpell {
public:
    ASpell();
    ASpell(std::string name, std::string effects);
    virtual ~ASpell();
    std::string getName() const;
    std::string getEffects() const;
    void launch(const ATarget &target) const;

    virtual ASpell *clone() const = 0;

private:
    std::string name;
    std::string effects;
};

#endif
