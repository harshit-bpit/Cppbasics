    /*printing 1
               2 3 2
               3 4 5 4 3    */
#include <iostream>         
using namespace std;

int main() {
    int n;
    cin >> n;

    // PRINTING SPACES
    for (int row=0; row<n; row=row+1){
        for (int col=0; col<col-row-1; col=col+1){
            cout << " ";
        }
        /*1
         23
        345
       4567   isse kaise  karte hai samjha rakha hai copy mai*/
       int start = row+1;
       for(int col=0; col<row+1; col=col+1){
        cout<< start ;
        start = start+1;
       }
       // PRINTING REVERSE COUNTING

       int begin = 2*row;
       for(int col=0; col<row; col=col+1){
        cout << begin;
        begin = begin - 1;
       }
       cout << endl;   
    }
}