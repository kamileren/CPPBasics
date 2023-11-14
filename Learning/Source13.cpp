//
// Created by Eren Avsar on 2023-11-06.
//

/*

 STRUCT - STRUCTURE


 struct Character{
    string Name;
    float Health;
    int Level;
    float Damage;

    void Attack(){
        std::cout<<Name<<" does "<<Damage<<" damage!"<<std::endl;
        }
}


Character Joe;

 Joe.Name = "Joe";
 Joe.Health = 100.f; //if we do not specify float there will be conversion in the background deleting the values after the decimal point
 Joe.Level = 1;
 Joe.Damage = 2.5f;

 // A member variable is a variable that belong to the said struct ex. name is a member variable of a character.

 Joe.Attack();

 we use the dot operator to access the variables inside the Character Structure we created called Joe;

 we can also assign all in one line using an array like this:

 Character Lisa = {"Lisa",100.f,3,15.f};
 Lisa.Attack();

 */


#include <iostream>

struct fullName{
    std::string fName;
    std::string mName;
    std::string lName;

    std::string getName(){std::cout<<fName<<" "<<mName<<" "<<lName<<std::endl;
        return (fName+" "+mName+" "+lName);}
};

struct Player{
    fullName cName;
    float health;
    float damage;
    float stamina;
    int Level;

    void TakeDamage(float dmg){
        health-=dmg;
    }

    int getLevel(){return Level;}
    std::string getName(){return cName.getName();}
};

int main(){

    Player kamil;
    kamil.health = 100.f;
    kamil.Level = 10;
    kamil.stamina = 100.f;
    kamil.damage = 10;
    kamil.cName.fName = "Kamil";
    kamil.cName.mName = "Eren";
    kamil.cName.lName = "Avsar";



    std::cout<<"Level of "<<kamil.getName()<<" is "<<kamil.getLevel()<<std::endl;
    std::cout<<"Health of "<<kamil.getName()<<" is "<<kamil.health<<std::endl;


    kamil.TakeDamage(12);

    std::cout<<"Health of "<<kamil.getName()<<" is "<<kamil.health<<std::endl;


}
