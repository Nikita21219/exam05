#include "string"
#include "iostream"
#include "vector"

#ifndef ASPELL_HPP
#define ASPELL_HPP

class ATarget;

class ASpell {
public:
    ASpell(const std::string &name, const std::string &effects);
    virtual ~ASpell();
    std::string getName() const;
    std::string getEffects() const;
    void launch(const ATarget &target);

    virtual ASpell *clone() const = 0;

protected:
    ASpell();
    ASpell(const ASpell &other);
    ASpell &operator=(const ASpell &other);

    std::string name;
    std::string effects;
};

#endif
