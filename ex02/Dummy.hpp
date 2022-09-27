#include "iostream"
#include "string"
#include "ATarget.hpp"

#ifndef DUMMY_HPP
#define DUMMY_HPP

class Dummy : public ATarget {
public:
    Dummy();
    ~Dummy();

    virtual ATarget *clone() const;
};

#endif
