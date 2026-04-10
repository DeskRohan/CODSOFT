#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int n = rand() % 100 + 1;
    int guess;
    int cnt = 0;
    while(guess != n){
        cout<<"Enter the guess : "<<endl;
        cin>>guess;
        if(guess > n){
            cout<<"Hint : Your guess is higher then the actual number."<<endl;
        }else
        if(guess < n){
            cout<<"Hint : Your guess is lower then the actual number."<<endl;
        }
        else{
            cout<<"Congrats! you guessed correctly"<<endl;
        }
        cnt++;
    }
    cout<<"You took "<<cnt<<" attempts to guess the number";
}
