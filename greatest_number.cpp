//PRN: 22070123102
//Exp-5

#include<iostream>
using namespace std;

int main() {
    int  num1, num2, num3;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;
    cout<<"Enter number-3: ";
    cin>>num3;

    if(num1>num2) {
        if(num1>num3) {
            cout<<num1<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    else if(num2>num1) {
        if(num2>num3) {
            cout<<num2<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    else {
        cout<<"All three numbers are equal";
    }

/*Output
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp5_1.cpp -o exp5_1 } ; if ($?) { .\exp5_1 }
Enter number-1: 23
Enter number-2: 98
Enter number-3: 67
98 is the greatest number */
}
