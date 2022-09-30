#include "iostream"
#include "string"
#include "vector"
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
public:
    Warlock(const std::string &name, const std::string &title);
    ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string name);
    void launchSpell(std::string name, ATarget &target);

private:
    Warlock();
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &other);

    std::string name;
    std::string title;
    std::vector<ASpell*> arr;
};
