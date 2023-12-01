#include<iostream>
using namespace std;

int main(){
    int integer;
    int x=0;
    int y=0;
    cout << "Enter an integer: ";
    cin >> integer;

    while (integer != 0)
    {
        if(integer%2 == 0){
            x =x+1;
            

        }else{
            y=y+1;
            
        }
    cout << "Enter an integer: ";
    cin >> integer;
    }
    
    cout << "#Even numbers = "<< x<<"\n"; 
    cout << "#Odd numbers = " << y;
    
    return 0;
}