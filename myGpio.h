#ifndef MYGPIO_H
#define MYGPIO_H

#include <string>
#include <fstream>
using namespace std;

class MYGPIO {
private:
    int number;
    string name, path;
    void write(string path, string filename, string value);
    void write(string path, string filename, int value);
    string read(string path, string filename);
    ofstream stream;

public:
    MYGPIO(int number); // constructor
    int getNumber();
    void setDirection(int dir);  // 0 for input, 1 for output
    string getDirection();
    void setValue(int val);      // 0 or 1
    int getValue();
    void toggleOutput();
    void toggleOutputNumberOfTimes(int n, int delay); // delay in milliseconds
    ~MYGPIO(); // destructor
};

#endif
