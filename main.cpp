#include<iostream>
#include"sampleheader.h"

using namespace std;

/*Class Declaration*/
class UserName;                  //Class for Displaying only Username of contestant
class profile;                  //Class for Displaying profile of contestant

class UserName                //UserName class Defination
{
    private:
        char user_name[20]="tejasmate";
    
    public:
        void show_UserName();             //declare a Class function for Displaying username
};

void UserName:: show_UserName()       //Defination of Class UserName's function show_UserName
{
    cout<<"  Username: "<<user_name<<endl;
}
    

class profile: public UserName        //profile class Defination
{
    private:
        char First_Name[15]="Tejas";
        char Last_Name[15]="Mate";

    public:
        int choice;
        
        void show_profile();        //declare a Class function for Displaying profile of contestant
        void show_choice()          //declare a Class function for choosing option between Display Profile or Exit 
        {
            cout<<"\n Do you want to more details about contestant?"<<endl;
            cout<<" then press 1 otherwise press 0 for exit"<<endl;
    
            cout<<" -----------------------------------------------------------------"<<endl;

            cout<<" Enter your Choice: ";
            cin>>choice;
            
            cout<<" -----------------------------------------------------------------"<<endl;
        }
};

void profile:: show_profile()            //Defination of Class profile's function show_profile
{
    cout<<"  First Name: "<<First_Name<<endl;
    cout<<"  Last Name: "<<Last_Name<<endl;
    
    show_UserName();                    //Calling Function show_UserName() of class UserName
                                        //for Displaying username
}


int main()                              //Main Function
{
    profile p1;                        //Object Declaration

    Welcome();
    
    cout<<"\n Press Enter key to display Contestant's Username";
    cin.get();
    
    p1.show_UserName();             //Calling show_UserName() function of class UserName by the object p1
    
    cout<<" ________________________________________________________________ "<<endl;

    p1.show_choice();              //Calling show_choice() function of class profile by the object p1
    
    if(p1.choice==1)
    {
        p1.show_profile();        //Calling show_profile() function of class profile by the object p1
    }
    
    Thanks();
    return 0;
}
