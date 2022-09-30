#include "iostream"

#ifndef ASPELL_HPP
#define ASPELL_HPP

class ATarget;

class ASpell {
public:
    ASpell(std::string name, std::string effects);
    virtual ~ASpell();
    std::string getName() const;
    std::string getEffects() const;
    void launch(const ATarget &spell) const;

    virtual ASpell *clone() const = 0;

private:
    ASpell();
    ASpell(const ASpell &other);
    ASpell &operator=(const ASpell &other);

    std::string name;
    std::string effects;
};

#endif
