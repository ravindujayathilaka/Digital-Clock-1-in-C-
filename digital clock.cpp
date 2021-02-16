#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;
void stop(int seconds){
    clock_t endwait;
    endwait = clock() + seconds + CLOCKS_PER_SEC;
    while(clock() < endwait){}
}
int main(){

    int h, m, s, hours, min, sec;
    cout << "Enter the Hours HH : ";
    cin >> hours;
    cout << "Enter the minutes MM : ";
    cin >> min;
    cout << "Enter the seconds SS : ";
    cin >> sec;

    for(h = hours ; h < 13 ; h++){
            if(m = 59)
        for(m = min ; m < 60 ; m++){
            if(s = 59)
            for(s = sec ; s < 60 ; s++){
                cout << "\t\t\t\t\n\n\n\t\t\t" << h << " : " << m << " : " << s;
                stop(1);
                system("cls");
            }
        }
    }
    return 0;
}
