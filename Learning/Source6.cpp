//
// Created by Eren Avsar on 2023-11-02.
//

/*



-----Loops-----


 WHILE-LOOP

 While ----> Condition Check --true--> loop-body
                             --false--> exit


 Do-While ----> loop-body ---> check condition --true--> loop-body
                                                -false-> exit

 float f1 = 0.00;
 float f2 = 1.00;

 while (f2>f1){
    f1+=0.01;
 }

 the loops checks if f2 is larger than f1 if it is then it adds 0.01 to f1 till it expression is no longer true;

double d1 = 0.10;
double d2 = 0.40;

 do{
    d1+=1.0;
 }while(d1<d2);

 the loop first add 1 to d1 and then checks if d1 is smaller d2 if it then it loops again else it exits.


 int a = 1;
 int b = 100;

 while(a<=100){
    a++;
    if(a>50){
        break;}
}

 this loops till a is not less than or equal to 100. however due to the if statement inside we break out of this loop
 when it is 51.

 break - breaks out of the loop before satisfying the loop expression;

 int i1 = 0;
 int i2 = 0;

 do{
    i1+=10;
    i2= i1*i1;

    if(i2>1000){
        continue;
    }

    cout<<i1<<endl;
    cout<<i2<<endl;

}while(i1<=100);

 Continue - stops the current iteration of the loop and restarts the loop.

 Meaning when i2 is larger than 1000 it will stop printing the variables on the screen and will skip that part of the code
 will however continue to work however it will skip the parts after continue since continue restarts the loop;
*/

#include <iostream>

int main(){

    int myInt(0);
    int count = 0;

    while(count<=10){
        count++;
        std::cout<<myInt++<<std::endl; //will count from 0 to 10
        //std::cout<++myInt<<std::endl will count from 1 to 11
    }


    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;



    int i1(30);
    int i2(20);
    count = 0;

    do{

        std::cout<<((count == 0) ? "PreIteration: " : "Iteration   : ")<<count<<std::endl;

        /* a conditonal operator is used to check if the current itreation is itereation 0 if it is instead
         * of outputing the iteration count it outputs saying pre iteration since the iteration has not yet stated in a
         * do while loop. Basically replacing the use of an if else condition check and helps wasting memory to hold a string
         * variable*/

        std::cout<<"Integer 1 is: "<<i1<<std::endl;
        std::cout<<"Integer 2 is: "<<i2<<std::endl;
        std::cout<<"Sum of both : "<<i1+i2<<std::endl;
        std::cout<<std::endl;
        count++;
        ++i1;
        i2++;



    }while(count<=10);
}
