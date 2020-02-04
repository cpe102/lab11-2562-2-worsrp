#include<iostream>
#include<string>

using namespace std;

template <class type>
void mySwap(type &t1,type &t2);


int main(){

    int x = 6, y = 9;
    cout << "Before swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";
    mySwap(x,y);
    cout << "After swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";


    string a = "ABC", b = "DEF";
    cout << "Before swapping:\n";
    cout << "a = " << a << ", b = " << b << "\n";
    mySwap(a,b);
    cout << "After swapping:\n";
    cout << "a = " << a << ", b = " << b << "\n";


    char p = 'P', q = 'Q';
    cout << "Before swapping:\n";
    cout << "p = " << p << ", q = " << q << "\n";
    mySwap(p,q);
    cout << "After swapping:\n";
    cout << "p = " << p << ", q = " << q << "\n";

    return 0;
}

template <class type>
void mySwap(type &t1,type &t2){
    type a,b;
    a=t1; b=t2;
    t1=b; t2=a;
}


