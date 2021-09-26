#include "PERSON.h"
PERSON::PERSON(string N, int L, int A){
    this->NAME=N;
    this->AGE=A;
    this->LUCK=L;
}
PERSON::PERSON(){PERSON("MIRAS", 19, 100);}

void PERSON::S_NAME(string N){this->NAME=N;}
void PERSON::S_AGE(int A){this->AGE=A;}
void PERSON::S_LUCK(int L){this->LUCK=L;}

string PERSON::G_NAME(){return NAME;}
int PERSON::G_AGE(){return AGE;}
int PERSON::G_LUCK(){return LUCK;}
