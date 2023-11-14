//
// Created by Eren Avsar on 2023-11-13.
//

/*

Casting and Type Conversion;

 float f - 5.0;
 int i = f;

this is an implicit type conversion - begin the screen the compiler converts f into an integer from float


Explicit type conversion is called casting which converts an expression one one type to another type.

C-Style Casting

float f = 3.52;
int i = (int)(f); //converts f into an integer using casting meaning explicit type conversion

it does not check if it is reasonable meaning it does not check for errors.

ptr or arith -> int
arith -> float
ptr or arith -> another


C++ Style Casting

dynamic_cast:
 derivation chain
 only polymorphism types

 P* parent;
 C* child;
 GC* grandchild;
 GC* grandchild2 = new GC;

 parent = dynamic_cast<P*>(grandchild2); //upcast
 parent = grandchild2;

 child = dynamic_cast<A*>(p); //downcast

 dynamic_cast<cast this >(to this);


 */

#include <iostream>
#include <string>

using namespace std;

class Object
{
public:
    virtual void BeginPlay();

    static void ObjectFunction(){
        cout<<"ObjectFunction() called"<<endl;
    }
};

class Actor : public Object
{
public:
    virtual void BeginPlay();

    static void ActorFunction(){
        cout<<"ActorFunction() called"<<endl;
    }
};

class Pawn : public Actor
{
public:
    virtual void BeginPlay();

    static void PawnFunction(){
        cout<<"PawnFunction() called"<<endl;
    }


};


void Object::BeginPlay() {
    cout<<"BeginPlay() called in Object"<<endl;
}

void Actor::BeginPlay() {
    cout<<"BeginPlay() called in Actor"<<endl;
}

void Pawn::BeginPlay() {
    cout<<"BeginPlay() called in Pawn"<<endl;
}


int main(){

    Object* obj = new Object;

    Actor* act = new Actor;

    Pawn* pwn = new Pawn;

    Object* ObjectArray[] = {obj,act,pwn};

    for(int i = 0; i<3;i++){
        ObjectArray[i]->ObjectFunction();
        //This should work since all the function below have inherited ObjectFunction.

    }

    cout<<"_____________________________"<<endl;

    for(int i = 0;i<3;i++){

        Object* pObject  = ObjectArray[i];

        Actor* pActor = dynamic_cast<Actor*>(pObject);

        if(pActor)
        {
            // if the cast is succsessfull meaning if the element at array index i was an Actor or a Pawn
            pActor->ActorFunction();

        }

    }

    cout<<"_____________________________"<<endl;

    for(int i = 0; i<3;i++){

        Object* pObject = ObjectArray[i];
        // implicitly convert to array into a Object;

        Pawn* pPawn = dynamic_cast<Pawn*>(pObject);
        //dynamically convert the object into a Pawn
        //if the object is a pawn or something lower in the inheritance then it returns the cased version else it is null

        if(pPawn){
            pPawn->PawnFunction();
        }
    }






}