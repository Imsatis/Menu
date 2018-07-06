#include<iostream>
#include<conio.h>
#include<fstream>

         //testing for edit environment by user;

using namespace std;

class data {

     string a,b,c,d,e,f,g,h,i,j,k,l;
     int count;	

     public:
           
       data() {
      
      ifstream read_count;
      read_count.open("data.txt");
      read_count>>count;

      ifstream read_item;
      read_item.open("menu_data.txt");
      read_item>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
            
         }

     void save_file(int &count) {

      ofstream save("data.txt");
      save<<count; 
       
         } 


        data(int a) {
      
      ifstream read;
      read.open("menu_data.txt");
      read>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;  //all items 
            
         }

     void save_file( ) {

      ofstream save("menu_data.txt");
      //save<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"<<k<<"\n"<<l<<"\n"; 
       
      save<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"<<k<<"\n"<<l; 

         } 



         void edit() {

         	string str;

           switch(count) {

           case 1:
              cout<<"1.";
              str=edit_mode();
               a=str;
              if(str=="")
                break;             

           case 2:
              cout<<"2.";
              str=edit_mode();
              b=str;
              if(str=="")
                break;               
	         
           case 3:
             cout<<"3.";
             str=edit_mode();
             c=str; 
              if(str=="")
                break;             
           
           case 4:
             cout<<"4.";
             str=edit_mode();
             d=str;
              if(str=="")
                break;

           case 5:
              cout<<"5.";
              str=edit_mode();
              e=str;
              if(str=="")
                break;         
           
           case 6:
              cout<<"6.";
              str=edit_mode();
              f=str;
              if(str=="")
                break;        

           case 7:
              cout<<"7.";
              str=edit_mode();
              g=str;
              if(str=="")
                break;        
           
           case 8:
              cout<<"8.";
              str=edit_mode();
              h=str;
              if(str=="")
                break;

           case 9:
              cout<<"9.";
              str=edit_mode();
              i=str;
              if(str=="")
                break;

           case 10:
              cout<<"10.";
              str=edit_mode();
              j=str;
              if(str=="")
                break;                                  

           case 11:
              cout<<"11.";
              str=edit_mode();
              k=str;
              if(str=="")
                break;        
      
           case 12:     
              cout<<"12.";
              str=edit_mode();
              l=str;
              if(str=="")
                break;                  
 
                 } 	
         }     


     string edit_mode( ) {

        char ch;
        string st;
        while((ch=getch())!=27) {
              
            cout<<ch;
            st+=ch;
                
          if(ch==13) {

            cout<<"\n";
            break;
              
              }
           }   
                
            if (ch==27) {
              st="";
             return st;
               }
             count++;  
            return st;  

       }


     void show() {
      int ino=1;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<a;  ino++;
  
  if(ino<count)  
    cout<<"\n"<<ino<<" "<<b;  ino++;

  if(ino<count)   
    cout<<"\n"<<ino<<" "<<c;  ino++;

  if(ino<count)   
    cout<<"\n"<<ino<<" "<<d;  ino++;

  if(ino<count)   
    cout<<"\n"<<ino<<" "<<e;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<f;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<g;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<h;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<i;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<j;  ino++;
    
  if(ino<count)
    cout<<"\n"<<ino<<" "<<k;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<l<<"\n";  ino++;
    
          }  


   };


        int main() {

           data object;

           object.show();
           getch();

           object.edit();

           object.show();
           getch();

        }