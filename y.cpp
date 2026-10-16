#include<iostream>
using namespace std;
int main(){
    int code,original,count=0,n,high=1;//high=highest decimal
    cout << "Code: ";
    cin >> code;
    original=code;
    for (;code>0;code/=10){
        high*=10;
    }
    high/=10;
    code=original;
    while (high>0){
    n=code/high;
    switch (n){
        case 1:
        cout << "One "; 
        break;

        case 2:
        cout << "Two ";
        break;

        case 3:
        cout << "Three ";
        break;

        case 4:
        cout << "Four ";
        break;

        case 5:
        cout << "Five ";
        break;

        case 6:
        cout << "Six ";
        break;

        case 7:
        cout << "Seven ";
        break;

        case 8:
        cout << "Eight ";
        break;

        case 9:
        cout << "Nine ";
        break;

        case 0:
        cout << "Zero ";
        break;
    }
    code=code%high;
    high/=10;
    count++;

}
cout << "\n Digit Counter: " << count;
    

    return 0;
}