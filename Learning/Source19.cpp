//
// Created by Eren Avsar on 2023-11-12.
//

#include <iostream>

using namespace std;

class Character{

public:

    Character();
    ~Character();

private:

    string* name;
    float* health;
    int* money;


};

int main(){

    Character* pCharacter = new Character;

    delete pCharacter;

}

Character::Character(): health(new float(100.f)),money(new int(100)),name(new string("Kamil")) {
    cout<<"Character has created"<<endl;
    //references cannot be initialized inside the curly brackets since they need to be initialized as soon as
    // they are declared
}
Character::~Character() {
    cout<<"Character has been deleted"<<endl;

    delete health;
    delete money;
    delete name;
}
