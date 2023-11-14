//
// Created by Eren Avsar on 2023-11-06.
//

#include <iostream>

class Cat{

private: //Values in a class are public by default however we can separate them into three different encapsulation private public protected
    std::string Name;
    int age;

public:

    Cat(){
        std::string Name = "No-Name";
        int age = 0;
    }

    void meow() const{std::cout<<Name<<" Meows"<<std::endl;}

    void setName(std::string name){Name = name;}

    std::string getName() const{return Name;}

    int getAge() const{return age;}
};

class Dog{
public:
    Dog(){
        Name = "No-Name";
        age = 0;
    }

    void Bark(){std::cout<<"Bark!"<<std::endl;}

private:
    std::string Name;
    int age;
};


int main(){


    Cat Spot;
    Dog Arc;

    Spot.setName("Spot");
    Spot.meow();

    Arc.Bark();
}

//As you can see we are repeating code for two different classes this should quickly tell us that there should be a better way to write this
//and this is where inheritance comes to play.
