//
// Created by Eren Avsar on 2023-11-06.
//
/*

 Switch Statements are usefull if we need to check many if and else if statements

 ---switch--->case1,case2,case3,case4,case5,default

 in the switch statement there is a switch case where you write the expression to select one of the cases provided in the switch statement
 default state is used if no case is found from the expression in switch


 int selection = 4;

 switch(selection){
 case 1:
    cout<<1<<endl;
    break//breaks out of the current block we need to have a break in every single selection else it will run all the cases below.
case 2:
    cout<<2<<endl;
    break
case 3:
    cout<<3<<endl;
    break
case4:
    cout<<4<<endl;
    break
default::
    cout<<"Not found"<<endl;
}

 //basically selection tells us where to start for example if selection is 2 it will start from case 2 till it finished the whole code
 so to stop that we add breaks in every case.



 */

#include <iostream>

enum MovementStatus{
    Idle,
    Walking,
    Running
};

const float idleSpeed = 0.f;
const float walkSpeed = 400.f;
const float runSpeed = 800.f;

void UpdateMovementSpeed(MovementStatus movement,float& velocity);

void switchOnInt(int i);



int main(){

    MovementStatus mStatus;
    float movementVelocity;
    mStatus = Walking;
    movementVelocity = 400;

    UpdateMovementSpeed(mStatus,movementVelocity);

    std::cout<<"Movement Mode: "<<mStatus<<std::endl;
    std::cout<<"Character Velocity: "<<movementVelocity<<std::endl;

    switchOnInt(1231232);

}

void UpdateMovementSpeed(MovementStatus movement,float& velocity){
    switch (movement) {
        case Idle:
            velocity = idleSpeed;
            break;
        case Walking:
            velocity = walkSpeed;
            break;
        case Running:
            velocity = runSpeed;
            break;


    }
}

void switchOnInt(int i){
    switch(i){
        case 0:
            std::cout<<"Your Number is: "<<i<<std::endl;
            break;
        case 1:
            std::cout<<"Your Number is: "<<i<<std::endl;
            break;
        case 2:
            std::cout<<"Your Number is: "<<i<<std::endl;
            break;
        case 3:
            std::cout<<"Your Number is: "<<i<<std::endl;
            break;
        default:
            std::cout<<"Your Number is: "<<i<<std::endl;
    }
    //This is terrible code it is just to show the principle of switch statements never code a program that uses the same code again

}

//You can use anything on the condition for switch it is best to use it on enums and maybe in integers but even that I dont like

