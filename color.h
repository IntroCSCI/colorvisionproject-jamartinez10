#ifndef COLORS_H 
#define COLORS_H
#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::string;
using std::vector;

class color {

 private:
    string fileName;
    vector <string> hexVals;
    vector <int> locations;
    int r; 
    int g;
    int b;

  public:
    // constructor for email
    void findInFile(string);
    string toHex(int, int, int);


 
};


#endif