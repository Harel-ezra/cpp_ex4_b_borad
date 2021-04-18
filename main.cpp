#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

int main(){
    Board b1;
    cout<<"----------board number 1-----"<<endl;
    b1.post(1,1, Direction::Horizontal, "hellow world!");
    b1.post(1,1, Direction::Vertical, "hellow world!");
    b1.post(5,7, Direction::Horizontal, "for sale!!");
    b1.post(6,7,Direction::Horizontal, "a new 2019 car only");
    b1.post(7,7,Direction::Horizontal, "10k nis, call me");
    b1.post(8,7,Direction::Vertical, "055-66606606");
    b1.show();

    cout<<endl;
    cout<<"----------board number 2-----"<<endl;
    Board b2;
    b2.post(50,55, Direction::Horizontal, " new cpp programing corse in now open!");
    b2.post(52,56, Direction::Horizontal, "send mail now for link - aa@aa.aa!");
    b2.show();

    cout<<endl;
    cout<<"----------board number 3-----"<<endl;

    Board b3;
    b3.post(1500,100, Direction::Horizontal, "looking for you in our group!!");
    b3.post(1500,100, Direction::Horizontal, "looking for you in our group!!");
    b3.post(1498,103, Direction::Vertical, "new show in the town!");
    b3.post(1499,104, Direction::Vertical, "the crazy band!");
    b3.post(1499,105, Direction::Vertical, "tickets here www.tik.com");
    b3.post(1508,106, Direction::Horizontal, "for sale a new hoase nees the see!");
    b3.post(1509,106, Direction::Horizontal, "call - 0566565656");
    b3.show();
    return 0;
}