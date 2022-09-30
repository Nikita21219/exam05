#include "iostream"
#include "vector"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class TargetGenerator {
public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);

private:
    TargetGenerator(const TargetGenerator &other);
    TargetGenerator &operator=(const TargetGenerator &other);

    std::vector<ATarget*> arr;
};
