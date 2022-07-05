#include<iostream>
#include<stdio.h>   
#include<fstream>
#include<conio.h>   
#include<string.h>
#include<windows.h> 
#include<iomanip>  
#include<time.h>  
#include "vaccination.cpp"
using namespace std;
void heading();
int main();
class Registration{

	private:
	int cap;
	int OTP;
	char name[30];

	protected:
	char mobile_no[11];
	char adhar_no[17];
    char password[20];
	friend void heading();

	public:
	void setData(){
		ofstream myfile("Registration.txt");
		srand(time(0));
    	cap=rand();
		system("cls");
    	heading();
    	fflush(stdin);
    	cout<<"\t\tName         : ";
    	cin.getline(name,30);
    	myfile<<name<<endl;
		cout<<"\t\tMobile No    : ";
		cin.getline(mobile_no,11);
		myfile<<mobile_no<<endl;
		cout<<"\t\tAadhar No    : ";
		cin.getline(adhar_no,17);
		myfile<<adhar_no<<endl;
        cout<<"\t\tSet Password : ";
		cin.getline(password,20);
		myfile<<password<<endl;
		myfile.close();
		cout<<"\t\tYour OTP  : "<<cap<<endl;
		cout<<"\t\tEnter above OTP ";
		cin>>OTP;
		if(cap==OTP){

			main();
			
		}
		else{
			
			for(int i=2; i>=0; i--)
                {
					cout<<"\n\t\t You entered wrong OTP"<<endl;
                    Sleep(1000);
                }
			main();
		}
}
	
};


class Login {
	private:
	char name[30] , n[30];
	char mobile[11] , m[11];
	char adhar[17] , a[17];
    char pass[20] , p[20];
    int i=0;
    int ch;

	public:
	void Login_1(){
	system("cls");
	heading();
	cout<<"\t\tRegistered Mobile Number : ";
	fflush(stdin);
	gets(mobile);
	cout<<"\t\tRegistered Adhar no.     : ";
	fflush(stdin);
	gets(adhar);
    cout<<"\t\tPassword                 : ";
	fflush(stdin);
    while((ch=getch()) != 13)
    {
        cout<<"*";
        pass[i]=ch;
        i++;
    }
    pass[i] = '\0';
}


	void checker(){
		ifstream my_file("Registration.txt");
		my_file>>name;
	
    	my_file>>m;
		my_file>>a;
        my_file>>p;
		my_file.close();
		if(strcmp(mobile,m)==0 && strcmp(adhar,a)==0 && strcmp(pass,p)==0){
            for(int i=3; i>=0; i--)
                    {
                    system("cls");
                    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tLogging In Please wait ";
                    cout<<"\n\n\n\n\n\n\t\t\t\t\t Wait for "<<i<<" SECONDS.....";
                    Sleep(1000);
                    }
            for(int i=2; i>=0; i--)
                    {
                    system("cls");
                    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tLogged In Successfully ";
                    cout<<"\n\n\n\t\t\t\t\tWelcome "<<name;
                    Sleep(1000);
                    }
			        
			        Menu M;
                    M.operation();
			        M.Task_giver();
		}
		else{
			cout<<"\t\t\nInvalid User Credential"<<endl;
            cout<<"\t\tPress Enter to go back to Home Screen"<<endl;
			getch();
            system("cls");
			main();
		}
		
    }


};
void heading(){
	cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\t\t\t\t\t\t         By:-   Vikrant Kumar \n\t\t\t\t\t\t\t\t Shubhang Nagpal"<<endl<<endl;
}
int main(){
	int a;
    system("cls");
	heading();
	cout<<"\t\t1.Register         2.Login"<<endl;

	cout<<"\n\t\t>>> ";
	cin>>a;
	
	if (a==1){
		Registration R;
		R.setData();
	}
	else if(a==2){
		Login L;
		L.Login_1();
		L.checker();
		
	}
	
}

