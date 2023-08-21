//PRN: 22070123102
//Exp-5

#include<iostream>
using namespace std;

int main() {
    int  num;
    cout<<"Enter number: ";
    cin>>num;
    if(num==0) {
        cout<<num<<" is zero"<<endl;
    }
    else if(num%2!=0){
        cout<<num<<" is odd"<<endl;
    }
    else {
        cout<<num<<" is even"<<endl;
    }

/*Output
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp5_2.cpp -o exp5_2 } ; if ($?) { .\exp5_2 }
Enter number: 43
43 is odd */
}