#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "PERSON.h"
using namespace std;

void CHANGE_LUCK(PERSON&PERSON_1, PERSON&PERSON_2){
    int LUCK=PERSON_1.G_LUCK();
    PERSON_1.S_LUCK(PERSON_2.G_LUCK());
    PERSON_2.S_LUCK(LUCK);
}
int main(){
    srand(time(0));
    auto* PERSON_1=new PERSON("ARSEN",19,rand()%100);
    auto* PERSON_2=new PERSON("ERTLEK",20,rand()%100);
    auto* PERSON_3=new PERSON("ABZAL",35,rand()%100);
    auto* PERSON_4=new PERSON("ALIMKHAN",46,rand()%100);
    auto* PERSON_5=new PERSON("RAKHAT",59,rand()%100);
    vector<PERSON>ALL_PERSONS{*PERSON_1,*PERSON_2,*PERSON_3,*PERSON_4,*PERSON_5};

    for(int I=0; I<5; I++){
        cout<<ALL_PERSONS[I].G_NAME()<<" "<<ALL_PERSONS[I].G_AGE()<<" "<<ALL_PERSONS[I].G_LUCK()<<endl;
    }
    cout<<"THE LUCKIEST IS ";
    int MAX=ALL_PERSONS[0].G_LUCK();
    int INDEX;
    for(int I=0; I<5; I++){
        if(MAX<ALL_PERSONS[I].G_LUCK()){
            MAX=ALL_PERSONS[I].G_LUCK();
            INDEX=I;
        }
    }
    cout<<ALL_PERSONS[INDEX].G_NAME()<<". LUCK PARAMETER IS "<<ALL_PERSONS[INDEX].G_LUCK()<<endl;
    cout<<"LUCK OF FIRST PERSON "<<ALL_PERSONS[0].G_LUCK()<<". LUCK OF FOURTH PERSON "<<ALL_PERSONS[3].G_LUCK()<<"."<<endl;
    CHANGE_LUCK(ALL_PERSONS[0],ALL_PERSONS[3]);
    cout<<"LUCK OF FIRST PERSON "<<ALL_PERSONS[0].G_LUCK()<<". LUCK OF FOURTH PERSON "<< ALL_PERSONS[3].G_LUCK()<<".";
    delete PERSON_1, PERSON_2, PERSON_3, PERSON_4, PERSON_5;
}

