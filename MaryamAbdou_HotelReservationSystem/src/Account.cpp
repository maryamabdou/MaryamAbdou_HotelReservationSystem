#include "Account.h"
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

Account::Account()
{

}
void Account::signing()
{
    randomNumber = rand();
    cout << "Are you a new Guest ?" << endl;
    cout << "1. for yes \t 2. for no" << endl;
    cin >> answer;
    if(answer==1) //create new account if the guest is new
    {
        cout << "What is your class (Monster or Human)" << endl;
        cin >> type;
        cout << "What is your username" << endl;
        cin >> username;
        cout << "Your ID is " << randomNumber << endl;
        fstream MyFile;
        MyFile.open("document.txt", std::ios_base::app); //storing the id in a file
        MyFile << randomNumber << "," << type <<"\n";
        MyFile.close();

    }
    else
    {
        cout << "Enter your ID :" << endl;
        cin >> id;
        char str[100];
        fstream f;
        f.open("document.txt",ios::in); //opening the file and checking if the id exist
        while(!f.eof())
        {
            f.getline(str, 100);
            if(strcmp(str,id)==0)
                break;
            else
            {
                cout << "Enter your ID again :" << endl;
                cin >> id;
            }
        }
    }
}

