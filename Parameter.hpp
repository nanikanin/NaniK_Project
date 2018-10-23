#ifndef DEF_PARAMETER_HPP
#define DEF_PARAMETER_HPP

#include <map>
#include <string> 

class Parameter {
  public:
    static const int Error = -1;

    Parameter() = default;
    virtual ~Parameter() = default;

    void set(std::string key, int val);
    int get(std::string key) const;
  private: 
    std::map<std::string, int> _map;
};

#endif