#include<iostream>
using namespace std;
//YEH KUCH NAHI HAI BUS INVERTED OR FULL PYRAMID KA COMBO HAI
int main(){
    int n;

    cin>>n;
//FULL PYRAMID
    for(int row = 0; row<n ; row++){
       for(int col=0; col<n-row-1; col++){
        cout<<" ";
       }
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // INVERTED PYRAMID
    for (int row=0;row<n;row++){
        //space
        for(int col=0;col<row;col=col+1){
            cout << " " ;

        }
        //star
        for(int col=0;col<n-row;col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
}       