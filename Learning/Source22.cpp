//
// Created by Eren Avsar on 2023-11-13.
//
/*

 Polymorphism

 inheritance is a 'is a' relationship
 A car 'is a' Vehicle
 A Plane 'is a' Vehicle
 A Jet 'is a' Plane also a Vehicle


 Parent* ptr;

 ptr = new Child;

 Parent* ptr2 = new GrandChild;

 we can say this because a Plane is a Vehicle before it is a Plane it is the same for
 we can say a jet is a Vehicle since before being anything at all in its core it is a Vehicle.

 Meaning anything below the inheritance hierarchy 'is also' everything above.

 it will call the version of the methods it is assigned meaning

 Parent* ptr = new GrandChild will call the methods of the GrandChild.

 meaning we can create an array of Parent* however this does not mean it needs to be a parent
 since polymorphism allows us to add objects lower the hierarchy.

 */





#include <iostream>
using namespace std;



class Object{
public:
    virtual void BeginPlay();
    };

void Object::BeginPlay() {
    cout<<"Object BeginPlay()"<<endl<<endl;
}

class Actor : public Object{
    virtual void BeginPlay() override;
};

void Actor::BeginPlay() {
    cout<<"Actor BeginPlay()"<<endl<<endl;
}

class Pawn: public Actor{
    virtual void BeginPlay() override;
};

void Pawn::BeginPlay() {
    cout<<"Pawn BeginPlay()"<<endl<<endl;
}



int main(){


    Object* ptr_to_object = new Object;
    Actor* ptr_to_actor = new Actor;
    Pawn* ptr_to_pawn = new Pawn;

    Object* ObjectArray[] = {ptr_to_object,ptr_to_actor,ptr_to_pawn};

    for (auto & i : ObjectArray){
        i->BeginPlay();
    }
    //as we can see in the output eventhough it is an array of Object we can still add its childeren
    // into the array.

    delete ptr_to_object;
    delete ptr_to_actor;
    delete ptr_to_pawn;
}
