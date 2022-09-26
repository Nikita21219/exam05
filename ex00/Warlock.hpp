#include "iostream"
#include "string"

class Warlock {
public:
    Warlock(std::string const &name, std::string const &title);
    ~Warlock();
    std::string getTitle() const;
    std::string getName() const;
    void setTitle(const std::string &title);
    void setName(const std::string &name);
    void introduce() const;

private:
    std::string name;
    std::string title;
};
