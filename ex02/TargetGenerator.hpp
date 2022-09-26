#include "iostream"
#include "string"
#include "vector"
#include "ATarget.hpp"

class TargetGenerator {
public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);

private:
    std::vector<ATarget*> arr;
};
