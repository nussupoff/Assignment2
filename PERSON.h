#ifndef ASSIGNMENT2_PERSON_H
#define ASSIGNMENT2_PERSON_H
#include <iostream>
#include <string>
using namespace std;

class PERSON{
public:
    PERSON();
    PERSON(string NAME, int AGE, int LUCK);
    void S_NAME(string NAME);
    void S_AGE(int AGE);
    void S_LUCK(int LUCK);
    string G_NAME();
    int G_AGE();
    int G_LUCK();
    string G_L();

private:
    string NAME;
    int AGE;
    int LUCK;
};
#endif //ASSIGNMENT2_PERSON_H
