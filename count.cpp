#include<iostream>
#include<conio.h>
void check()
using namespace std;



    void esc()
 { 
    int n=0;
    string str;
    cin.get(str);
    cout<<"\n str "<<str;

    }   
 

    int main()

{
   esc();   
   getch();
   return 0;

}  

  void check()
{  
 int count=1; 
   char chk=27;
  
   string a,b,c,d;

     for (int o=0;o<2;o++)
     {
       
       if(count==1)
       { cout<<"\nenter a";
         getline(cin,a);
	 count++;
         // if(a==chk)        //error
	  //  break;
           
          }
        if(count==2)
       { cout<<"b";
         getline(cin,b);
	 count++;
         // if(b==chk)
	 // break;


	 }
  
       if(count==3)
       { cout<<"c";
         getline(cin,c);
        
	 count++;
         // if(c==chk)
	 // break;
 
	 }
    

        if(count==4)
       { cout<<"d";
         getline(cin,d);
	 count++;
        // if(d==chk)
	//  break;


          }
       }

      cout<<"a"<<a<<"\nb"<<b<<"\nc"<<c<<"\nd"<<d<<"\ncount "<<count; 
}
