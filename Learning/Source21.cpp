//
// Created by Eren Avsar on 2023-11-13.
//
/* Virtual Functions


 class Parent{
 public:
 virtual void Greet(){
    cout<<"Hello!"<<endl;
    }
}

 class Child: public Parent{
    public:
    void Greet()
    {
    cout<<"Hey how are you"<<endl;
    }
}

we are able to override the function to do something else without doing what the parents class parent does.


class GrandChild: public Child{
    public:
    virtual void Greet() override
    {
        cout<<"Goo-goo ga-ga!"<<endl;
    }
}

 // we can also write it like this


 */
#include <iostream>
using namespace std;

class Object{
public:
    virtual void BeginPlay();
};

 void Object::BeginPlay() {
    cout<<"Object BeginPlay() called"<<endl;
}



class Actor: public Object{
 public:

     virtual void BeginPlay() override;
};

void Actor::BeginPlay() {
    cout<<"Actor BeginPlay() called"<<endl;
}



class Pawn: public Actor{
public:
    virtual void BeginPlay() override;
};

void Pawn::BeginPlay() {
    Actor::BeginPlay(); //we can call the actor version of this function.
    cout<<"Pawn BeginPlay() called"<<endl;
}

int main(){
    //Object* obj = new Object;

    //obj->BeginPlay();

    //delete obj;

    //Actor* act = new Actor;

    //act->BeginPlay();

    //delete act;

    Pawn* pwn = new Pawn;

    pwn->BeginPlay();

    delete pwn;

    //as you can see even though we only have pawn we were still able to call the function from one above
    // in the inheritance hierarchy

}
