//
// Created by Eren Avsar on 2023-11-12.
//

/*STATIC VARIABLES

 Static variables are in a different location in the memory.

 void update_count(){
    static int count = 0;
    count++;
}

 //Since the variable is static it means the variable will not be different everytime
 the function is called ( it is not deleted once it is out of scope)

 meaning count in update_count() will first be 1;
 after beign called a second time instead of resetting it will be 2;


 class Dog{};

 int main(){

 if(true){
    static Dog dog;
}
 // even though this dog object is inside a if scope it will still exist outside of the scope

 class Creature{
    public:
    static int count;

    Creature(){
    creature_count++;
    }

    int Creature::count = 0;

    since count is a static variable it will never be deleted meaning it will always exists same when a new
    creation us created meaning we can keep track of our creature number without putting them in an array or
    a data implementation.


    class Announcer{
    static void Announce()}{cout<<"Welcome"<<end;}
    }

    Announcer::announce;

    // static function helps us call a method without creating an object of the class type.

 */

#include <iostream>

using namespace std;


void countPeople(){
    static int count;
    ++count;
    cout<<count<<endl;
}

class Item{
public:

    Item(){
        cout<<"An Item Created "<< endl;
    }

    ~Item(){
        cout<<"An Item Destroyed "<<endl;
    }
};

class Villager{

    static int villageCounter;

public:

    Villager(){
        villageCounter++;
        cout<<"Village Population is "<< villageCounter<< endl;
    }

    ~Villager(){
        villageCounter--;
        cout<<"Village Population is "<< villageCounter<< endl;
    }

    static int getCount(){return villageCounter;}



};

int Villager::villageCounter = 0;

int main(){

    countPeople(); //will print 1
    countPeople(); //will print 2
    countPeople(); //will print 3
    countPeople(); //will print 4

    /*as we can see even though the count is out of scope after the function ends
     it not re-initialized since it is a static variable

     However, this does not mean that we can directly access them outside the scope it is just that
     their memory will not be cleared until the life of the program is not over.
     */
    {
        static Item item;
    }

    Item item2;

    //as seen we will not destroy item in the scope even though it is out of scope because it in static
    //memory it will be destroyed when the whole program is over

    Villager* vil1 = new Villager();
    Villager* vil2 = new Villager();
    Villager* vil3 = new Villager();
    Villager* vil4 = new Villager();


    cout<<Villager::getCount()<<endl;

    delete vil1;
    delete vil2;
    delete vil3;
    delete vil4;


    cout<<Villager::getCount()<<endl; //as you can see we can get the count without getting the
    // function from an object of that class since the member method is a static method.










}