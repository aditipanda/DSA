#include<iostream>
using namespace std;

int main(){
    /* cout << "Namaste Duniya" << endl;

    float c = 2.0 / 5;
    cout << c << endl;

    float d = 2 / 5;
    cout << d << endl;

    int a;
    cin >> a;
    
    if (a>0){
        cout << "a is positive" << endl;
    }
    else{
        cout << "a is negative" << endl;
    }

    int a, b;
     //a = cin.get();
    //cout << a << endl;

    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    cout << a << '\t' << b << endl; 

    if (a>b){
        cout << "a is greater" << endl;
    }
    if (b>a){
        cout << "b is greater" << endl;
    }*/

    //  int a;

    // cin >> a;

    /*if (a>0){
        cout << "a is positive" << endl;
    }
    else{
        if (a<0){
             cout << "a is negative" << endl;
        }
        else{
            cout << "a is 0" << endl;
        }
    }*/

    /*if (a>0){
        cout << "a is positive" << endl;
    }
    else if (a<0){
        cout << "a is negative" << endl;
    }
    else{
        cout << "a is 0" << endl;
    }*/

    /*char ch;

    cin >> ch;

    int a = ch;

    if (a >= 48 && a <= 57){
        cout << " this is a number" << endl;
    } 
    else if (a >=65 && a <= 90){
        cout << " this is upper case" << endl;
    }
    else if (a >= 97 && a <= 122){
        cout << " this is lower case" << endl;
    }
    else{
        cout << "no conditions match! " << endl;
    }*/

    /*int n, i=1;
    cin >> n;

    while(i<=n){
        cout << i << " ";
        i = i+1;
    }*/

    int n, i=2;
    cin >> n;

    while(i < n){
        // divide hogya, not prime
        if (n%i==0){
            cout << "Not prime for " << i << endl;
        }
        else{
            cout << "Prime for " << i << endl;
        }
        i = i+1;
    }

} 