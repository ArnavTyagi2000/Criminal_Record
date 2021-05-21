#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>
#include<process.h>
#include<dos.h>
class showroom
{
int model_no;
char company_name[10];
char colour[20];
int engine_no;
int mileage;
char car_name[15];
int price;
char car_brand[15];
public:
char code[10];
void bmw();
void mercedes_benz();
void audi();
void info();
void getdata();
void search();
void delet();
void exit1();
void out();
int get_mod_no()
{
return model_no;
}
}
sr1, mod;
//****************** Function for getting the data*******************//
void showroom::getdata()
{
ofstream fin("showroom.txt",ios::app);
cout<<"\n Enter your model number \t";
cin>>sr1.model_no;
cout<<"\n Enter your company's name \t";
gets(sr1.company_name);
cout<<"\n Enter your car's colour \t";
gets(sr1.colour);
cout<<"Enter your car's engine number \t";
cin>>sr1.engine_no;
cout<<"Enter your car's mileage \t";
cin>>sr1.mileage;
cout<<"Enter your car's name \t";
gets(sr1.car_name);
cout<<"Enter your car's price \t";
cin>>sr1.price;
fin.write((char*)& sr1, sizeof(sr1));
fin.close();
}
//****************** Function for searching a record*******************//
void showroom::search()
{ int md;
char found='N';
ifstream fi("showroom.txt", ios::in);
cout<<"\n Enter the car model number \t";
cin>>md;
while(!fi.eof())
{ fi.read((char*)& sr1, sizeof(sr1));
if(sr1.get_mod_no()==md)
{ sr1.out();
 found='y' ;
 break;
}
}
if(found=='n')
cout<<"\n Model number, name not found in the file!!";
fi.close();
cout<<"\n";
system("pause");
}
//************** Function for getting the search result *****************//
void showroom::out()
{
cout<<"\n Your model number is = \t"<<model_no;
cout<<"\n Your company's name is = \t"<<company_name;
cout<<"\n Your car's colour is = \t"<<colour;
cout<<"\n Your car's engine number is = \t"<<engine_no;
cout<<"\n Your car's mileage is = \t"<<mileage;
cout<<"\n Your car's name is = \t"<<car_name;
cout<<"\n Your car's price is = \t"<<price;
}
//***************** Function for getting the infomation ******************//
void showroom::info()
{ int ch;
cout<<"\n\n Information about:-";
cout<<"\n 1. BMW ";
cout<<"\n 2. Mercedes benz";
cout<<"\n 3. AUDI";
cout<<"\n \n Enter your choice:-";
cin>>ch;
if(ch==1)
{clrscr();
sr1.bmw(); }
else if (ch==2)
{clrscr();
sr1.mercedes_benz();
system("pause");
}
else if (ch==3)
{clrscr();
sr1.audi();
system ("pause");
}
else
cout<<"Wrong choice..... Please enter other option";
}
//**************** INFORMATION ABOUT BMW ********************//
void showroom::bmw()
{
cout<<"NAME:- Bayerishce Moteren Werke";
cout<<"\n**************************************************";
cout<<"\n+                     BMW 5 SERIES                                    +";
cout<<"\n+           Cost:- 49.90 Lac                                          +";
cout<<"\n+           Class:- Executive/luxurycar                       +";
cout<<"\n+           Colour:- Black                                             +";
cout<<"\n**************************************************";

cout<<"\n***************************************************";
cout<<"\n+                   BMW Z4                                                +";
cout<<"\n+         Cost:-71.91 Lac                                                +";
cout<<"\n+         Class:- Roadster                                             +";
cout<<"\n+         Colour:- Red                                                   +";
cout<<"\n***************************************************";
cout<<"\n+                  ____________________                            +";
cout<<"\n+                //                    ||               \\                        +";
cout<<"\n+               //                     ||                 \\                      +";
cout<<"\n+  ______//____________||__________\\________       +";
cout<<"\n+ |##########################|D   +";
cout<<"\n+ |                                                                           |D  +";
cout<<"\n+ |________________________________________|      +";
cout<<"\n+      0        0      0               0        0       0                  +";
cout<<"\n+       0@@@0 @@                 0@@@ 0@@                   +";
cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n";
system("pause");
}
//*********** INFORMATION ABOUT MERCEDES BENZ *************//
void showroom::mercedes_benz()
{
cout<<"NAME:- Mercedes Benz";
cout<<"\n***************************************************";
cout<<"\n+                MERCEDES BENZ A CLASS                     +";
cout<<"\n+           Cost:- 27.90 Lac                                            +";
cout<<"\n+           Class:- Compact car                                     +";
cout<<"\n+           Colour:- Blue                                                 +";
cout<<"\n***************************************************";
cout<<"\n***************************************************";
cout<<"\n+                MERCEDES BENZ S CLASS                      +";
cout<<"\n+           Cost:-1.4 crore                                               +";
cout<<"\n+           Class:- Full size luxury                                 +";
cout<<"\n+           Colour:- GREEN                                            +";
cout<<"\n***************************************************";



cout<<"\n+                      //=====================8                                      +";
cout<<"\n+                     //                       !!                  8                                    +";
cout<<"\n+                    //                        !!                    8                                  +";
cout<<"\n+     _______//==================================|                  +";
cout<<"\n+    |&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|D               +";
cout<<"\n+  [|                                                                                 |D               +";
cout<<"\n+  [|___________________________________________ |                   +";
cout<<"\n+            @      @     @                 @       @     @                                     +";
cout<<"\n+              @@@ @@                      @@@ @@                                        +";
cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n";
}
//************** INFORMATION ABOUT AUDI *********************//
void showroom::audi()
{
cout<<"NAME:- AUDI ";
cout<<"\n***************************************************";
cout<<"\n+                     AUDI Q-7                                             +";
cout<<"\n+           Cost:- 83.6 Lac                                               +";
cout<<"\n+           Class:- Fully luxury/SUV car                        +";
cout<<"\n+           Colour:- Silver                                               +";
cout<<"\n***************************************************";
cout<<"\n***************************************************";
cout<<"\n+                     AUDI A-8                                              +";
cout<<"\n+           Cost:-1.77 crore                                               +";
cout<<"\n+           Class:- Fully luxury car                                 +";
cout<<"\n+           Colour:- White                                               +";
cout<<"\n***************************************************";
cout<<"\n+                                                                                    +";
cout<<"\n+                             //:::::::::::::::::::::::::::::::::::::::::::\\       +";
cout<<"\n+                            //                         !!                    \\    +";
cout<<"\n+        ***********//______________!!___________\\    +";
cout<<"\n+       |%%%%%%%%%%%%%%%%%%%%%%|    +";
cout<<"\n+    0|                                                                       |    +";
cout<<"\n+    0|______________________________________|     +";
cout<<"\n+               0       0    0              0      0    0                   +";
cout<<"\n+                 000 00                   000 00                     +";
cout<<"\n+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n";
}
//*************FUNCTION FOR DELETION OF RECORD*************//
void showroom::delet()
{
ifstream fio("showroom.txt",ios::in);
ofstream file("temp.txt",ios::out);
long mod_no;
char found='F', confirm='N';
cout<<"\n Enter model number of the car whose record is to be deleted \n";
cin>>mod_no;
while(!fio.eof())
{
fio.read((char*)& sr1, sizeof(sr1));
if(sr1.get_mod_no()==mod_no)
{
sr1.out();
found='T';
cout<<"\n Are you sure, you want to delete this record ?(Y/N)... \t";
cin>>confirm;
if(confirm=='N')
file.write((char*)&sr1, sizeof(sr1));
}
else
file.write((char*)&sr1, sizeof(sr1));
}
if(found=='f')
cout<<"Record not found \n";
fio.close();
file.close();
remove("showroom.txt");
rename("temp.txt", "showroom.txt");
}
//******************** FUNCTION FOR EXIT ********************//
void showroom::exit1()
{
clrscr();




cout<<"\n 88888888888888888888888888888888888888888888888888 ";
cout<<"\n                                                                                                    ";
cout<<"\n                @  \2 \2 \2 \2  @                                                          ";
cout<<"\n              @                         @                                                        ";
cout<<"\n            @     BYE BYE         @                                                     ";
cout<<"\n           @        HAVE A         @                                                     ";
cout<<"\n           @           NICE DAY.. @                                                    ";
cout<<"\n            @                              @                                                     ";
cout<<"\n              @                         @                                                        ";
cout<<"\n                @ \2 \2 \2 \2 @                                                            ";
cout<<"\n                                                                                                    ";
cout<<"\n ===================================================";
//sleep(6);
cout<<"\n";
system("pause");
exit(0);
}
//******************* MAIN FUNCTION ************************//
void menu();
void main()
{
//showroom sr;
clrscr();
 menu();
//}
//while (ch>=1 && ch<=6);
cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||";
cout<<"\n                                                                                                              ||";
cout<<"\n         |0000                        ______                                                       ||";
cout<<"\n         |          0      \ \     / /   |  ____|                                                      ||";
cout<<"\n         |          0        \ \ / /     | |                                                               ||";
cout<<"\n         |0000             | |       | |____                                                        ||";
cout<<"\n         |0000             | |       |  ____|                                                       ||";
cout<<"\n         |          0          | |       | |                                                                ||";
cout<<"\n         |          0          | |       | |____                                                         ||";
cout<<"\n         |0000	      |_|       |_____|                                                       ||";
cout<<"\n                                                                                                               ||";
cout<<"\n#######################################||";

getch ();
}
void menu()
{
showroom sr;
int ch;
ab:
cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n                                  ########                                            ";
cout<<"\n                                  #   @    @     #                                           ";
cout<<"\n    *****                    #                  #                 *****                   ";
cout<<"\n    *      *                  #   ======    #                 *      *                  ";
cout<<"\n    *      ******** ___########__ ********        *                  ";
cout<<"\n    *                   |   HELLO               |                       *                  ";
cout<<"\n    ************|      WELCOME      |*************                    ";
cout<<"\n                         |       TITANIUM     |                                          ";
cout<<"\n                         |  CAR                     |                                         “;
cout<<”\n                         | SHOW ROOM     |                                          ";
cout<<"\n                         |________________|                                           ";
cout<<"\n                        //                                \\                                       ";
cout<<"\n                       //              //\\               \\                                     ";
cout<<"\n                      //              //    \\              \\                                    ";
cout<<"\n                     //_______//        \\_______\\                                    ";
cout<<"\n \n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
cout<<"\n";
system("pause");
cout<<"\n \n ##################################################";
cout<<"\n \n| ***************** [ MENU ] **********************";
cout<<"\n \n|                                                                                     |";
cout<<"\n \n|                      1. INSERT                                               |";
cout<<"\n \n|                      2. SEARCH                                            |";
cout<<"\n \n|                      3. DELETE                                             |";
cout<<"\n \n|                      4. INFORMATION                                |";
cout<<"\n \n|                      5. EXIT                                                    |";
cout<<"\n \n|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
cout<<"\n \n";
system("pause");
cout<<"\n Enter your choice:- ";
cin>>ch;
{
switch(ch)
{
case 1: sr.getdata();
break;
case 2: sr.search();
break;
case 3: sr.delet();
break;
case 4: sr.info();
break;
case 5: sr.exit1();
break;
default:
cout<<"\n Wrong choice";
}
goto ab;
}
}
