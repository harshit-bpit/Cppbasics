#include<iostream>
using namespace std;

int main (){
    for(int row = 0; row<3; row+=1){
        for(int col=0; col<5; col+=1){
            cout << "* ";
        }
        cout<<endl;
    }

    // SOLID SQUARE (4X4)

    for(int row = 0; row<4; row+=1){
        for(int col = 0; col<4; col+=1){
            cout<<"* ";
        }
        cout<<endl;
    }
}