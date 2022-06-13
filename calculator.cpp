#include <iostream>
#include <fstream>
#include<string.h>
#include <cstring>
#include <cstdlib>
using namespace std;
void menu();

int main(int argc, char *argv[])
{
    float a,b;
    float Result=0;
    a=atoi(argv[1]);
    b=atoi(argv[3]);
    if((strcmp(argv[2],"+"))==0)
    {
     Result=a+b;
     cout << Result << "\n";
    }
    else if((strcmp(argv[2],"-"))==0)
    {
     Result=a-b;
     cout << Result << "\n";
    }
    else if((strcmp(argv[2],"*"))==0)
    {
     Result=a*b;
     cout << Result << "\n";
    }
    else if((strcmp(argv[2],"/"))==0)
    {
     Result=a/b;
     cout << Result << "\n";
    }
    while(true)
    {
    menu();
    int choice;

    cout << "Enter your choice : ";
    cin >> choice;
    if(choice==5)
    {
        cout << "Final Answer Is : " <<Result << "\n";
        cout << "Quited Successfully .....";
        break;
    }
    switch (choice) {
    case 1: {
        float num;
        cout << "Enter Number To Add : ";
        cin >> num;
        Result=Result+num;
        cout << "Answer = " << Result << "\n";
        break;
    }
    case 2: {
        float num;
        cout << "Enter Number To Substract : ";
        cin >> num;
        Result=Result-num;
        cout << "Answer = " << Result << "\n";
        break;
    }
    case 3: {
        float num;
        cout << "Enter Number To Multiply : ";
        cin >> num;
        Result=Result*num;
        cout << "Answer = " << Result << "\n";
        break;
    }
    case 4: {
        float num;
        cout << "Enter Number To Devide : ";
        cin >> num;
        Result=Result/num;
        cout << "Answer = " << Result << "\n";
        break;
    }
    
    case 5: {
        cout << "Thank you\n";
        break;
    }
    default:
        printf("Wrong Input\n");
    }
    }
   
 }
  void menu()
{
    cout << "Press 1 to Add Number\n";
    cout << "Press 2 to Substract Number\n";
    cout << "Press 3 to Multiply Number\n";
    cout << "Press 4 to Devide Number\n";
    cout << "Press 5 to exit\n";
}
