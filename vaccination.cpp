#include<iostream>
#include<string.h>
#include<stdio.h>   
#include<fstream>
#include<conio.h>  
#include<windows.h> 
#include<iomanip>
#include<time.h> 
class Bank;
int main();
using namespace std;
class download_appointment_slip;
class Menu;
void heading_1(){
	cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\t\t\t\t\t\t         By:-   Vikrant Kumar \n\t\t\t\t\t\t\t\tShubhang Nagpal "<<endl<<endl;
}
static int counter = 0 ;
class Vaccine_Center;
static int total_vaccine;
static int H1=20,H2=21,H3=40,H4=19,H5=12;
const static int P1=500,P2=550,P3=600,P4=590,P5=600;

class Vaccine_Center{
	public:
    friend class Appointment;
    void vaccine_center(){
        
    }
		void show_center(){
		    cout<<"\n\t\t-----------------------------------------------------------------------------------\n";
            cout<<"\t\t\t Select your nearby vaccination center ";
            cout<<"\n\t\t-----------------------------------------------------------------------------------\n";
            cout<<"\t\t\t    Center                            No of Vaccine               Cost(Rs)";
            cout<<"\n\t\t-----------------------------------------------------------------------------------\n";
			cout<<"\n\t\t 1 : Apollo Hospital Sarita Vihar Delhi    :     " <<H1<<"                    "<<P1;
			cout<<"\n\t\t 2 : Guru Teg Bahadur Hospital Shahdara    :     " <<H2<<"                    "<<P2;
			cout<<"\n\t\t 3 : General Hospital                      :     " <<H3<<"                    "<<P3;
			cout<<"\n\t\t 4 : Kendriya Vidyalaya NFC Vigyan Vihar   :     " <<H4<<"                    "<<P4;
			cout<<"\n\t\t 5 : Shaanti Nursing Home                  :     " <<H5<<"                    "<<P5<<endl;
			cout<<"\n\t\t-----------------------------------------------------------------------------------\n";
		}
		void time_slot(){
		    cout<<"\n\t\t-----------------------------------------------------\n";
            cout<<"\t\t\t\t Select a free time slot ";
            cout<<"\n\t\t-----------------------------------------------------\n";
			cout<<"\n\t\t 1 : 9:00 AM - 12:00 PM";
			cout<<"\n\t\t 2 : 12:00 PM - 3:00 PM\n";
			cout<<"\n\t\t-----------------------------------------------------\n";
		}
        
		
};

class Appointment{
    protected :
    int x,y;
    long int card_no;
    int cvv;
    int exp_date;
	int age;
	char gender;
	float temperature;
	string Nationality;
	string profession;
	string vaccine;
    int Code_ID;
    friend void heading_1(); 
	public:
    string name;
    string status;
    int price;
    void viewall();
    
    void cancelappointment();
		char * center,* timee;
		//void input_info();
	void input_info(){
		system("cls");
		heading_1();
		if (counter<11){
            Vaccine_Center temp;
            center =new char(100);
            timee= new char(100);
			cout<<"\n\t\t\t-----------------------------------------\n";
    		cout<<"\t\t\t\t ENTER THE DETAILS ";
    		cout<<"\n\t\t\t-----------------------------------------\n\n";
            
     	    cout<<"\n\t\t Name             :-  ";
        	cin>>name;
        	cout<<"\n\t\t Nationality      :-  ";
        	cin>>Nationality;
        	cout<<"\n\t\t Gender (M|F)     :-  ";
        	cin>>gender;
        	cout<<"\n\t\t Age              :- ";
        	cin>>age;
        	cout<<"\n\t\t Profession       :-  ";
        	cin>>profession;
        	cout<<"\n\t\t Body temperature :-  ";
        	cin>>temperature;
        	vaccine = "Saverr21";
            srand(time(0));
    	    Code_ID=rand();
            temp.show_center();
            x=get_center_choice();
            if (x==1){
				center = "Apollo Hospital Sarita Vihar Delhi";
                price = P1;
				H1--;
			}
			else if (x==2){
				center = "Guru Teg Bahadur Hospital Shahdara";
                price = P2;
				H2--;
			}
			else if (x==3){
				center = "General Hospital" ;
                price = P3;
				H3--;
				
			}
			else if (x==4){
				center = "Kendriya Vidyalaya NFC Vigyan Vihar";
                price = P4;
				H4--;
			}
			else if (x==5){
				center = "Shaanti Nursing Home";
                price = P5;
				H5--;
			}
            temp.time_slot();
            y= get_time_slot();

            if (y==1){
				timee = "9:00 AM - 12:00 PM";
			}
			else if (y==2){
				timee = "12:00 PM - 3:00 PM";
			}
            else{
                cout<<"You choose Wrong option"<<endl;
            }
        	counter++;
        }
        else {
    		cout<<"Sorry ! You can get vaccine appointment for only 10 people by 1 account "<<endl;
	}
}
    string getname(){
    return name;
}
    int getid(){
    return Code_ID;
}
		int  get_center_choice(){
            int c;
			cout<<"\n\t\t Select a vaccination center : ";
			cin>>c;
            return c;
		}
		int get_time_slot(){
			int t;
			cout<<"\n\t\t Select a time slot : ";
			cin>>t;
			return t;
		}
		void show(){
		cout<<"\n\t\t Name             :-  "<<name;
        cout<<"\n\t\t Nationality      :-  "<<Nationality;
        cout<<"\n\t\t Gender (M|F)     :-  "<<gender;
        cout<<"\n\t\t Age              :-  "<<age<<" yrs";
        cout<<"\n\t\t Profession       :-  "<<profession;
        cout<<"\n\t\t Body temperature :-  "<<temperature<< " Deg.";
        cout<<"\n\t\t Vaccine          :-  "<<vaccine;
        cout<<"\n\t\t Code ID          :-  "<<Code_ID;
        cout<<"\n\t\t Center           :-  "<<center;
        cout<<"\n\t\t Time Slot        :-  "<<timee;
        cout<<"\n\t\t Amount to pay    :-  "<<price<<" Rs.";
        cout<<"\n\t\t Status           :-  "<<status<<endl;
		}
		
	
};

class Bank {
    protected:
    long int card;
    int cvv;
    long long int mobile_no;
    int year;
    string name;
    int balance;
    long long int cust_id;
    int m_pin;
    public:
    Bank(){
        card = 1234567890;
        cvv = 134;
        mobile_no = 9911085125;
        year = 1225;
        name = "Vikrant";
        balance = 35000 ;
        cust_id = 1029384756;
        m_pin = 12345;

    }
    
    bool check_details(long int c_no, int e_date, int Cvv){
            if(card == c_no && year == e_date && cvv == Cvv){
                return true;
            }
            else{
                return false;
            }
    }
    bool check_details(long int c_id, int mpin){
            if(cust_id == c_id && m_pin == mpin){
                return true;
            }
            else{
                return false;
            }
    }

    void operator -(Appointment &object){
        
        this -> balance = balance - object.price;
    }
    void show_bank_details(Appointment &object){
        system("cls");
        cout<<"\n\t\t\t Payment Reciept\n"<<endl;
        cout<<"\n\t\t Name           : "<<object.name<<endl;
        cout<<"\n\t\t Card Number    : "<<card<<endl;
        cout<<"\n\t\t Amount deducted: "<<object.price<<endl;
        cout<<"\n\t\t Balance        : "<<balance<<" Rs."<<endl;
        cout<<"\n\t\t Status         : Successfull"<<endl;
    }
    
    
};

inline void Insert(Appointment A)    //file creation 
{  ofstream fin;

   fin.open("vaccineappointment.txt", ios::app |ios::binary);
   fin.write((char*)&A,sizeof(A));     //writing to file
   fin.close();    //closing file
}

inline void Extract_data_from_file(Appointment &p)
{  
    int f=0;
    ifstream fout("vaccineappointment.txt");//opening file
    fout.read((char *)&p,sizeof(p));//reading file
    while(fout)
    {
      p.show();//display details
      f++;
      break;
     
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

    }
   fout.close();//closing file
   if(f==0)
   cout<<"No Record Found"<<endl;
}
void Appointment::cancelappointment()//function to cancel appointment
{ 
    system("cls");
    string N;
    int id;
    cout<<"\n\t\t Name      : ";
    cin>>N;
    cout<<"\n\t\t Code ID   : ";
    cin>>id;
    Appointment p;
    int f=0;
   ifstream fout("vaccineappointment.txt");//for reading file
   ofstream fin("Temporary.txt");//for writing to a new file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getname()!=N && p.getid()!=id)
      fin.write((char *)&p,sizeof(p));//writing to file
      else
     {
         
         counter--;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)
    cout<<"\n\t\t\t Appointment Cancelled \n";
   fout.close();//closing file
   fin.close();//closing file
   remove("vaccineappointment.txt");//deleting old file
   rename("Temporary.txt","vaccineappointment.txt");//renaming new file

}



class Payment : virtual public Appointment ,public Bank{
    int mode;
    int cap;
    int otp;
    int cvv;
    long int Cust_ID;
    int MPIN;
    public:
    Payment(){
    }
    Payment(int){
        system("cls");
        cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
        cout<<"\t\t\t\t\t\t         By:-   Vikrant Kumar \n\t\t\t\t\t\t\t\tShubhang Nagpal "<<endl<<endl;
        cout<<"-------------------  Select a payment Option  --------------------"<<endl;
        cout<<"\n\t\t\t1. Debit Card  ";
        cout<<"\n\t\t\t2. Credit Card ";
        cout<<"\n\t\t\t3. Net Banking ";
        cout<<"\n\t\t\t4. On Hand "<<endl;
        cout<<"\n\t\t\t >>>";
        cin>>mode;
    }
    bool do_payment(){
        if (mode==1 || mode==2){
            system("cls");
            cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
            cout<<"\t\t\t\t\t\t         By:-   Vikrant Kumar \n\t\t\t\t\t\t\t\tShubhang Nagpal "<<endl<<endl;
            cout<<"\n\t\t\tCard No         : ";
            cin>>card_no;
            cout<<"Expiry date MMYY:";
            cin>>exp_date;
            cout<<"CVV             : ";
            cin>>cvv;
            srand(time(0));
    	    cap=rand();
            cout<<"OTP             : "<<cap<<endl;
            cout<<"Enter above OTP : ";
            cin>>otp;
            if (otp == cap){
               return check_details(card_no , exp_date , cvv);
            }
            else{
                return false;
            }
        }
        else if (mode==3){
            cout<<"Custumer Id         : ";
            cin>>Cust_ID;
            cout<<"MPIN                :";
            cin>>MPIN;
            return check_details(Cust_ID,  MPIN) ;
        }
        else if (mode == 4){
            status = "On_Hand";
            return false;
        }
        return false;
    }

};
class Search_Entry : virtual public Appointment{
    protected:
    string name_to_search;
    int id;

    void get_data_to_search();


};

class download_appointment_slip: public Search_Entry,public Payment{
    string name;
    int id;
    public:
        friend void heading_1(); 
        void get_search_details(){
            cout<<"Name   : ";
            cin>>name;
            cout<<"Code ID: ";
            cin>>id;
        }

        void certificate()
        { 
        Appointment p;
        int f=0;
        ifstream fout("vaccineappointment.txt");
        fout.read((char *)&p,sizeof(p));
        while(fout)
        {
            if(p.getname()== name && p.getid() == id)
        {   
            show_certificate(); 
            cout<<"\n-------------------------------------------------------------"<<endl; 
            p.show();//display details
            cout<<"\n============================================================="<<endl;
            cout<<"\n\n\t\tTake a screenshot of this certificate for future reference"<<endl;
            f++;//incrementing f if record found
            break;
        }
        fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if f==0
   cout<<"No Record found"<<endl;

}
        void show_certificate(){
            system("cls");
			heading_1();
            cout<<"\n\t\t Vaccination Appointment ";
            cout<<"\n\n\t\tIt's a fight against virus\n";
            cout<<"\n\tMonday                         8 Nov 2021\n";
        }
};

//------------------------------------------


void view_all()
{  Appointment p;
   int f=1;
   ifstream fout("vaccineappointment.txt");//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
    cout<<"\n\t\t ========================================"<<endl;
    cout<<"\t\t               Person "<<f;
    cout<<"\n\t\t ========================================"<<endl;
    p.show();
    f++;
    fout.read((char *)&p,sizeof(p));//reading another record from the file

   }
   fout.close();//closing file
   if(f==1)
   cout<<"\n\t\t\tNo memeber got appointment through your account till now "<<endl;

}

class Menu {
	int choice;
    friend void heading_1(); 
	public:
		void operation(){
            system("cls");
			heading_1();
            cout<<"\t\t\tWhat do you want to do ?"<<endl;
            cout<<"\t\t==========================================="<<endl;
			cout<<"\t\t\t 1.To get appointment\n";
			cout<<"\t\t\t 2.To see vaccine availability\n ";
            cout<<"\t\t\t 3.To Download Appointment Slip \n";
			cout<<"\t\t\t 4.To show all \n";
			cout<<"\t\t\t 5.To cancel appointment\n";
			cout<<"\t\t\t 6.To logout\n";
            cout<<"\t\t==========================================="<<endl;
			
		}
		int get_choice(){
			cout<<"\n\t\t\t >>> ";
			cin>>choice;
			return choice;
		}
		void Task_giver(){
			switch(get_choice()){
				case 1:{
					Appointment A;
					A.input_info();
                    Payment P(1);
                    if (P.do_payment()==true){
                        (P-A);
                        A.status = "Paid";
                        P.show_bank_details(A);
                    }
                    else{
                        A.status = "To_be_Paid";
                    }
                    cout<<"\n\t\t Press Enter to continue\n";
                    getch();
                    
					Insert(A);
                    system("cls");
			        heading_1();
                    cout<<"\n\t\t\tHere is what we get from you \n"<<endl;
                    cout<<"\n\t\t ===================================================\n"<<endl;
					Extract_data_from_file(A);
                    cout<<"Please Remember the Code ID";
                    getch();
                    cout<<"\n\t\t Press Enter to confirm";
                    getch();
                    operation();
                    Task_giver();
					break;
				}
				case 2:{
					Vaccine_Center ob;
                    ob.show_center();
                    cout<<"\nPress Enter";
                    getch();
                    operation();
                    Task_giver();
					break;
				}
				case 3:{
					download_appointment_slip obj;
                    obj.get_search_details();
                    obj.certificate();
                    cout<<"\nPress Enter";
                    getch();
                    operation();
                    Task_giver();
					break;
				}
				case 4:{
					cout<<"\nPress Enter";
                    view_all();
                    getch();
                    operation();
                    Task_giver();
					break;
				}
				case 5:{
                    Appointment t;
                    t.cancelappointment();
                    cout<<"\nPress Enter";
                    getch();
                    operation();
                    Task_giver();
					break;
                }
 
                case 6:{
                    for(int i=6; i>=0; i--)
                    {
                    system("cls");
                    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tLogged Out Successfully ";
                    cout<<"\n\n\n\t\t\t\t\tHave a nice day  :)";
                    cout<<"\n\n\n\n\n\n\t\t\t\t\t Wait for "<<i<<" SECONDS.....";
                    Sleep(1000);
                    }
					main();
					break;
				}

                }
			}
		
};



