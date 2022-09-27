#include "iostream"
#include "string"

#ifndef ASPELL_HPP
#define ASPELL_HPP

class ATarget;

class ASpell {
public:
    ASpell(std::string name, std::string effects);
    virtual ~ASpell();
    std::string getName() const;
    std::string getEffects() const;
    void launch(const ATarget &target) const;

    virtual ASpell *clone() const = 0;

protected:
    std::string name;
    std::string effects;

private:
    ASpell();
    ASpell(const ASpell &other);
    ASpell *operator =(const ASpell &other);
};

#endif
