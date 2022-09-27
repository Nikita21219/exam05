#include "iostream"
#include "string"
#include "vector"
#include "ASpell.hpp"

class Warlock {
public:
    Warlock(std::string name, std::string title);
    ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string name);
    void launchSpell(std::string name, const ATarget &target);

private:
    Warlock();
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &other);

    std::string name;
    std::string title;
    std::vector<ASpell *> spells;
};
