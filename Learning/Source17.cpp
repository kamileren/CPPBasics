//
// Created by Eren Avsar on 2023-11-07.
//
/* Access Modifiers

Private - Protected - Public

In default everything inside a class is private meaning we cannot access anything from outside the class.

What we can use is public scope in the class using public: <- everything under this will be public meaning we can access outside the class

protected scope can be used when we want to the same class like private scope and inherited version of the class.

private scope can be only used from the class itself and cannot be used neither from outside nor the children of the class.

class Dog(){...}

class pitBull: public Dog{....}

This class pitBull inherits everything from dog as whatever the scope is in dog meaning there is no change to any of the scopes


class Husky(): protected Dog{...}

This class will move public scope variable one step higher in the Access modifiers making it protected the rest stays the same

class germanShepard: private Dog{...}

ALl public and protected will make it all private meaning everything inside the class will be private.

*/

#include <iostream>
#include <cmath>

enum Colour{
    White,
    Red,
    Black,
    Grey,
    Brown,
    Orange
};

enum Species{
    Unknown,
    Dog,
    Cat,
    Bird,
    Wolf,
    Bear,
    Lion
};

std::string SpeciesList[]={
    "Unknown",
    "Dog",
    "Cat",
    "Bird",
    "Wolf",
    "Bear",
    "Lion"
};
//white is equal to 0 the resit one larger than the previous

std::string colourArray[] = {
        "White",
        "Red",
        "Black",
        "Grey",
        "Brown",
        "Orange"
};
//an array of string that is in same order as our enum to print the name of the colour instantly using the value we get from our enum
//we can also create a map combining both and only using the map instead of both but I dont think it is worth doing it for this small code



class Creature{
public:
    Creature(){
        animalName = "Default Name";
        animalColour = White;
        animalAge = 0;
        creatureSpecie = Unknown;
        motherHealth = 100;
        fatherHealth = 100;
        Health = ((motherHealth+fatherHealth)/2)*exp(-getAge());
        sound = "UckSdk";
    }

    Creature(std::string creatureName,Colour creatureColor,int creatureAge,Species cSpecie,int mHealth,int fHealth){
        animalName = creatureName;
        animalColour = creatureColor;
        animalAge = creatureAge;
        creatureSpecie = cSpecie;
        motherHealth = mHealth;
        fatherHealth = fHealth;
        Health = (motherHealth+fatherHealth)/2;

    }

    //Getters
    std::string getName(){return animalName;}
    int getAge(){return animalAge;}
    std::string getColour(){return colourArray[animalColour];} //since the enum is an integer value we can use that to get the index of the array of
    // colour in the same order
    int getHealth(){return Health;}
    std::string getSpecie(){return SpeciesList[creatureSpecie];}
    std::string getSound(){return sound;}


    //Setters
    void setName(std::string name){animalName=name;}
    void setAge(int age){animalAge=age;}
    void setColour(Colour color){animalColour=color;}
    void setHealth(int animalHealth){(animalHealth>=0)? Health=animalHealth:Health=0;} //if the health provided is equal to or larger than 0 set the health
    void setSpecie(Species creature){creatureSpecie=creature;}
    void setSound(std::string sfx){sound = sfx;}

    void takeDamage(int damage){
        (damage>0)? setHealth(getHealth()-damage): setHealth(getHealth()); //we technically dont need this if check however doest hurt to be safe for now
    }

    void print(){

        std::cout << "\033[1;32m"; // Set text color to green
        std::cout<<"\nName of Creature is "<<getName()<<" of type "<<getSpecie()<<std::endl;
        std::cout<<"Age of "<<getName()<<" is: "<<getAge()<<std::endl;
        std::cout<<"Health of "<<getName()<<" is: "<<getHealth()<<std::endl;
        std::cout<<"Colour of "<<getName()<<" is: "<<getColour()<<std::endl;
        std::cout<<getName()<<" says "<<getSound()<<std::endl;
        std::cout << "\033[0m"; // Reset text color to default
        std::cout<<".........................................."<<std::endl;

    }

private:
    std::string animalName;
    int animalAge;
    Colour animalColour;
    int Health;
    Species creatureSpecie;

protected:
    int motherHealth;
    int fatherHealth;
    std::string sound;

};


class cWolf: public Creature{



public:

    cWolf(){
        setHealth((fatherHealth+motherHealth)/2);
        setSpecie(Wolf);
        setSound("Awooooo!");
    }//Calls the default constructor of Creature then does whatever is inside the block.

    cWolf(std::string name,int fHealth,int mHealth,int wAge,Colour wColour): Creature(name,wColour,wAge,Wolf,mHealth,fHealth){
        setSound("Awooooo!");
    }//Does not call the default constructor of Creature only the constructor we are directly initializing above

};

class cBird: public Creature{

public:

    cBird(){
        setHealth((fatherHealth+motherHealth)/2);
        setSpecie(Bird);
        setSound("Chirp!");
    }

    cBird(std::string name,int fHealth,int mHealth,int wAge,Colour wColour): Creature(name,wColour,wAge,Bird,mHealth,fHealth){
        setSound("Chirp!");
    }

};




int main(){

    Creature unknown;

    unknown.setName("Void");
    unknown.setColour(Red);
    unknown.setHealth(100);
    unknown.takeDamage(-20);
    unknown.print();

    cWolf brown = cWolf("brownish",120,110,9,Brown);
    brown.print();

    brown.setColour(Red);
    brown.print();

    cWolf grey = cWolf();
    grey.print();

    cBird orange = cBird("orangish",30,40,2,Orange);

    orange.print();


}