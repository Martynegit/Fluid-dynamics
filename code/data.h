#ifndef DATA_H
#define DATA_H

#include <string>

class data{

  private:
    std::string nFile;
  
  public:
    data();
    data(std::string);
    write(std::string, float);
    read(std::string, float);

};

#endif
