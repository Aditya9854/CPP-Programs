
#include<iostream>
#include<conio.h>
using namespace std;

class Calc
{
       private :
                int Num1,Num2;

       public  :
                int Sum,Sub;

       Calc()                                                 ///Default Constructor
       {
             Num1 = Num2 = Sum = Sub = 0;

             cout<<"\n Inside Default Constructor.."<<endl;

       }

       Calc(int No1,int No2)                               ///Parameterised Constructor
       {
            Num1 = No1;
            Num2 = No2;
            Sum  = No1+No2;
            Sub  = No1-No2;

            cout<<"\n Inside Parameterised Constructor.."<<endl;
       }

       Calc(Calc &Ref)                                    ///Copy Constructor
       {
            this->Num1 = Ref.Num1;
            this->Num2 = Ref.Num2;

            this->Sum =Ref.Sum;
            this->Sub =Ref.Sub;

            cout<<"\n Inside Copy Constructor.."<<endl;

       }
       void Set_Values()
       {
            cout<<"\n\n Enter Two Numbers = "<<endl;
            cin>>Num1>>Num2;

       }
       void Addition()
       {

            Sum = Num1+Num2;

       }
       void Subtraction()
       {

            Sub = Num1-Num2;

       }

};

int main()
{
        Calc Obj1;                                          ///Object Created With Default Constructor

        Obj1.Set_Values();

        Obj1.Addition();
        Obj1.Subtraction();

        cout<<"\n\n Addition For Obj1 = "<<Obj1.Sum<<endl;
        cout<<"\n Subtraction For Obj1 = "<<Obj1.Sub<<endl;

        getch();

        Calc Obj2(45,35);                                  ///Object Created With Parameterised Constructor

        cout<<"\n\n Addition For Obj2 = "<<Obj2.Sum<<endl;
        cout<<"\n Subtraction For Obj2 = "<<Obj2.Sub<<endl;

        getch();

        Calc Obj3(Obj2);                                       ///Object Created With Copy Constructor

        cout<<"\n\n Addition For Obj3 = "<<Obj3.Sum<<endl;
        cout<<"\n Subtraction For Obj3 = "<<Obj3.Sub<<endl;

        getch();

        Obj3.Set_Values();

        Obj3.Addition();
        Obj3.Subtraction();

        cout<<"\n\n Addition For Obj3 = "<<Obj3.Sum<<endl;
        cout<<"\n Subtraction For Obj3 = "<<Obj3.Sub<<endl;

        getch();
        return 0;

}

