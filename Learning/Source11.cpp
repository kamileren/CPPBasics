//
// Created by Eren Avsar on 2023-11-06.
//

/* ENUMS


 Enums are a list of named integers

 enum PlayerStatus{
    PS_Crouched,
    PS_Standing,
    PS_Running,
    PS_Sprinting
    };

 enum ItemStatus{
    Is_PickedUp = 1,
    Is_Dropped, //will be one more than previous hence 2
    Is_Equipped //will be more than previous hence 3
    };


 enum GameState { GS_Paused,GS_Play} //Blank spaces are ignored by the compiler hence we can write it all in one line

 enum Currency{
    Copper = 1,
    Silver = 100,
    Gold = 1000
 };

 Enums are list of aliases for integer constants every single one below being one larger than the one before.

 PlayerStatus status = PS_Standing;

 switch(status){
    case PS_Standing:
        cout<<"Standing"<<endl;
        break;
    case PS_Crouched:
        cout<<"Crouched"<<endl;
        break;
    case PS_Running:
        cout<<"Running<<endl;
        break;
    case PS_Sptrinting:
        cout<<Sprinting<<endl;
        break;
    default:
        cout<<"Invalid Choice!"<<endl;


        */


#include <iostream>

enum PlayerStatus{

    Crouched,
    Idle,
    Walking,
    Running,
    Sprinting
};



int main(){

    PlayerStatus status; //we create a variable of name status that is of type PlayerStatus
    status = Idle;
    status = Walking;

    int num;

    std::cin>>num;

    if(num == Idle){
        std::cout<<"Current Status: Idle"<<std::endl;
    }else if(num == Walking){
        std::cout<<"Current Status: Walking"<<std::endl;
    }else{
        std::cout<<"Current Status: Not Found!"<<std::endl;
    }
}