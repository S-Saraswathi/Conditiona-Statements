//PRN: 22070123102
//Exp-5

#include<iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2, ans;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;
    cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice) {
        case 1:
        ans = num1+num2;
        cout<<"Sum = "<<ans<<endl;
        break;

        case 2:
        ans = num1 - num2;
        cout<<"Difference = "<<ans<<endl;
        break;

        case 3:
        ans = num1*num2;
        cout<<"Product = "<<ans<<endl;
        break;

        case 4:
        ans = num1/num2;
        cout<<"Quotient = "<<ans<<endl;
        break;

        default:
        cout<<"Wrong Input";
    }

/*Output
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp5_6.cpp -o exp5_6 } ; if ($?) { .\exp5_6 }
Enter number-1: 23
Enter number-2: 45
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 4
Quotient = 0.511111 */

}
