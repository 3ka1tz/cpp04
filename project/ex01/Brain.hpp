#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    virtual ~Brain();

    static const int ideasCount = 100;

    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;

private:
    std::string ideas[ideasCount];
};

#endif
