#include<iostream>
using namespace std;

int main(){
    int number=1,odd=0,even=0;
    while(number!=0){
        cout << "Enter an integer: ";
        cin >>number;
     if(number%2==0){
            even++;
        }else{
            odd++;
        }
}
    cout << "#Even numbers = ";
    cout << even-1<<endl;
    cout << "#Odd numbers = ";
    cout << odd<<endl;
    return 0;
}
