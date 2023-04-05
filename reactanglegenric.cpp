#include<iostream>
using namespace std;

int main (){
    int row_num,col_num;
    cout<< "no. of rows :";
    cin >> row_num;
    cout<< "no. of columns :";
    cin >> col_num;

    for(int row = 0; row<row_num; row+=1){
        for(int col=0; col<col_num; col+=1){
            cout << "* ";
        }
        cout<<endl;
    }
}  