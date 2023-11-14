//
// Created by Eren Avsar on 2023-11-06.
//

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BLUE    "\033[34m"
#define GREEN   "\033[32m"



class Animal{
public:
    Animal(){
        Name = "DEFAULT";
        Age = 0;
        Limbs = 4;
        std::cout<<"Default-Called"<<std::endl;
    }

    Animal(std::string animalName,int ageNum,int limbNum){
        Name = animalName;
        Age = ageNum;
        Limbs = limbNum;
    }

    Animal(std::string animalName):Name(animalName),Age(0),Limbs(4){}

    //This is another way to create a constructor

    void Sound(){
        std::cout<<Name<<": ";
    }

    std::string getName() const {
        return Name;
    } //function promises it will not change anything

    int getAge() const {
        return Age;
    }// same

    int getLimbs() const {
        return Limbs;
    }//same

    void setName(const std::string& name) {
        Name = name;
    }

    // the function takes in a const string meaning we can use it with string literals also it tells that the input is not going to be
    //modified through the code also helps us because we cannot compile without a const if we are using a reference in out input

    void setAge(const int& age) {
        Age = age;
    }
    //same on this

    void setLimbs(const int& limbs) {
        Limbs = limbs;
    }
    //the function promises not to change anything regarding the input

    void printInfo() const {
        std::cout << GREEN << "\nName: " << getName() << std::endl;
        std::cout << "Age: " << getAge() << std::endl;
        std::cout << "Number of Limbs: " << getLimbs() << RESET << std::endl;
        std::cout<<"....................."<<std::endl;
    }//promises not to change anything inside the function


private:
    std::string Name;
    int Age;
    int Limbs;

};


class Cat:public Animal{ //this means we only have access to the public variables of the Animal class
public:
    Cat(){}
    Cat(std::string animalName, int age): Animal(animalName,age,4){}
    //here we use a member initializer list

    //Cat(std::string animalName, int age){
   //     Animal(animalName, age, 4);
   // }
   //When we do it like this we dot create a Cat object we create an Animal object using the default constructor and then create an
   // animal object using the constructor inside the Cat constructor and disregard the object.
   //DO NOT DO THIS IF YOU DONT WANT TO CALL THE DEFAULT CONSTRUCTOR OF THE PARENT


    void printInfo(){
        std::cout<<"....................."<<std::endl;
        std::cout<<BLUE<<"The Information Regarding your Cat is:"<<RESET<<std::endl;
        Animal::printInfo();
    }

    void Speak(){
        Animal::Sound();
        std::cout<<"Meow"<<std::endl;
    }

};

class Dog: public Animal{
    //dog has an "is a" relationship with animal;
public:
    Dog(){}
    Dog(std::string animalName, int age): Animal(animalName,age,4){} //when we do this we do not call the default constructor on Animal

    void Speak(){
        Animal::Sound();
        std::cout<<"Bark!"<<std::endl;
    }

    void printInfo(){
        std::cout<<"....................."<<std::endl;
        std::cout<<BLUE<<"The Information Regarding your Dog is:"<<RESET<<std::endl;
        Animal::printInfo();
    }

};

class pitBull: public Dog{

    //pit bull has an "is a" relation with a dog and animal.

public:
    pitBull():Dog(){}
    pitBull(std::string animalName, int age): Dog(animalName,age){} //when we do this we do not call the default constructor on Animal

    void Speak(){
        Dog::Speak();
    }

    void printInfo(){
        std::cout<<"....................."<<std::endl;
        std::cout<<BLUE<<"The Information Regarding your Pit Bull is:"<<RESET<<std::endl;
        std::cout<<RED<<"WARNING- to have a pet pit bull you need to accept the terms and conditions"<<RESET<<std::endl;
        Animal::printInfo();
    }

};






int main(){

    Cat cat; //Default is called here

    cat.setName("Arc");
    cat.setAge(12);
    cat.setLimbs(4);

    //we can either use a set function for all
    Dog dog = Dog("Buck",2);

    Animal bird = Animal("Spot",2,2);
    // or we can create a constructor for it.

    Cat cat2 = Cat("Noir",2);

    pitBull dog2 = pitBull("Red",8);
    //however this does not mean one or either they both have their uses.

    cat.printInfo();
    bird.printInfo();
    dog.printInfo();
    cat2.printInfo();
    dog2.printInfo();

    dog2.Animal::printInfo(); // we call the Animal version of a function as well or any from higher side of hierarchy

    dog2.Dog::printInfo();

    cat2.Speak();
    dog.Speak();
    dog2.Speak();

}