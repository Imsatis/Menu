#include<iostream>
#include<fstream.h>

         //testing for edit environment by user;


using namespace std;

  struct all_item {

    string a="",b="",c="",d="",e="",f="",g="",h="",i="",j="",k="",l="";   
  }

class data {

     public:
     void read_file(int &count) {
      
      ifstream read;
      read.open("data.txt");
      read>>count;
            
         }

     void save_file(int &count) {

      ofstream save("data.txt");
      save<<count; 
       
         } 


     void read_file(string &item_list) {
      
      ifstream read;
      read.open("menu_data.txt");
      read>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;  //all items 
            
         }

     void save_file(string &item_list) {

      ofstream save("menu_data.txt");
      save<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"<<k<<"\n"<<l<<"\n"; 
       
         }      

   };

     
     int main() {
  
	   string a="",b,c,d,e,f,g,h,i,j,k,l;
     char ch;
     data obj; 
     
       int count;
       obj.read_file(count);

       switch(count) {

           case 0:
             while(getch(ch)!=27) {
                cout<<ch;
                a+=ch;
                  }
              if    
	         count++;
	           
             }
	
       
       if(count==1) { 
       
           cin>>b;
           count++; 
        
             }
	
	
       if(count==2) { 
       
           cin>>c;
           count++;

              }

       if(count==3) { 
          
           cin>>d;
           count++;
        
              }
	
	     if(count==4) { 
       
           cin>>e;
           count++;
        
              }

       if(count==5) { 
         
           cin>>f;
           count++;       
              
              }

       if(count==6) { 
       
           cin>>g;
           count++;
           
              }
     
       if(count==7) { 
          
           cin>>h;
           count++; 
           
              }

       if(count==8) { 
       
           cin>>h;
           count++;
         
              }

       if(count==9) { 

           cin>>i;
           count++;
        
              }
       
        if(count==10) { 
       
           cin>>j;
           count++;
        
              }
 
        if(count==11) { 
       
           cin>>k;
           count++;
        
              }

       if(count==12) { 
       
           cin>>l;
           count++;
         
              }


    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    cout<<d<<"\n";
    cout<<e<<"\n";
    cout<<f<<"\n";
    cout<<g<<"\n";
    cout<<h<<"\n";
    cout<<i<<"\n";
    cout<<j<<"\n";
    cout<<k<<"\n";
    cout<<l<<"\n";
     getch();
       }
