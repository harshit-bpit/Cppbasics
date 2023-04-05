#include <iostream>
using namespace std;

int main() {
    //BASIC FOR LOOP PROBLEM
    for (int i = 0; i<5 ;i=i+1){
        cout<<"harshit\n";
        cout<<endl;
    }

    // TABLE OF 2
    for(int i=1;i<11;i=i+1){
        cout << "2 *"<<i<<"="<<2*i<<endl;
        cout<<endl;
    }
    // PRINT EVEN NOS. B/W 0 TO 20
    for(int i = 0;i<=20;i=i+2){
        cout<<i<<endl;
    }  

    //FOR ODD NOS. JUST DO int i = 1 REST ALL SAME 

    //REVERSE COUNTING 
    int n;
    cout <<"enter no: ";
    cin>>n;
    for(int i=n;i>0;i=i-1){
        cout<<i<<endl;
    }
}