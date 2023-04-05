#include <iostream>
using namespace std;

int main () {
    //GRADING SYSTEM
    
    int score;
    cout<<"Enter score : "<<endl;
    cin>>score;

    if(score>=90){
        cout << "Wow you have scored A grade\n";
    }
    else if(score>=75){
        cout << "You have scored B grade but you could do better\n";
    }
    else if(score>=60){
        cout << "You have scored C grade \n";
    }
    else if(score>=40){
        cout << "You have scored D grade improvement needed\n";
    }
     else {
        cout << "BHAI KYA KAR RAHA HAI YAAR TU\n";      
    }


    // NO IS ODD OR EVEN

    int num;
    cout<<"enter the number : \n";
    cin>>num;

    if (num%2==0){
        cout << "NUMBER IS EVEN"<<endl;
    }
    else{
        cout<< "NUMBER IS ODD";
    }



}   