#include "iostream"
#include "string"
#include "vector"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
public:
    Warlock(std::string const &name, std::string const &title);
    ~Warlock();
    std::string getTitle() const;
    std::string getName() const;
    void setTitle(const std::string &title);
    void setName(const std::string &name);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string name);
    void launchSpell(std::string name, ATarget &target);

private:
    std::string name;
    std::string title;
    std::vector<ASpell *> arr;
    SpellBook book;
};
