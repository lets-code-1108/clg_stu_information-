#include<iostream>
using namespace std;
class clg
{  public:
   int get_data()// to display neccassay 
   {
     cout << "****Welcome to XYZ Collage*****" << endl;
     cout << " 1) Technical branches " << endl << " 2) Medical branches " << endl << " 3) Diploma course " << endl;
   }
   int find() // user :- what want to want 
   {
     int choice;
     cout << " enter your intreset " ;
     cin >> choice;
     if( choice == 1)
     {
      cout<<"-------------------------------------------------------------------------------------------" << endl;
      cout <<     "List of Technical branches                 : seats      : fees per years" << endl;
      cout <<     "1)BTech in Computer science                : 60         : 80K " 
      << endl <<  "2)BTech in Artifical intelligence          : 60         : 80K "
      << endl <<  "3)BTeach in Mechincal enggninering         : 60         : 50K "
      <<endl <<   "4)BTech in Data science and anayalistics   : 60         : 80K " 
      << endl <<  "5)BTech Civil enggnerring                  : 40         : 50K " << endl;
      cout<<"------------------------------------------------------------------------------------------" << endl;
     }
     else if( choice == 2)
     {
      cout << "--------------------------------------------------------------------------------------"<<endl;
      cout <<     "List of Medical branches                   : seats       : fees per years" << endl;
      cout <<     "1)B-Pharma                                 : 60          : 90K " 
      << endl <<  "2)D-Pharma                                 : 60          : 70K " 
      << endl <<  "3)Nusring                                  : 30          :95K" << endl;
      cout << "--------------------------------------------------------------------------------------"<<endl;
     }
     else if(choice == 3)
     {
      cout <<"---------------------------------------------------------------------------------------"<<endl;
      cout <<     "List of Diploma course                     : seats       : fees per years" << endl;
      cout <<     "1)Mechinacl                                : 40          : 40K " 
      << endl <<  "2)Civil                                    : 50          : 40K " 
      << endl <<  "3)Computer science                         : 40          : 50K " << endl;
      cout<<"----------------------------------------------------------------------------------------"<<endl;
     }
     else
     {
      cout << " -----------NOT AVAIABLE------------ " << endl;
     }
   }


};
class addmission{
   private:
   string Name;
   int age;
   int phone_no;
   string pre_school_name;
   int pre_percentage;
   public:
   int set_addm(string name, int Ag, int mobile_no, string psn,int pp){
    Name=name;
    age=Ag;
    phone_no=mobile_no;
    pre_school_name=psn;
    pre_percentage= pp;
   }
   int get_addm()
   {
    cout << " please enter enter your details her" << endl;
    cout << "Enter your name " << endl;
    cin >>Name;
    cout << "Enter your Age  " << endl;
    cin>> age;
    cout << "Enter valid phone number "  << endl;
    cin >>phone_no;
    cout << "Enter your previous school name " << endl;
    cin>>pre_school_name;
    cout << "Enter your previous class percentage " << endl;
    cin >> pre_percentage ;
   } 
   //hostel and transport
   int facilities()
   {
    cout << "----------------------------------------------"
    <<endl<<"     Other facilities            "
    <<endl<<"           1)Hostel              "
    <<endl<<"           2)transport           "
    <<endl<<"----------------------------------------------"<<endl;
    int choice;
    cout << "         Enter your choice  " << endl;
    cin >> choice;
    if(choice==1)
    { 
      cout <<  "------------------------------------"
      <<endl<< " 3 seater room   : 50K per anum  "<<
      endl<<   " 2 seater room   : 70K per anum  "<<
      endl<<   " 1 seater room   : 90K per anum  "<<
      endl<<    "------------------------------------"<<endl;
      int select;
      cout << " Select your choice " <<endl;
      cin >> select;
      if(select==1)
      {
        cout << " you have choose 1 seater room " <<endl<<" yours fees is : 90k"<<endl;
      }
      else if(select==2)
      {
        cout << "you have choose 2 seater room " <<endl <<" yours fees is : 70K"<<endl;
      }
      else{
        cout << " you have choose 3 seater room " << endl<<" yours fees is: 50K" << endl;
      }
    }
    else{
       cout << "------------------------------------"
       <<endl<< "      Bus       : 30K per anum   "
       <<endl<< "      Van       : 50k per anum   "<<endl;
       cout<< "------------------------------------"<<endl;
       cout << "Select your choice " << endl;
       int select;
       cin >> select;
       if(select==1)
       {
        cout << "yours fees is 30k " << endl;
       }
       else
       {
        cout << " your fees is 50K " << endl; 
       }
    }
   }
   int show_data()
   {
    cout << " Yours details are " << endl;
    cout << "-----------------------------------------"<< endl;
    cout << "Your Name:-         "<<Name << endl;
    cout << "Your Age:-          "<<age << endl;
    cout << "Your phone number:- "<<phone_no << endl;
    cout << "School name:-       "<<pre_school_name << endl;
    cout << "percentage:-        "<<pre_percentage<< endl;
    cout << "-----------------------------------------"<< endl;
    
   }
};


int main()
{     
    clg cg;
    //all branches 
    cg.get_data();
    cout << endl;
    cg.find();
    //information regarding course
    cout << endl;
    addmission adms;
    cout << "Take Addimision "<< endl;
    adms.get_addm();
    //hostel 
    adms.facilities();
    cout << endl;
    adms.show_data();
    
    return 0; 
}