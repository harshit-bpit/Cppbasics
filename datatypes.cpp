#include <iostream>
using namespace std;


int main () {
    int a =5;
    cout << "size of a is: "<< sizeof(a) <<endl;

    short b = 2;
    cout << "size of b is: "<< sizeof(b) <<endl;

    long c = 1456456;
    cout << "size of c is: "<< sizeof(c) <<endl;

    long long d = -456456456;
    cout << "size of d is: "<< sizeof(d) <<endl;

    bool e = 1;
    cout << "size of e is: "<< sizeof(e) <<endl;
    cout << e <<endl;


     // OPEARATORS
    // BITWISE (AND -> &); (OR -> |); (NOT -> ~); (XOR -> ^)
    bool f = true;
    bool g = false;
    cout << ~(g);
    int h =5;
    cout << (++h)*(++h);
 
}