#ifndef PAPER_H
#define PAPER_H
#include "Move.h"

class Paper : public Move{
    public:
    Paper();
    std::unordered_set<std::string> getBeats();
    std::string getName();
    


};
#endif