//PRN: 22070123102
//Exp-5

#include<iostream>
using namespace std;

int main() {
    int choice;
    cout<<"1. Monday"<<endl<<"2. Tuesday"<<endl<<"3. Wednesday"<<endl<<"4. Thursday"<<endl<<"5. Friday"<<endl<<"6. Saturday"<<endl<<"7. Sunday"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice) {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Wrong Input";
    }

/*Output
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp5_5.cpp -o exp5_5 } ; if ($?) { .\exp5_5 }
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
Enter your choice: 3
Wednesday 

PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp5_5.cpp -o exp5_5 } ; if ($?) { .\exp5_5 }
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
Enter your choice: 9
Wrong Input */

}
